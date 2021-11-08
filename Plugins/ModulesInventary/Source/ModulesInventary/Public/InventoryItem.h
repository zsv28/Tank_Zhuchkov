#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventoryItem.generated.h"

UENUM()
enum class EItemType : uint8
{
    IT_Miscellaneous,
    IT_Currency,
    IT_Equipment,
    IT_Consumable
};

UENUM()
enum class EItemRarity : uint8
{
    IR_Common,
    IR_Uncommon,
    IR_Rare,
    IR_Epic,
    IR_Legendary
};

UENUM()
enum class EEquipSlot : uint8
{
    ES_None,
    ES_Cannon,
    ES_Tower,
	ES_Engine,
    ES_TankTrack,
    ES_Bullet
};

USTRUCT(BlueprintType)
struct FInventoryItemInfo : public FTableRowBase
{
    GENERATED_BODY()

public:
    // tech info
    UPROPERTY(EditAnywhere, Category = "General")
    FName ID;

    // text info
    UPROPERTY(EditAnywhere, Category = "General")
    FText Name;
    UPROPERTY(EditAnywhere, Category = "General")
    FText Description;

    // enums
    UPROPERTY(EditAnywhere, Category = "Typing")
    EItemType Type;
    UPROPERTY(EditAnywhere, Category = "Typing")
    EItemRarity Rarity;
    UPROPERTY(EditAnywhere, Category = "Typing")
    EEquipSlot EquipSlot;



    // visual representation
    UPROPERTY(EditAnywhere, Category = "Visual")
    TSoftObjectPtr<UTexture2D> Icon;
    UPROPERTY(EditAnywhere, Category = "Visual")
    TSoftObjectPtr<UStaticMesh> Mesh;

    // stats
    UPROPERTY(EditAnywhere, Category = "Stats")
    int32 DamageStat;
    UPROPERTY(EditAnywhere, Category = "Stats")
    int32 ArmorStat;
    UPROPERTY(EditAnywhere, Category = "Stats")
    int32 IntelligenceStat;
	/*UPROPERTY(EditAnywhere, Category = "Stats")
	float AmmoStat;
	UPROPERTY(EditAnywhere, Category = "Stats")
	float HealthStat;*/
};

USTRUCT(BlueprintType)
struct FInventorySlotInfo
{
    GENERATED_BODY()

public:
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
    FName ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
    int32 Count;
};