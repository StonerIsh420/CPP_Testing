// Plugins/GameGenieBFL/Source/GameGenieBFLEditor/Private/Nodes/K2Node_BranchOnNumeric.cpp
#include "Nodes/K2Node_BranchOnNumeric.h"

#include "BlueprintActionDatabaseRegistrar.h"   // Registrar type
#include "BlueprintNodeSpawner.h"               // Spawner
#include "EdGraphSchema_K2.h"
#include "K2Node_CallFunction.h"
#include "K2Node_IfThenElse.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetCompiler.h"

#define LOCTEXT_NAMESPACE "GameGenieBFL"

const FName UK2Node_BranchOnNumeric::ExecPinName(TEXT("Execute"));
const FName UK2Node_BranchOnNumeric::LessPinName(TEXT("Less"));
const FName UK2Node_BranchOnNumeric::EqualPinName(TEXT("Equal"));
const FName UK2Node_BranchOnNumeric::GreaterPinName(TEXT("Greater"));
const FName UK2Node_BranchOnNumeric::APinName(TEXT("A"));
const FName UK2Node_BranchOnNumeric::BPinName(TEXT("B"));

void UK2Node_BranchOnNumeric::AllocateDefaultPins()
{
	// Exec pins
	CreatePin(EGPD_Input,  UEdGraphSchema_K2::PC_Exec, ExecPinName);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, LessPinName);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, EqualPinName);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, GreaterPinName);

	// Wildcard A/B (auto-typed on connect)
	UEdGraphPin* A = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, APinName);
	UEdGraphPin* B = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Wildcard, BPinName);
	A->PinToolTip = TEXT("Any numeric (int, int64, float/double), byte, or enum");
	B->PinToolTip = TEXT("Any numeric (int, int64, float/double), byte, or enum");
}

FText UK2Node_BranchOnNumeric::GetNodeTitle(ENodeTitleType::Type) const
{
	return LOCTEXT("BranchOnNumeric_Title", "Branch on Comparison (Numeric)");
}

FText UK2Node_BranchOnNumeric::GetTooltipText() const
{
	return LOCTEXT("BranchOnNumeric_Tooltip",
		"Branches to Less / Equal / Greater.\n"
		"Accepts any NUMERIC or ENUM type on A and B.");
}

FText UK2Node_BranchOnNumeric::GetMenuCategory() const
{
	return LOCTEXT("MenuCategory", "Game Genie BFL|Flow Control");
}

void UK2Node_BranchOnNumeric::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create(ActionKey);
		ActionRegistrar.AddBlueprintAction(ActionKey, Spawner);
	}
}

bool UK2Node_BranchOnNumeric::IsNumericOrEnumPinType(const FEdGraphPinType& PinType) const
{
	// Disallow containers
	if (PinType.ContainerType != EPinContainerType::None)
	{
		return false;
	}

	const FName& Cat = PinType.PinCategory;

	// Floats/doubles
	if (Cat == UEdGraphSchema_K2::PC_Real)
	{
		return true;
	}
	// Integers
	if (Cat == UEdGraphSchema_K2::PC_Int || Cat == UEdGraphSchema_K2::PC_Int64)
	{
		return true;
	}
	// Byte or Enum (UE often encodes enums as Byte + UEnum)
	if (Cat == UEdGraphSchema_K2::PC_Byte)
	{
		if (PinType.PinSubCategoryObject.IsValid())
		{
			if (Cast<UEnum>(PinType.PinSubCategoryObject.Get()))
			{
				return true; // enum
			}
		}
		return true; // raw byte counts as numeric
	}

	// Some engine versions expose PC_Enum directly
#if defined(PC_Enum)
	if (Cat == UEdGraphSchema_K2::PC_Enum)
	{
		return true;
	}
#endif

	return false;
}

bool UK2Node_BranchOnNumeric::IsFloatLikePinType(const FEdGraphPinType& PinType) const
{
	return PinType.PinCategory == UEdGraphSchema_K2::PC_Real;
}

static FName GG_ResolveKismetMathFunc(const TCHAR* LegacyFloatName, const TCHAR* DoubleName)
{
	// UE5.6 commonly uses Double* names; older engines use Float*
	UClass* MathLib = UKismetMathLibrary::StaticClass();
	if (MathLib->FindFunctionByName(FName(LegacyFloatName)))
	{
		return FName(LegacyFloatName);
	}
	if (MathLib->FindFunctionByName(FName(DoubleName)))
	{
		return FName(DoubleName);
	}
	return NAME_None;
}

