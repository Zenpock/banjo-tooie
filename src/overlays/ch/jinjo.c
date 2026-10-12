#include "ch/jinjo.h"

void func_80800000_chjinjo(Actor*);
void func_80800120_chjinjo(Actor*);
void func_808002E0_chjinjo(Actor*);
s32 func_80800C10_chjinjo(Actor*, s32, s32);
void func_80800EE4_chjinjo(Actor*);
void func_80800F14_chjinjo(Actor*);
void func_80800F80_chjinjo(Actor*);
s32 func_8080102C_chjinjo(Actor*, u32);
u32 func_80801098_chjinjo(Actor*, s32);
s16 chjinjo_entrypoint_0(s32);
s16 chjinjo_entrypoint_2(MapId);

s32 D_808012B0_chjinjo[] = {0,0,0x3FC00000,0x2D0044,0x3FC00000,0x2D0042,0x3FC00000,0x2F0042,0x3F400000,0x310042,0x3FC00000,0x002D0044,0x3ECCCCCD,0x00310041,0x3FE00000,0x001F0042,0x4008887B,0x00240042,0x00000000,0x00000000 };
s16 D_80801300_chjinjo[] = {0x145,0x4,0x146,0x8,0x147,0x2,0x148,0x6,0x14A,0x3,0x14B,0x1,0x14C,0x7,0x14D,0x5,0x14E,0x0};
s32 D_80801324_chjinjo[3] = { 0x001303EE ,0x00166590,0 };
u32 D_80801330_chjinjo[] = {0x0013041A,0x001655F0,0x00000000};
s32 D_8080133C_chjinjo[] = {0x0013040F,0x001655F0,0x00000000 };
s32 D_80801348_chjinjo[] = {0x0013043A,0x000A0180,0x00167FFF,0x00000000};
u32 D_80801358_chjinjo[] = {0x00130404,0x000A01CC,0x00164650,0x00000000};
s16 D_80801368_chjinjo[] = {0x0072,0x0015,0x0011,0x0074,0x0012,0x0070,0x0013,0x0014,0x0073,0x0000};
u32 D_8080137C_chjinjo[] = {0x0306001B,0x00130410,0x000101F4,0x07D00016,0x27100000};
u16 D_80801390_chjinjo[] = {0x1525,0x1526,0x1527,0x1528,0x1529,0x152A,0x152B,0x152C,0x152D,0x0000};
ActorData D_808013A4_chjinjo =
{
    /*0x0*/ 0x005A,
    /*0x2*/ PROP_1F4_JINJO_REAL,
    /*0x4*/ 0x0643,
    /*0x6*/ 0x0002,
    /*0x8*/ D_808012B0_chjinjo,
    /*0xC*/ func_808002E0_chjinjo,
    /*0x10*/ func_80105834,
    /*0x14*/ func_80101870,
    /*0x18*/ 0x09C4,
    /*0x1A*/ 0x0000,
    /*0x1C*/ 0.8f,
    /*0x20*/ 0x0000,
    /*0x22*/ 0x0000,
    /*0x24*/ 0x0080,
    /*0x26*/ 0x0124,
    /*0x28*/ func_80800120_chjinjo,
    /*0x2C*/ func_80108ED0,
    /*0x30*/ 0x0000,
    /*0x32*/ 0x0000,
    /*0x34*/ func_80800000_chjinjo,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8800, //Randomizer Change so we can touch it during cutscene
    /*0x3E*/ 0x3000,
    /*0x40*/ func_80800C10_chjinjo,
    /*0x44*/ 0x0000,
    /*0x46*/ 0x0000,
};
ActorData D_808013EC_chjinjo =
{
    /*0x0*/ 0x0374,
    /*0x2*/ PROP_48F_JINJO_IN_HOME,
    /*0x4*/ 0x0643,
    /*0x6*/ 0x0002,
    /*0x8*/ D_808012B0_chjinjo,
    /*0xC*/ func_808002E0_chjinjo,
    /*0x10*/ func_80105834,
    /*0x14*/ func_80101870,
    /*0x18*/ 0x09C4,
    /*0x1A*/ 0x0000,
    /*0x1C*/ 0.8f,
    /*0x20*/ 0x0000,
    /*0x22*/ 0x0000,
    /*0x24*/ 0x0080,
    /*0x26*/ 0x0120,
    /*0x28*/ 0x00000000,
    /*0x2C*/ 0x00000000,
    /*0x30*/ 0x0000,
    /*0x32*/ 0x0000,
    /*0x34*/ func_80800000_chjinjo,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8410,
    /*0x3E*/ 0x6402,
    /*0x40*/ func_80800C10_chjinjo,
    /*0x44*/ 0x0000,
    /*0x46*/ 0x0000,
};

