#include "ch/nests.h"

typedef struct {
    s16 unk0;
    s16 abilityId;
    s16 unk4;
    s16 unk6;
    s16 firstTimeFlag;
    u8 unkA;
    u8 unkB;
    u8 unkC;
}D_80801118_chnestsUnk;

typedef struct
{
    s32 unk0[6];
    u8 unk18;
    u8 unk19;
    u16 unk1A_5 : 11;
    u16 unk1A_0 : 5;
}UnkArg2ChNest;

extern D_80801118_chnestsUnk D_80801118_chnests[];
extern s16 D_808011DC_chnests[][2];

extern ActorData D_808011E8_chnests;
extern ActorData D_80801230_chnests;
extern ActorData D_80801278_chnests;
extern ActorData D_808012C0_chnests;
extern ActorData D_80801308_chnests;
extern ActorData D_80801350_chnests;
extern ActorData D_80801398_chnests;
extern ActorData D_808013E0_chnests;
extern ActorData D_80801428_chnests;
extern ActorData D_80801470_chnests;
extern ActorData D_808014B8_chnests;
extern ActorData D_80801500_chnests;
extern ActorData D_80801548_chnests;

extern u8 D_8012762C;

void func_808002E0_chnests(Actor*);
s32 func_80800898_chnests(Actor*, s32, f32);
void func_80800B80_chnests(Actor*);
void func_80800BD8_chnests(Actor*, s32, f32, f32);

void func_80800000_chnests(Actor* arg0)
{
    s32 var_v1;
    s32 temp_v0;

    temp_v0 = 0xe;

    for (var_v1 = 0; var_v1 < temp_v0; var_v1++)
    {
        if (arg0->unk0->unk24_22 == D_80801118_chnests[var_v1].unk0)
        {
            break;
        }
    }

    if (var_v1 == 0xE)
    {
        func_800FFAB0(arg0);
        return;
    }
    arg0->actorData[1] = (u32)var_v1;
    arg0->actorData[3] = _subaddiesect_entrypoint_1(arg0);
    if (arg0->actorData[3] != -1U)
    {
        _subaddiesect_entrypoint_2(arg0, (s32)arg0->actorData[3], 0);
    }
}

void func_80800098_chnests(Actor* arg0)
{
    func_80800000_chnests(arg0);
    if ((func_800D3948() == 0) && (func_800F7150(func_800F54E4()) != 0))
    {
        func_808002E0_chnests(arg0);
    }
}

void func_808000E8_chnests(Actor* arg0)
{
    D_80801118_chnestsUnk* sp1C;
    sp1C = &D_80801118_chnests[arg0->actorData[1]];
    if (sp1C->firstTimeFlag != 0)
    {
        if (flag_getValue((enum flag_e)sp1C->firstTimeFlag) == 0)
        {
            _sudialog_entrypoint_0(sp1C->firstTimeFlag, 0);
        }
    }
}

void func_80800144_chnests(Actor* arg0, UnkArg2ChNest* arg1) // some struct that has a unk1A...
{
    D_80801118_chnestsUnk* var_v1;
    s32 temp;
    var_v1 = &D_80801118_chnests[arg0->actorData[1]];
    temp = var_v1->unk4;
    if (temp != 0)
    {
        _fxsparkle_entrypoint_1(arg0->position, var_v1->unk4);
    }
    if (var_v1->unk6 != 0)
    {
        func_800FC660(var_v1->unk6);
    }
    if (var_v1->unkA != 0)
    {
        if ((_gleeprom_entrypoint_0() >> 0x18) == 0x10)
        {
            func_800F7664((u32)arg1->unk1A_5, var_v1->unkA, var_v1->unkB);
        }
    }
}

void func_808001F0_chnests(Actor* arg0, UnkArg2ChNest* arg1)
{
    Unk80132ED0* sp24;
    s32 temp_v1;
    s16* temp_v0;

    sp24 = arg0->unk0;
    temp_v1 = (arg0->unk74_7) - 0x32;
    func_80800144_chnests(arg0,arg1);
    func_808000E8_chnests(arg0);
    switch (temp_v1)
    {
    case 1:
    case 2:
    case 3:
        temp_v0 = D_808011DC_chnests[temp_v1 - 1];
        arg0->unk58 = func_800DC178((f32)temp_v0[0], (f32)temp_v0[1]);
        arg0->unk64_16 = 0;
        func_8010A570(arg0);
        func_80103110(arg0, 1U);
        _subaddieDll_entrypoint_4(arg0, 1U);
        arg0->actorData[0] = arg0->unk70_10;
        func_80101FDC(arg0, 4U);
        func_80800B80_chnests(arg0);
        break;
    default:
        func_800FFA88(sp24);
        return;
    }

}

