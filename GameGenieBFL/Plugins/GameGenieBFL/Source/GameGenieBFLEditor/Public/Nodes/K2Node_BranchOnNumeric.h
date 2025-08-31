// Plugins/GameGenieBFL/Source/GameGenieBFLEditor/Public/Nodes/K2Node_BranchOnNumeric.h
#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_BranchOnNumeric.generated.h"

/**
 * Wildcard Branch (Numeric): A ? B  -> Less / Equal / Greater
 * Accepts any numeric or enum type on A/B (auto-typed wildcards).
 */
UCLASS()
class GAMEGENIEBFLEDITOR_API UK2Node_BranchOnNumeric : public UK2Node
{
	GENERATED_BODY()

public:
	// UK2Node
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual void GetMenuActions(class FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetMenuCategory() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual bool IsNodePure() const override { return false; }
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;

	// Pin names
	static const FName ExecPinName;
	static const FName LessPinName;
	static const FName EqualPinName;
	static const FName GreaterPinName;
	static const FName APinName;
	static const FName BPinName;

private:
	bool IsNumericOrEnumPinType(const FEdGraphPinType& PinType) const;
	bool IsFloatLikePinType(const FEdGraphPinType& PinType) const;
	void TryPropagateTypeBetweenAB();

	UEdGraphPin* GetAPin() const { return FindPin(APinName, EGPD_Input); }
	UEdGraphPin* GetBPin() const { return FindPin(BPinName, EGPD_Input); }
};
