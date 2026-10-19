#include "ch/mole_training.h"

void func_80800270_chmole_training(Actor*);
void func_808003D4_chmole_training(Actor*);
void func_80800A48_chmole_training(Actor*);
void func_80800BA8_chmole_training(Actor*);
void func_80800C28_chmole_training(Actor*);
void func_80800C3C_chmole_training(Actor*);
extern s16 D_80800E32_chmole_training[][4];
extern s8 D_80800E34_chmole_training[][8];
extern s16 D_80800F08_chmole_training[];
extern s16 D_80800F10_chmole_training[];
extern s16 D_80800F18_chmole_training[];
extern s16 D_80800F20_chmole_training[];
extern s16 D_80800F24_chmole_training[];
extern s16 D_80800F28_chmole_training[];
extern s16 D_80800F2C_chmole_training[];
extern u32 _chmole_training_entrypoint_0;

void func_80800000_chmole_training(Actor* arg0)
{
    if (func_80100094(arg0, 0U) != NULL)
    {
        _gcnewoption_entrypoint_6((OptionState*)arg0, 0U);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/mole/_training/func_80800034_chmole_training.s")

void func_80800088_chmole_training(Actor* arg0)
{
    s8 temp_a0;

    if (arg0->unk3C != NULL)
    {
        switch (arg0->unk70_10)
        {
        case 1:
            func_80800270_chmole_training(arg0);
            return;
        case 2:
            func_808003D4_chmole_training(arg0);
            return;
        case 3:
            arg0->unk70_10 = 4;
            return;
        case 4:
            func_80800A48_chmole_training(arg0);
            return;
        case 5:
            _gcnewoption_entrypoint_0(func_80100094(arg0, 0U));
            return;
        case 7:
            _gcnewoption_entrypoint_6((OptionState*)arg0, 0U);
            //Randomizer Change Remove Ability Check
            func_80101FDC(arg0, 0xAU);
            return;
        case 6:
            _gcnewoption_entrypoint_6((OptionState*)arg0, 0U);
            func_80101FDC(arg0, 0xBU);
            return;
        case 10:
            if (_sumole_entrypoint_17(arg0, D_80800E32_chmole_training[(s32)arg0->unk54][0], -1, 0) != 0)
            {
                _sumole_entrypoint_19(arg0, 0);
                func_80101FDC(arg0, 0xCU);
                return;
            }
            break;
        case 9:
            func_80800BA8_chmole_training(arg0);
            return;
        case 11:
            func_80800C28_chmole_training(arg0);
            return;
        case 12:
            func_80800C3C_chmole_training(arg0);
            return;
        case 13:
            _sumole_entrypoint_19(arg0, 0);
            arg0->unk70_10 = 0xC;
            break;
        }
    }
}

void func_80800270_chmole_training(Actor* arg0)
{
    switch ((u32)arg0->unk54)
    {
    case 6:
        if (flag_getValue(FLAG_053_UNK) == 0)
        {
            if (_sumole_entrypoint_6(arg0, -1, 350.0f) != 0)
            {
                func_80101FDC(arg0, 2U);
                return;
            }
        }
        else
        {
            if ((func_8008FD70() & 0x701) && (_sumole_entrypoint_1(arg0, -1, 0, 0) != 0))
            {
                func_80101FDC(arg0, 2U);
                return;
            }
    default:
        return;
        }
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
        if ((func_8008FD70() & 0x701) && (_sumole_entrypoint_1(arg0, -1, 0, 0) != 0))
        {
            func_80101FDC(arg0, 2U);
        }
        break;
    }
}

void func_808003D4_chmole_training(Actor* arg0)
{
    switch ((s32)arg0->unk54)
    {
    case 6:
        if (flag_getValue(FLAG_053_UNK) == 0)
        {
            flag_setValue(FLAG_053_UNK, 1);
            return;
        }
    default:
        return;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
        _sumole_entrypoint_19(arg0, 3);
        arg0->unk70_10 = 3;
        break;
    }
}

void func_808004D0_chmole_training(Actor* arg0, OptionState* arg1)
{
    u32 temp_t7;

    switch ((s32)arg0->unk54)
    {
    case 1:
        _gcnewoption_entrypoint_12(arg1, 0U, 0xA);
        _gcnewoption_entrypoint_12(arg1, 1U, 0x15);
        _gcnewoption_entrypoint_12(arg1, 2U, 0x16);
        return;
    case 2:
        _gcnewoption_entrypoint_12(arg1, 0U, 0xB);
        _gcnewoption_entrypoint_12(arg1, 1U, 0xC);
        _gcnewoption_entrypoint_12(arg1, 2U, 0x1A);
        return;
    case 4:
        _gcnewoption_entrypoint_12(arg1, 0U, 0x17);
        _gcnewoption_entrypoint_12(arg1, 1U, 0x18);
        _gcnewoption_entrypoint_12(arg1, 2U, 0x19);
        return;
    case 0:
        _gcnewoption_entrypoint_12(arg1, 0U, 0x14);
        _gcnewoption_entrypoint_12(arg1, 1U, 0xD);
        return;
    case 3:
        _gcnewoption_entrypoint_12(arg1, 0U, 0xE);
        _gcnewoption_entrypoint_12(arg1, 1U, 0xF);
        return;
    case 7:
        _gcnewoption_entrypoint_12(arg1, 0U, 0x10);
        _gcnewoption_entrypoint_12(arg1, 1U, 0x11);
        return;
    case 5:
        _gcnewoption_entrypoint_12(arg1, 0U, 0x12);
        _gcnewoption_entrypoint_12(arg1, 1U, 0x13);
    default:
        return;
    }
}

void chmole_training_entrypoint_0(Unk80132ED0* arg0, OptionState* arg1, s32 arg2, s32 arg3)
{
    Actor* temp_v0;

    temp_v0 = func_80106790(arg0);
    switch (arg3)
    {
    case 3:
        switch ((s32)temp_v0->unk54)
        {
        case 1:
            temp_v0->unk54 = D_80800F08_chmole_training[arg2];
            break;
        case 2:
            temp_v0->unk54 = D_80800F10_chmole_training[arg2];
            break;
        case 4:
            temp_v0->unk54 = D_80800F18_chmole_training[arg2];
            break;
        case 0:
            temp_v0->unk54 = D_80800F20_chmole_training[arg2];
            break;
        case 3:
            temp_v0->unk54 = D_80800F24_chmole_training[arg2];
            break;
        case 7:
            temp_v0->unk54 = D_80800F28_chmole_training[arg2];
            break;
        case 5:
            temp_v0->unk54 = D_80800F2C_chmole_training[arg2];
            break;
        }
        func_80101FDC(temp_v0, 7U);
        break;
    case 0:
        func_808004D0_chmole_training(temp_v0, arg1);
        break;
    case 2:
        func_80101FDC(temp_v0, 6U);
        break;
    }
}

void func_808008E4_chmole_training(Actor* arg0, OptionState* arg1, s32 arg2)
{
    s32 var_v0;
    s32 i;

    if (flag_getValue(FLAG_578_PROGRESS_BOTTLES_ENERGY_RESTORED) != 0)
    {
        var_v0 = 0xF;
    }
    else
    {
        var_v0 = 0x9E;
    }
    _gcnewoption_entrypoint_32(arg1, var_v0);
    for (i = 0; i < arg2; i++)
    {
        if (i & 1)
        {
            var_v0 = 0xD;
        }
        else
        {
            var_v0 = 0xC;
        }
        _gcnewoption_entrypoint_31(arg1, i, var_v0);
    }
}

void func_80800988_chmole_training(Actor* arg0, u32 arg1, u32 arg2)
{
    OptionState* temp_v0;

    _gcnewoption_entrypoint_4(arg0, 0U, &_chmole_training_entrypoint_0, 0U, 0x184A);
    temp_v0 = func_80100094(arg0, 0U);
    _gcnewoption_entrypoint_8(temp_v0, arg1);
    _gcnewoption_entrypoint_9(temp_v0, arg2);
    _gcnewoption_entrypoint_10(temp_v0, 0U);
    func_808008E4_chmole_training(arg0, temp_v0, (s32)arg2);
    _gcnewoption_entrypoint_14(temp_v0, 0U, 1U, 3U, 4.0f);
    _gcnewoption_entrypoint_11(temp_v0);
    func_80101FDC(arg0, 5U);
}

void func_80800A48_chmole_training(Actor* arg0)
{
    switch ((s32)arg0->unk54)
    {
    case 1:
        func_80800988_chmole_training(arg0, 3, 3U);
        return;
    case 2:
        func_80800988_chmole_training(arg0, 3, 3U);
        return;
    case 4:
        func_80800988_chmole_training(arg0, 3, 3U);
        return;
    case 0:
        func_80800988_chmole_training(arg0, 2, 2U);
        return;
    case 3:
        func_80800988_chmole_training(arg0, 2, 2U);
        return;
    case 7:
        func_80800988_chmole_training(arg0, 2, 2U);
        return;
    case 5:
        func_80800988_chmole_training(arg0, 2, 2U);
        return;
    case 6:
        func_80101FDC(arg0, 4U);
        return;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        func_80101FDC(arg0, 4U);
    default:
        return;
    }
}

void func_80800BA8_chmole_training(Actor* arg0)
{
    switch ((s32)arg0->unk54)
    {
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        arg0->unk54 = (s32)arg0->rotation[1];
        arg0->unk70_10 = 4;
        return;
    default:
        arg0->unk70_10 = 11;
        return;
    }
}

void func_80800C28_chmole_training(Actor* arg0)
{
    arg0->unk70_10 = 13;
}

void func_80800C3C_chmole_training(Actor* arg0) {
    arg0->unk54 = (s32)arg0->rotation[1];
    arg0->unk70_10 = 1;
}

void func_80800C70_chmole_training(Actor* arg0) {
    arg0->unk54 = (s32)arg0->rotation[1];
    _sumole_entrypoint_0(arg0, 1U);
}

extern ActorData D_80800F30_chmole_training;
ActorData* chmole_training_entrypoint_1()
{
    return &D_80800F30_chmole_training;
}