void func_808002E0_chnests(Actor* arg0)
{
    arg0->unk64_16 = 0;
    func_8010A570(arg0);
    arg0->actorData[0] = arg0->unk70_10;
    func_80101FDC(arg0, 4U);
}

void func_80800324_chnests(Actor* arg0, UnkArg2ChNest* arg1)
{
    func_80800144_chnests(arg0,arg1);
    func_808002E0_chnests(arg0);
}
void func_8080034C_chnests(Actor* arg0)
{
    _subaddiefade_entrypoint_2(arg0);
    func_80103110(arg0, 0U);
    _subaddieDll_entrypoint_4(arg0, 0U);
    func_8010A590(arg0);
    arg0->unk64_16 = 1;
    func_80101FDC(arg0, arg0->actorData[0]);
}

//Update for single type egg/feather nests
void func_808003AC_chnests(Actor* arg0)
{
    if (((arg0->unk70_10) == 4) && (func_800D9078(&arg0->unk58) != 0))
    {
        func_8080034C_chnests(arg0);
    }
}

//Event Handler
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/nests/func_808003F4_chnests.s")

void func_80800670_chnests(Actor* arg0, UnkArg2ChNest* arg1)
{
    func_80800144_chnests(arg0,arg1);
    func_808000E8_chnests(arg0);
    if ((_gleeprom_entrypoint_0() >> 0x18) == 0x10)
    {
        func_800D0BD4((s32)arg0->actorData[2], 6U);
    }
    func_800FFAB0(arg0);
}

void func_808006C4_chnests(Actor* arg0)
{
    f32 sp20;
    f32 var_f2;
    s32 temp_v0;
    u32 temp_a0;

    temp_v0 = (arg0->unk74_7) - 0x32;
    if ((temp_v0 <= 0) || (temp_v0 >= 0x12))
    {
        func_800FFAB0(arg0);
        return;
    }
    temp_a0 = (func_800D13E8(6, D_8012762C) + (arg0->unk74_7)) - 0x32;
    arg0->actorData[2] = temp_a0;
    if (func_800D0B68(temp_a0, 6U) != 0)
    {
        func_800FFAB0(arg0);
        return;
    }
    func_80800000_chnests(arg0);
    ((f32*)arg0->actorData)[4] = arg0->rotation[1];
    if (func_800DC298(0.5f) != 0)
    {
        var_f2 = -1.0f;
    }
    else
    {
        var_f2 = 1.0f;
    }
    sp20 = var_f2;
    ((f32*)arg0->actorData)[5] = (func_800DC178(540.0f, 630.0f) * var_f2);
    arg0->rotation[1] = func_800DC178(0.0f, 360.0f);
}

//Update Note Nests
void func_808007C8_chnests(Actor* arg0)
{
    if ((arg0->unk70_10 == 2) && (arg0->unk74_27))
    {
        arg0->rotation[1] += ((f32*)arg0->actorData)[5] * time_getDelta();
        func_80103110(arg0, 0U);
    }
}

void func_8080082C_chnests(Actor* arg0, s32 arg1)
{
    if (func_80800898_chnests(arg0, arg1, ((f32*)arg0->actorData)[4]) != 0)
    {
        func_80101870(arg0, arg1);
        if ((arg0->unk7C_12) && ((arg0->unk70_10) == 2))
        {
            func_80103110(arg0, 1U);
        }
    }
}

s32 func_80800898_chnests(Actor* arg0, s32 arg1, f32 arg2)
{
    f32 sp34[3];
    ImageStruct* sp30;

    sp30 = func_800D674C(0x85C);
    func_80101970(arg0);
    func_80106A98(arg0, sp30);
    func_800DF830(1);
    func_800DF410(_subaddiefade_entrypoint_0(arg0));
    func_800EFA4C(sp34, 0.0f, arg2, 0.0f);
    return func_800DE448(arg0->position, sp34, arg0->scale, func_801018D8(arg0), (s32)sp30);
}

