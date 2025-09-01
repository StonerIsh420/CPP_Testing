// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Materials/GGMaterialLibrary.cpp
#include "Materials/GGMaterialLibrary.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UMaterialInstanceDynamic* UGGMaterialLibrary::CreateDynamicMaterialInstanceSafe(UMeshComponent* Mesh, int32 MaterialIndex)
{
	if (!Mesh || MaterialIndex < 0) { return nullptr; }
	UMaterialInterface* MI = Mesh->GetMaterial(MaterialIndex);
	if (!MI) { return nullptr; }
	if (UMaterialInstanceDynamic* MID = Cast<UMaterialInstanceDynamic>(MI))
	{
		return MID;
	}
	UMaterialInstanceDynamic* NewMID = UMaterialInstanceDynamic::Create(MI, Mesh);
	if (NewMID)
	{
		Mesh->SetMaterial(MaterialIndex, NewMID);
	}
	return NewMID;
}