void func_80800000_chjinjo(Actor* arg0)
{
    u32 var_v0;

    arg0->unk79_4 = 1;
    if (flag_getValue(FLAG2_653_UNK) != 0)
    {
        actor_mark_delete(arg0);
    }
    if (arg0->unk6C_9 == PROP_48F_JINJO_IN_HOME)
    {
        var_v0 = chjinjo_entrypoint_2(-1);
    }
    else
    {
        var_v0 = func_800D0CC8(arg0->unk6C_0);
    }
    if (arg0->unk6C_9 == PROP_48F_JINJO_IN_HOME && (func_800D1338(var_v0) <= arg0->rotation[1]))
    {
        actor_mark_delete(arg0);
    }
    if (arg0->unk64_20)
    {
        func_800FC660(0x10);
    }
}

s32 func_808000DC_chjinjo(Actor* arg0)
{
    return chjinjo_entrypoint_0(func_800D0CC8(arg0->unk6C_0));
}

s16 chjinjo_entrypoint_0(s32 arg0)
{
    return D_80801368_chjinjo[arg0];
}

void func_80800120_chjinjo(Actor* arg0)
{
    if (arg0->actorData[5] != 0U)
    {
        func_800FC74C(0x1CU);
        arg0->actorData[5] = 0;
    }
    func_8080102C_chjinjo(arg0, 1U);
    _suexpression_entrypoint_8(arg0, 1U);
}

void chjinjo_entrypoint_1(s32 arg0, u32 arg1)
{
    func_800D0C78(arg0 + 0x51, 1U, arg1);
}

s16 chjinjo_entrypoint_2(MapId arg0)
{
    s32 index;
    if (arg0 == -1)
    {
        arg0 = func_800EA05C();
    }
    for (index = 0; index < 18; index += 2)
    {
        if (arg0 == D_80801300_chjinjo[index])
        {
            return D_80801300_chjinjo[index + 1];
        }
    }
    return -1;
}

s16 chjinjo_entrypoint_3(s32 arg0)
{
    s32 index;
    for (index = 0; index < 18; index += 2)
    {
        if (arg0 == D_80801300_chjinjo[index + 1])
        {
            return D_80801300_chjinjo[index];
        }
    }
    return -1;
}

