// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Data/GGDataLibrary.cpp
#include "Data/GGDataLibrary.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "JsonObjectConverter.h"
#include "Algo/BinarySearch.h"

bool UGGDataLibrary::GetWeightedRandomRowFromDataTable(const UDataTable* Table, FName WeightField, float Luck, FName& OutRowName)
{
	OutRowName = NAME_None;
	if (!Table || WeightField.IsNone()) { return false; }

	const TMap<FName, uint8*> RowMap = Table->GetRowMap();
	if (RowMap.Num() == 0) { return false; }

	const UScriptStruct* RowStruct = Table->GetRowStruct();
	FProperty* WeightProp = RowStruct ? RowStruct->FindPropertyByName(WeightField) : nullptr;
	if (!WeightProp || (!WeightProp->IsA<FFloatProperty>() && !WeightProp->IsA<FDoubleProperty>() && !WeightProp->IsA<FIntProperty>()))
	{
		return false;
	}

	TArray<double> Cum; Cum.Reserve(RowMap.Num());
	TArray<FName> Keys; Keys.Reserve(RowMap.Num());
	double Total = 0.0;
	const double LuckS = FMath::Max(0.0f, Luck);

	for (const auto& Pair : RowMap)
	{
		const FName RowName = Pair.Key;
		const uint8* RowPtr = Pair.Value;

		double W = 0.0;
		if (const FNumericProperty* Num = CastField<FNumericProperty>(WeightProp))
		{
			if (Num->IsFloatingPoint())
			{
				W = Num->GetFloatingPointPropertyValue(RowPtr);
			}
			else
			{
				W = (double)Num->GetSignedIntPropertyValue(RowPtr);
			}
		}
		W = FMath::Max(0.0, W) * (double)LuckS;
		Total += W;
		Cum.Add(Total);
		Keys.Add(RowName);
	}

	if (Total <= 0.0) { return false; }

	const double R = FMath::FRandRange(0.f, (float)Total);
	const int32 Idx = Algo::UpperBound(Cum, R);
	const int32 Clamped = FMath::Clamp(Idx, 0, Keys.Num() - 1);
	OutRowName = Keys[Clamped];
	return true;
}

void UGGDataLibrary::FindSaveGameSlots(TArray<FGGSaveSlotInfo>& OutSlots)
{
	OutSlots.Reset();

	const FString Dir = FPaths::ProjectSavedDir() / TEXT("SaveGames");
	TArray<FString> Files;
	IFileManager::Get().FindFiles(Files, *(Dir / TEXT("*.sav")), true, false);

	for (const FString& F : Files)
	{
		const FString Full = Dir / F;
		const FString SlotName = FPaths::GetBaseFilename(F);

		const FFileStatData Stat = IFileManager::Get().GetStatData(*Full);
		FGGSaveSlotInfo Info;
		Info.SlotName = SlotName;
		Info.FileSize = Stat.FileSize;
		Info.Timestamp = Stat.ModificationTime.ToIso8601();
		OutSlots.Add(Info);
	}
}

bool UGGDataLibrary::ParseJsonToStruct(const FString& JsonString, UScriptStruct* StructType, uint8& OutStruct)
{
	if (!StructType) { return false; }

	TSharedPtr<FJsonObject> Obj;
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
	if (!FJsonSerializer::Deserialize(Reader, Obj) || !Obj.IsValid())
	{
		return false;
	}

	// Write directly into the caller-provided struct memory.
	return FJsonObjectConverter::JsonObjectToUStruct(Obj.ToSharedRef(), StructType, &OutStruct, /*CheckFlags*/0, /*SkipFlags*/0);
}