void func_8080093C_chnests(Actor* arg0, s32 arg1)
{
    func_8010DD20(arg0, 0, arg1);
}

void func_80800960_chnests(s32 arg0) 
{
}

void func_80800968_chnests(Actor* arg0, s32 arg1)
{
    if (func_80800898_chnests(arg0, arg1, arg0->rotation[1]) != 0)
    {
        func_800DF3E0();
        func_800DF744(D_80801118_chnests[arg0->actorData[1]].unkC, 1);
        func_801018A4(arg0, arg1);
    }
}

void func_808009D4_chnests(s32 arg0,s32 arg1)
{
    func_8010DD20(arg0,0x1,arg1);
}

void func_808009F8_chnests(s32 arg0) 
{
}

void func_80800A00_chnests(Actor* arg0, s32 arg1)
{
    if (func_80800898_chnests(arg0, arg1, arg0->rotation[1]) != 0)
    {
        func_800DF3E0();
        func_800DF744(D_80801118_chnests[arg0->actorData[1]].unkC, 1);
        func_801018A4(arg0, arg1);
    }
}
void func_80800A6C_chnests(s32 arg0) 
{
}

s32 func_80800A74_chnests(s32 arg0)
{
    s16 associatedAbility;
    s32 temp_s3;

    temp_s3 = D_80801118_chnests[arg0++].unk0;
    while (temp_s3 != D_80801118_chnests[arg0].unk0)
    {
        if (D_80801118_chnests[arg0].unk0 == -1)
        {
            while (arg0 > 0 && D_80801118_chnests[arg0 - 1].unk0 != -1)
            {
                arg0--;
            }
        }
        associatedAbility = D_80801118_chnests[arg0].abilityId;
        if (associatedAbility == 0 || ability_getValue(associatedAbility) != 0)
        {
            break;
        }
        arg0++;
    }
    return arg0;
}

void func_80800B4C_chnests(Actor* arg0)
{
    arg0->unk58 = func_800DC178(((f32*)&arg0->actorData)[4], ((f32*)&arg0->actorData)[5]);
    arg0->actorData[6] = 0;
}

void func_80800B80_chnests(Actor* arg0)
{
    if (arg0->unk64_20)
    {
        arg0->actorData[6] = 2;
    }
}

void func_80800BA0_chnests(Actor* arg0, s32 arg1)
{
    arg0->actorData[1] = arg1;
    arg0->unk0->unk24_22 = (D_80801118_chnests[arg1].unk0);
}

void func_80800BD8_chnests(Actor* arg0, s32 arg1, f32 arg2, f32 arg3)
{
    Unk80132ED0* temp_v0;

    temp_v0 = arg0->unk0;
    temp_v0->unk24_22 = arg1;
    func_80800000_chnests(arg0);
    arg0->unk64_20 = 1;
    ((f32*)arg0->actorData)[4] = arg2;
    ((f32*)arg0->actorData)[5] = arg3;
    func_80800B4C_chnests(arg0);
}

//Update Cycling Egg/Feather Nests
void func_80800C3C_chnests(Actor* arg0)
{
    switch (arg0->actorData[6])
    {
    case 0:
        if (!(arg0->unk79_0) && (func_800D9078(&arg0->unk58) != 0))
        {
            arg0->unk6C_0 = (func_80800A74_chnests(arg0->actorData[1]));
            if ((arg0->unk6C_0) == arg0->actorData[1])
            {
                func_80800B4C_chnests(arg0);
                return;
            }
            arg0->unk58 = 0.25f;
            arg0->actorData[6] = 1;
            return;
        }
        return;
    case 1:
        if (func_800D9078(&arg0->unk58) != 0)
        {
            func_80800BA0_chnests(arg0, arg0->unk6C_0);
            func_80800B4C_chnests(arg0);
            func_8010A828(arg0, 1U);
            return;
        }
        break;
    case 2:
        if (func_800D9078(&arg0->unk58) != 0)
        {
            _subaddiefade_entrypoint_2(arg0);
            func_8010A590(arg0);
            _subaddieDll_entrypoint_4(arg0, 0U);
            arg0->unk64_16 = 1;
            func_80101FDC(arg0, arg0->actorData[0]);
            func_80800B4C_chnests(arg0);
        }
        break;
    }
}