void func_808002E0_chjinjo(Actor* arg0)
{
    f32 sp74[3];
    f32 sp68[3];
    f32 sp64;
    s32 sp60;
    f32 sp5C;
    s32 sp58;
    f32 sp54;
    f32 sp48[3];
    s32 var_a1;
    s32 temp_v0_4;

    sp64 = time_getDelta();
    if (arg0->unk70_3 == 0)
    {
        return;
    }

    _suexpression_entrypoint_10(func_80100094(arg0, 1U), arg0->unk0, 0U);
    if (arg0->unk74_29)
    {
        func_800E3980(sp74);
    }
    else
    {
        func_8010D254(sp74);
    }
    if (arg0->unk6C_9 == PROP_48F_JINJO_IN_HOME)
    {
        func_8010C908(arg0, arg0->position);
    }
    func_800F1E6C(arg0->position, sp74, &sp5C);
    sp54 = func_800F1DCC(arg0->rotation[1], sp5C);
    switch (arg0->unk70_10)
    {
    case 1:
        if (rand_f() < 0.015f)
        {
            if (func_800901CC(arg0->position, 55.0f) != 0)
            {
                func_80102424(arg0, 3);
            }
            else
            {
                func_80102424(arg0, 2);
            }
        }
        break;
    case 2:
        func_80800F14_chjinjo(arg0);
        if (func_80101E14(arg0, 0.999f) != 0)
        {
            func_80102424(arg0, 1);
        }
        break;
    case 3:
        func_80800F80_chjinjo(arg0);
        if (func_80101E14(arg0, 0.999f) != 0)
        {
            func_80102424(arg0, 1);
        }
        break;
    case 4:
        func_80800EE4_chjinjo(arg0);
        if (func_80101E14(arg0, 0.999f) != 0)
        {
            func_80102424(arg0, 1);
        }
        else if (sp54 >= 0.0f)
        {
            arg0->rotation[1] -= 80.0f * sp64;
        }
        else
        {
            arg0->rotation[1] += 80.0f * sp64;
        }
        break;
    case 6:
        func_80800EE4_chjinjo(arg0);
        if (sp54 >= 0.0f)
        {
            arg0->rotation[1] -= 120.0f * sp64;
        }
        else
        {
            arg0->rotation[1] += 120.0f * sp64;
        }
        if (func_80101E14(arg0, 0.0f) != 0)
        {
            arg0->unk79_4--;
            if (arg0->unk79_4 == 0)
            {
                func_80102424(arg0, 7);
                func_80102FE8(arg0, 0);
                func_800FC63C(2U, 0x6D60U);
            }
        }
        break;
    case 7:
    case 8:
        _suexpression_entrypoint_12(func_80100094(arg0, 1U), 0.0f, 0.0f);
        sp58 = arg0->unk70_10 == 7;
        if (((sp58 == 0) || (func_80101F24(arg0) > 0.1f)) && ((func_8008FFBC(sp68), ml_vec3f_apply_scale(sp68, sp64 * 6.0f), ml_vec3f_add(sp68, sp74), ml_vec3f_subtract(sp68, arg0->position), ml_vec3f_apply_scale(sp68, sp64 * 3.0f), ml_vec3f_add(arg0->position, sp68), (sp58 != 0)) || (func_80101F24(arg0) < 0.8f))) 
        {
            for (sp60 = 0; sp60 < 4; sp60++) 
            {
                if (rand_f() < 0.3f) 
                {
                    _subaddieskeleton_entrypoint_0(arg0, 3, &sp48);
                    func_800EF214(&sp48, rand_fBounded(0.0f, 360.0f), rand_fBounded(0.0f, 360.0f), 15.0f);
                    _fxtwinkle_entrypoint_0(&sp48);
                }
            }
        }
        if (sp58 != 0)
        {
            if (func_80101F24(arg0) < 0.2f)
            {
                if (sp54 >= 0.0f)
                {
                    arg0->rotation[1] -= 120.0f * sp64;
                }
                else
                {
                    arg0->rotation[1] += 120.0f * sp64;
                }
            }
            if (func_80101E14(arg0, 0.1f) != 0)
            {
                _subaddieaudioloop_entrypoint_4(arg0, arg0->position, 1U, &D_8080137C_chjinjo);
                arg0->actorData[5] = 1;
                func_800FC63C(0x1CU, 0x7FFFU);
                func_800FCA90(0x1CU);
                func_800C4244((Unk80132ED0*)0x4A2, 0.8f, 0x7FFFU, arg0->position, 300.0f, 2000.0f);
            }
            else if ((func_80101E14(arg0, 0.434f) != 0) || (func_80101E14(arg0, 0.811f) != 0))
            {
                func_800C4244((Unk80132ED0*)0x4A2, 0.9f, 0x7FFFU, arg0->position, 300.0f, 2000.0f);
            }
        }
        else
        {
            if (func_80101E14(arg0, 0.214f) != 0)
            {
                func_800C4244((Unk80132ED0*)0x4A2, 1.1f, 0x7FFFU, arg0->position, 300.0f, 2000.0f);
            }
            else if (func_80101E14(arg0, 0.55f) != 0)
            {
                func_800C4244((Unk80132ED0*)0x43A, 1.5f, 0x7FFFU, arg0->position, 300.0f, 2000.0f);
            }
            else if (func_80101E14(arg0, 0.75f) != 0)
            {
                if (func_800FCCD4(2) != 0)
                {
                    func_800FCAE0(2U, 0U, 0xFA0U);
                    func_800FCA90(2U);
                }
            }
            else if (func_80101E14(arg0, 0.85f) != 0)
            {
                _subaddieaudioloop_entrypoint_2(arg0);
                func_800C3EB8(0x411);
                func_800FC74C(0x1CU);
                arg0->actorData[5] = 0;
            }
            if (func_80101F24(arg0) > 0.75f)
            {
                var_a1 = _subaddiefade_entrypoint_0(arg0);
                if (var_a1 >= 7)
                {
                    var_a1 -= 7;
                }
                if (func_80101F24(arg0) > 0.9f)
                {
                    if (var_a1 >= 0x15)
                    {
                        var_a1 -= 0x15;
                    }
                    else
                    {
                        var_a1 = 0;
                    }
                }
                _subaddiefade_entrypoint_1(arg0, var_a1);
            }
            if (func_80101E14(arg0, 0.999f) != 0)
            {
                func_80102424(arg0, 9);
                arg0->unk74_20 = 0;
                arg0->unk64_16 = arg0->unk74_20;
            }
        }
        if ((sp58 != 0) && ((func_80101E14(arg0, 0.96f) != 0) || (func_80101E14(arg0, 0.999f) != 0)))
        {
            func_80102424(arg0, 8);
        }
        break;
    case 9:
        if (arg0->unk74_30)
        {
            temp_v0_4 = func_800D0CC8(arg0->unk6C_0);
            if (arg0->unk64_19)
            {
                func_800F82D4(arg0->actorData[4], 0);
                flag_setMultipleValue(FLAG2_6D0_UNK, temp_v0_4, 4);
                _glcutDll_entrypoint_6(0x142U, 0x84U);
            }
            else
            {
                func_8080102C_chjinjo(arg0, 0U);
            }
            arg0->unk74_30 = 0;
            arg0->unk64_19 = 0;
        }
        actor_mark_delete(arg0);
    }
    if (((s32)arg0->unk70_10 < 4) && ((sp54 > 45.0f) || (sp54 < -45.0f)))
    {
        func_80102424(arg0, 4);
    }
}

