#include "gc/egg.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 inventoryId;
    u8 abilityId;
    u8 unkB;
    u8 unkC;
    u8 unkD;
} eggStruct;

typedef struct {
    eggStruct eggs[4];
} eggsStruct;

extern eggsStruct D_80800200_gcegg[2];

s32 gcegg_entrypoint_0(s32 arg0)
{
    s32 index;
    s32 index_2;

    for (index = 0; index < 2; index++)
    {
        for (index_2 = 0; index_2 < 4; index_2++)
        {
            if (arg0 == D_80800200_gcegg[index].eggs[index_2].unk0)
            {
                return D_80800200_gcegg[index].eggs[index_2].unk8;
            }
        }
    }
    return 0;
}

s32 gcegg_entrypoint_1(s32 arg0)
{
    s32 index;
    s32 index_2;

    for (index = 0; index < 2; index++) 
    {
        for (index_2 = 0; index_2 < 4; index_2++) 
        {
            if (arg0 == D_80800200_gcegg[index].eggs[index_2].unk4)
            {
                return D_80800200_gcegg[index].eggs[index_2].unk8;
            }
        }
    }
    return 0;
}

s32 gcegg_entrypoint_2(s32 arg0)
{
    return D_80800200_gcegg[0].eggs[arg0].unk2;
}

s32 gcegg_entrypoint_3(s32 arg0)
{
    return D_80800200_gcegg[0].eggs[arg0].unk6;
}


u8 gcegg_entrypoint_4(s32 arg0)
{
    return D_80800200_gcegg[0].eggs[arg0].unkC;
}

//Return the given egg's inventory value
s32 gcegg_entrypoint_5(s32 arg0)
{
    return D_80800200_gcegg[0].eggs[arg0].inventoryId;
}

int gcegg_entrypoint_6(s32 arg0)
{
    s32 returnValue;
    returnValue = D_80800200_gcegg[0].eggs[arg0].abilityId;
    return  returnValue == 0x3C || ability_getValue(returnValue);
}

int gcegg_entrypoint_7(s32 arg0)
{
    s32 returnValue;
    if (!func_800D3948())
    {
        return 1;
    }
    else
    {
        returnValue = D_80800200_gcegg[0].eggs[arg0].unkB;
    }
    return returnValue;
}