void func_80800D8C_chnests(Actor* arg0, s32 arg1)
{
    s32 temp_f18;
    if (func_80800898_chnests(arg0, arg1, arg0->rotation[1]) != 0)
    {
        func_800DF3E0();
        func_800DF744(D_80801118_chnests[arg0->actorData[1]].unkC, 1);
        if (arg0->actorData[6] == 1)
        {
            temp_f18 = (s32)((arg0->unk58 / 0.25f) * 255.0f);
            arg0->unk7A_14 = 2;
            _subaddiefade_entrypoint_1(arg0, temp_f18);
            func_801018A4(arg0, arg1);
            func_800DF3E0();
            func_800DF744(D_80801118_chnests[arg0->unk6C_0].unkC, 1);
            arg0->unk7A_14 = 1;
            _subaddiefade_entrypoint_1(arg0, 0xFF - temp_f18);
            func_801018A4(arg0, arg1);
            arg0->unk7A_14 = 1;
            _subaddiefade_entrypoint_1(arg0, 0xFF);
            return;
        }
        func_801018A4(arg0, arg1);
    }
}

void func_80800ED8_chnests(Actor* arg0)
{
    func_80800BD8_chnests(arg0, 0x1CE, 1.0f, 1.0f);
}

void func_80800F08_chnests(Actor* arg0)
{
    func_80800BD8_chnests(arg0, 0x1D5, 1.0f, 1.0f);
}
//Blue Eggs
ActorData* chnests_entrypoint_0(void)
{
    return &D_808011E8_chnests;
}
//Fire Egg Nest
ActorData* chnests_entrypoint_1(void)
{
    return &D_80801230_chnests;
}
//Ice Eggs
ActorData* chnests_entrypoint_2(void)
{
    return &D_80801278_chnests;
}
//Grenade Eggs
ActorData* chnests_entrypoint_3(void)
{
    return &D_808012C0_chnests;
}
//Clockwork Eggs
ActorData* chnests_entrypoint_4(void)
{
    return &D_80801308_chnests;
}
//Gold Eggs
ActorData* chnests_entrypoint_5(void)
{
    return &D_80801350_chnests;
}
//Proximity Eggs
ActorData* chnests_entrypoint_6(void)
{
    return &D_80801398_chnests;
}
//Red Feathers
ActorData* chnests_entrypoint_7(void)
{
    return &D_808013E0_chnests;
}
//Gold Feathers
ActorData* chnests_entrypoint_8(void)
{
    return &D_80801428_chnests;
}
//Note Nest
ActorData* chnests_entrypoint_9(void)
{
    return &D_80801470_chnests;
}
//Treble Nest
ActorData* chnests_entrypoint_10(void)
{
    return &D_808014B8_chnests;
}
//Egg Nest
ActorData* chnests_entrypoint_11(void)
{
    return &D_80801500_chnests;
}
//Feather Nest
ActorData* chnests_entrypoint_12(void)
{
    return &D_80801548_chnests;
}

u8 chnests_entrypoint_13(s32 arg0)
{
    s32 index = 1;
    s32 size = 0xE;
    for (index = 0; index < size; index++)
    {
        if (arg0 == D_80801118_chnests[index].unk0)
        {
            return D_80801118_chnests[index].unkB;
        }
    }
    return 0U;
}

int func_80801014_chnests(Actor* arg0)
{
    return arg0->unk6C_9 == 0x1C8 || arg0->unk6C_9 == 0x1C9 || arg0->unk6C_9 == 0x1CA || arg0->unk6C_9 == 0x1CB || arg0->unk6C_9 == 0x1CC || arg0->unk6C_9 == 0x1CD || arg0->unk6C_9 == 0x2B8 || arg0->unk6C_9 == 0x1E9;
}

int func_808010A0_chnests(Actor* arg0)
{
    return (arg0->unk6C_9 == 0x1CE || arg0->unk6C_9 == 0x1CF || arg0->unk6C_9 == 0x4A6);
}