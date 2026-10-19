#include "ch/temple/lobbydoor.h"

extern u16 D_808003EC_chtemplelobbydoor;
extern s16 D_808003EE_chtemplelobbydoor;
extern s32 D_808003E8_chtemplelobbydoor;

extern ActorData D_808003A0_chtemplelobbydoor;

void func_808000E4_chtemplelobbydoor(Actor*);

ActorData* chtemplelobbydoor_entrypoint_0()
{
    return &D_808003A0_chtemplelobbydoor;
}

void func_8080000C_chtemplelobbydoor(Actor* actor)
{
    s32 sp24;
    s32 temp_t8;

    if ((func_800EA090() == 1) && ((sp24 = func_800D035C(5) < 0x14, temp_t8 = character_getTransform(0) ^ 1, (sp24 != 0)) || (temp_t8 != 0)))
    {
        func_80101FDC(actor, 1U);
    }
    if (_chdoormake_entrypoint_3(actor, 0.0f, 90.0f, 180.0f, 8, -1) != 0)
    {
        _chdoormake_entrypoint_5(actor, 1.5f);
        _chdoormake_entrypoint_8(actor, 5U);
    }
}


void func_808000B4_chtemplelobbydoor(s32 arg0) 
{
}
void func_808000BC_chtemplelobbydoor(Actor* arg0)
{
    func_808000E4_chtemplelobbydoor(arg0);
    _chdoor_entrypoint_0(arg0);
}

void func_808000E4_chtemplelobbydoor(Actor* actor)
{
    //Randomizer Change
    if (ability_getValue(ABILITY_15_BREEGULL_BLASTER) || ability_getValue(ABILITY_1A_BEAK_BAYONET))
    {
        D_808003EC_chtemplelobbydoor = 0xF39;
        D_808003EE_chtemplelobbydoor = 0xF39;
    }
    _subaddiedialog_entrypoint_7(actor, actor->position, &D_808003E8_chtemplelobbydoor);
}

void func_80800134_chtemplelobbydoor(Actor* actor, s32 arg1)
{
    s8* temp_v0;

    temp_v0 = func_80100094(actor, 0U);
    *temp_v0 = 0;
    switch (func_800EA090())
    {
    case 1:
        //Randomizer Change Beak Bayonet works
        if ((ability_getValue(ABILITY_15_BREEGULL_BLASTER) || ability_getValue(ABILITY_1A_BEAK_BAYONET)) && (func_8009E958() == 1) && (func_800DA9E4(FLAG2_6B8_UNK, 1) == 0))
        {
            *temp_v0 = 1;
            _capod_entrypoint_13(actor->unk0, NULL, 3U, 0x2020U);
            func_800F49D4(character_getActiveIndex(), &_bsfirstp_entrypoint_18, 0);
            break;
        }
        break;
    case 2:
        if (flag_getValue(FLAG_36F_UNK) == 0)
        {
            func_800C9CD0(0.8f, actor->unk0, 0xF50, 2, 0, 0xB2);
            _capod_entrypoint_13(actor->unk0, NULL, 1U, 0x2020U);
        }
        break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/temple/lobbydoor/func_80800248_chtemplelobbydoor.s")