void UK2Node_BranchOnNumeric::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();

	UEdGraphPin* ExecIn   = FindPinChecked(ExecPinName, EGPD_Input);
	UEdGraphPin* LessOut  = FindPinChecked(LessPinName, EGPD_Output);
	UEdGraphPin* EqualOut = FindPinChecked(EqualPinName, EGPD_Output);
	UEdGraphPin* GreatOut = FindPinChecked(GreaterPinName, EGPD_Output);
	UEdGraphPin* A        = FindPinChecked(APinName, EGPD_Input);
	UEdGraphPin* B        = FindPinChecked(BPinName, EGPD_Input);

	// Ensure types are resolved and valid
	if (A->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard || B->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard)
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("WildcardUnresolved", "@@ has unresolved wildcard pins. Connect A and B to numeric values.").ToString(), this);
		return;
	}
	if (!IsNumericOrEnumPinType(A->PinType) || !IsNumericOrEnumPinType(B->PinType))
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("NotNumeric", "@@ only supports numeric/enum types.").ToString(), this);
		return;
	}

	const bool bUseFloat = IsFloatLikePinType(A->PinType);

	// Pick function names compatible with UE version
	const FName LessFunc    = bUseFloat ? GG_ResolveKismetMathFunc(TEXT("Less_FloatFloat"),       TEXT("Less_DoubleDouble"))       : FName(TEXT("Less_IntInt"));
	const FName GreaterFunc = bUseFloat ? GG_ResolveKismetMathFunc(TEXT("Greater_FloatFloat"),    TEXT("Greater_DoubleDouble"))    : FName(TEXT("Greater_IntInt"));
	const FName EqualFunc   = bUseFloat ? GG_ResolveKismetMathFunc(TEXT("EqualEqual_FloatFloat"), TEXT("EqualEqual_DoubleDouble")) : FName(TEXT("EqualEqual_IntInt"));

	if (LessFunc.IsNone() || GreaterFunc.IsNone() || EqualFunc.IsNone())
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("MissingMathFuncs", "@@ could not resolve KismetMathLibrary comparison functions for this engine version.").ToString(), this);
		return;
	}

	auto SpawnCompareCall = [&](const FName FuncName) -> UK2Node_CallFunction*
	{
		UK2Node_CallFunction* Node = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
		Node->FunctionReference.SetExternalMember(FuncName, UKismetMathLibrary::StaticClass());
		Node->AllocateDefaultPins();
		return Node;
	};

	UK2Node_CallFunction* LessCall    = SpawnCompareCall(LessFunc);
	UK2Node_CallFunction* GreaterCall = SpawnCompareCall(GreaterFunc);
	UK2Node_CallFunction* EqualCall   = SpawnCompareCall(EqualFunc);

	// Wire A/B into Less (move), then clone links into other calls
	{
		UEdGraphPin* AIn = LessCall->FindPinChecked(TEXT("A"));
		UEdGraphPin* BIn = LessCall->FindPinChecked(TEXT("B"));
		CompilerContext.MovePinLinksToIntermediate(*A, *AIn);
		CompilerContext.MovePinLinksToIntermediate(*B, *BIn);

		UEdGraphPin* A2 = GreaterCall->FindPinChecked(TEXT("A"));
		UEdGraphPin* B2 = GreaterCall->FindPinChecked(TEXT("B"));
		UEdGraphPin* A3 = EqualCall->FindPinChecked(TEXT("A"));
		UEdGraphPin* B3 = EqualCall->FindPinChecked(TEXT("B"));

		CompilerContext.CopyPinLinksToIntermediate(*AIn, *A2);
		CompilerContext.CopyPinLinksToIntermediate(*BIn, *B2);
		CompilerContext.CopyPinLinksToIntermediate(*AIn, *A3);
		CompilerContext.CopyPinLinksToIntermediate(*BIn, *B3);
	}

	// Two branches to make 3-way split
	UK2Node_IfThenElse* FirstBranch  = CompilerContext.SpawnIntermediateNode<UK2Node_IfThenElse>(this, SourceGraph);
	UK2Node_IfThenElse* SecondBranch = CompilerContext.SpawnIntermediateNode<UK2Node_IfThenElse>(this, SourceGraph);
	FirstBranch->AllocateDefaultPins();
	SecondBranch->AllocateDefaultPins();

	// ExecIn -> First (Less?)
	Schema->TryCreateConnection(ExecIn, FirstBranch->GetExecPin());
	Schema->TryCreateConnection(LessCall->GetReturnValuePin(), FirstBranch->GetConditionPin());

	// True -> LessOut ; False -> Second (Greater?)
	CompilerContext.MovePinLinksToIntermediate(*LessOut, *FirstBranch->GetThenPin());
	Schema->TryCreateConnection(FirstBranch->GetElsePin(), SecondBranch->GetExecPin());
	Schema->TryCreateConnection(GreaterCall->GetReturnValuePin(), SecondBranch->GetConditionPin());

	// True -> GreaterOut ; False -> EqualOut
	CompilerContext.MovePinLinksToIntermediate(*GreatOut, *SecondBranch->GetThenPin());
	CompilerContext.MovePinLinksToIntermediate(*EqualOut, *SecondBranch->GetElsePin());

	BreakAllNodeLinks();
}

void UK2Node_BranchOnNumeric::NotifyPinConnectionListChanged(UEdGraphPin* ChangedPin)
{
	Super::NotifyPinConnectionListChanged(ChangedPin);

	UEdGraphPin* A = GetAPin();
	UEdGraphPin* B = GetBPin();
	if (!A || !B) { return; }

	// If a wildcard gets a typed link, adopt that type; propagate to the other pin if it is still wildcard.
	auto AdoptFromFirstLink = [](UEdGraphPin* WildPin)
	{
		if (WildPin && WildPin->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard && WildPin->LinkedTo.Num() > 0)
		{
			WildPin->PinType = WildPin->LinkedTo[0]->PinType;
		}
	};

	AdoptFromFirstLink(A);
	AdoptFromFirstLink(B);

	// If both unlinked, reset to wildcard to keep node flexible
	if (A->LinkedTo.Num() == 0 && B->LinkedTo.Num() == 0)
	{
		A->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
		B->PinType.PinCategory = UEdGraphSchema_K2::PC_Wildcard;
	}
	else
	{
		// If one is still wildcard, mirror the other's type for convenience
		if (A->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard && B->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
		{
			A->PinType = B->PinType;
		}
		else if (B->PinType.PinCategory == UEdGraphSchema_K2::PC_Wildcard && A->PinType.PinCategory != UEdGraphSchema_K2::PC_Wildcard)
		{
			B->PinType = A->PinType;
		}
	}
}

#undef LOCTEXT_NAMESPACE
