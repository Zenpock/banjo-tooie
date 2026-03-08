#include "ch/egg/ice.h"

typedef struct {
    s32 unk0[10];
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    s8 unk38;
    u8 unk39_7 : 1;
    u8 unk39_6 : 1;
    u8 unk39_5 : 1;
    u8 unk39_4 : 1;
    u8 unk39_3 : 1;
    u8 unk39_2 : 1;
    u8 unk39_1 : 1;
    u8 unk39_0 : 1;
} EggNormalData;

extern ActorData D_808003E0_cheggice;

void func_80800000_cheggice(Actor* arg0)
{
    f32 temp_f24;
    EggNormalData* temp_s3;
    f32 sp74[3];

    temp_s3 = (EggNormalData*)func_80100094(arg0, 0U);
    temp_s3->unk28 = (f32)(temp_s3->unk28 - func_800D8FF8());
    temp_f24 = func_800F10B4(temp_s3->unk30, 0, 2.0f, 0.0333f, 0.1f);
    while (temp_s3->unk28 <= 0.0f)
    {
        temp_s3->unk28 += temp_f24;
        func_800EE7F8(sp74, arg0->position);
        if (func_800DC0C0() < 0.5f)
        {
            _fxegg_entrypoint_2(sp74, arg0->scale);
        }
        else
        {
            _fxegg_entrypoint_1(sp74, arg0->scale);
        }
    }

}

void func_80800114_cheggice(Actor* arg0)
{
    EggNormalData* sp2C;

    sp2C = (EggNormalData*)func_80100094(arg0, 0U);
    switch (arg0->unk70_10)
    {
    case 1:
        if (_suegg_entrypoint_8(arg0) == 0)
        {
            if (func_800EEEA8(&arg0->actorData[4]) != 0)
            {
                sp2C->unk39_7 = 1;
            }
            else
            {
                func_80800000_cheggice(arg0);
                _suegg_entrypoint_16(arg0);
                if (_suegg_entrypoint_14(arg0) != 0)
                {
                    sp2C->unk39_7 = 1;
                }
            }
        }
        break;
    case 2:
        if (_suegg_entrypoint_8(arg0) == 0)
        {
            arg0->scale = func_800F10B4(sp2C->unk30, 0.0f, 0.134f, 0.1f, 0.25f);
            if (_sueggmove_entrypoint_3(arg0) != 0)
            {
                _suegg_entrypoint_23(arg0);
            }
            if (_suegg_entrypoint_13(arg0) != 0)
            {
                sp2C->unk39_7 = 1;
            }
            else if (_suegg_entrypoint_12(arg0) != 0)
            {
                _sueggmisc_entrypoint_1(arg0);
            }
            else
            {
                func_80800000_cheggice(arg0);
                _suegg_entrypoint_16(arg0);
            }
        }
        break;
    }
    if (sp2C->unk39_7)
    {
        _suegg_entrypoint_3(arg0);
    }
}

ActorData* cheggice_entrypoint_0(void)
{
    return &D_808003E0_cheggice;
}

Actor* cheggice_entrypoint_1(s32 arg0, s32 arg1, s32 arg2, s32 arg3) 
{
    Actor* temp_v0;

    _sueggmove_entrypoint_10(arg0);
    temp_v0 = _suegg_entrypoint_11(0x15C, arg1, arg3);
    temp_v0->scale = 0.134f;
    _suegg_entrypoint_1(temp_v0, 30.0f);
    _sueggmove_entrypoint_5(temp_v0, 1);
    _sueggmove_entrypoint_6(temp_v0, -2200.0f, -22000.0f);
    _sueggmove_entrypoint_7(temp_v0, arg2);
    temp_v0->unk70_10 = 2;
    return temp_v0;
}

Actor* cheggice_entrypoint_2(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    Actor* temp_v0;

    _sueggmove_entrypoint_10(arg0);
    temp_v0 = _suegg_entrypoint_11(0x15C, arg1, arg3);
    temp_v0->scale = 0.25f;
    _sueggmove_entrypoint_5(temp_v0, 0);
    _sueggmove_entrypoint_6(temp_v0, 0.0f, -100000.0f);
    _suegg_entrypoint_1(temp_v0, 30.0f);
    _sueggmove_entrypoint_7(temp_v0, arg2);
    temp_v0->unk70_10 = 1;
    return temp_v0;
}