void chjinjo_entrypoint_4(s32 arg0, s32 arg1, s32 arg2)
{
    _glcutDll_entrypoint_6(0x142U, 0x84U);
}

s32 func_80800C10_chjinjo(Actor* arg0, s32 eventId, s32 arg2)
{
    unkCUnk0* pad;
    s32 sp40;
    s32 var_v0;

    // FAKE
    if (&arg2) {}

    if (eventId >= 0x7F)
    {
        if (eventId != 0x95)
        {
            return 0;
        }
        goto dummy;
    }
    if (eventId >= 0x3F)
    {
        if (eventId != 0x7E)
        {
            return 0;
        }
        goto dummy2;
    }
    switch (eventId)
    {
    case 0x29:
        _suexpression_entrypoint_7(arg0, 1U, func_808000DC_chjinjo(arg0));
        _suexpression_entrypoint_12(_suexpression_entrypoint_20(arg0), 65.0f, 30.0f);
        return 1;
    case 0x2A:
        _suexpression_entrypoint_8(arg0, 1U);
        break;
    case EVENT_3E_ACTOR_TOUCHED:
        pad = arg2;
        if ((s32)arg0->unk70_10 < 5)
        {
            if (func_8010A6B0(arg0, (u32)pad->unk1A >> 5))
            {
                sp40 = func_800D0CC8(arg0->unk6C_0);
                _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_80801324_chjinjo);
                func_80102424(arg0, 6);
                _subaddieDll_entrypoint_4(arg0, 1U);
                func_8010A570(arg0);
                //Randomizer Change Removed the FTT check
                func_800D0BD4(arg0->unk6C_0, 0U);
                func_800D24E8(sp40 + 0xE1, func_800D1338(sp40), func_800D129C(sp40));
                func_80801098_chjinjo(arg0, (u32)pad->unk1A >> 5);
            }
        }
        break;
    case 0x13:
        arg0->unk6C_0 = arg2;
        if ((arg0->unk6C_0) == 0x1E)
        {
            arg0->unk74_29 = 1;
        }
        break;
    dummy2:
        if (arg0->rotation[1] == 0.0f)
        {
            func_80108A30(0x4D6, arg0->position, 0, 0x32);
        }
        break;
    case 0x14:
        arg0->unk64_20 = 1;
        break;
    dummy:
        if (arg0->unk6C_9 == PROP_48F_JINJO_IN_HOME)
        {
            var_v0 = chjinjo_entrypoint_2(-1);
        }
        else
        {
            var_v0 = func_800D0CC8(arg0->unk6C_0);
        }
        func_80103140(arg0, 0x643U, var_v0 + 0xC31);
        break;
    default:
        return 0;
    }
    return 1;
}

void func_80800EE4_chjinjo(Actor* arg0)
{
    _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_80801358_chjinjo, 0.6f);
}

void func_80800F14_chjinjo(Actor* arg0)
{
    if (func_80101E14(arg0, 0.2f) != 0)
    {
        if (arg0->unk6C_9 == PROP_48F_JINJO_IN_HOME)
        {
            _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_80801348_chjinjo);
            return;
        }
        _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_8080133C_chjinjo);
    }
}

void func_80800F80_chjinjo(Actor* arg0)
{
    if (arg0->unk6C_9 != PROP_48F_JINJO_IN_HOME)
    {
        _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_80801330_chjinjo, 0.2f);
    }
}

void func_80800FC4_chjinjo(Actor* arg0)
{
    s32 sp2C;

    sp2C = func_800D0CC8(arg0->unk6C_0);
    func_800C05B8(D_80801390_chjinjo[sp2C], 0x44, NULL, NULL, 0, 0, func_808000DC_chjinjo(arg0));
}

s32 func_8080102C_chjinjo(Actor* arg0, u32 arg1)
{
    if (arg0->unk74_30)
    {
        chjinjo_entrypoint_1(func_800D0CC8(arg0->unk6C_0), arg1);
        arg0->unk74_30 = 0;
        return 1;
    }
    return 0;
}

u32 func_80801098_chjinjo(Actor* arg0, s32 arg1)
{
    s32 sp2C;
    s32 pad;
    s32 temp_v0;

    temp_v0 = func_800D0CC8(arg0->unk6C_0);
    arg0->unk64_19 = 0;
    arg0->unk74_30 = 0;
    arg0->actorData[4] = arg1;
    sp2C = func_800D1338(temp_v0) == func_800D129C(temp_v0);
    if (sp2C != 0)
    {
        arg0->unk74_30 = 1;
        //Randomizer Change Removed the FTT check for completing a family
        func_80800FC4_chjinjo(arg0);
    }
    return arg0->unk74_30;
}


ActorData* chjinjo_entrypoint_5()
{
    return &D_808013A4_chjinjo;
}
ActorData* chjinjo_entrypoint_6()
{
    return &D_808013EC_chjinjo;
}
