#include "ch/gold/statue.h"

extern s32 D_80800890_chgoldstatue;
extern s32 D_808008A0_chgoldstatue;
extern s32 D_808008B8_chgoldstatue;
extern f32 D_80800940_chgoldstatue;
extern f32 D_80800954_chgoldstatue;
extern u32 D_80800968_chgoldstatue;
extern s32 D_8080097C_chgoldstatue;

extern f32 D_80800910_chgoldstatue[3];
extern f32 D_8080091C_chgoldstatue[3];
extern f32 D_80800928_chgoldstatue[3];
extern f32 D_80800934_chgoldstatue[3];

void func_80800000_chgoldstatue(Actor* arg0)
{
    void* sp1C;

    _sumumbofx_entrypoint_0(arg0, 1, 0x2D, _chmumbopad_entrypoint_0(2));
    sp1C = actor_getAdditionalMem(arg0, 1U);
    _sumumbofx_entrypoint_2(sp1C);
    _sumumbofx_entrypoint_24(sp1C, 0.65f);
    if (flag_getValue(FLAG_57C_MAGIC_SUMMON_GOLDEN_GOLIATH) == 0) {
        _sumumbofx_entrypoint_15(sp1C, 3.0f);
        return;
    }
    _sumumbofx_entrypoint_15(sp1C, 0.25f);
}

void func_80800094_chgoldstatue(Actor* arg0)
{
    _sumumbofx_entrypoint_1(arg0,1);
}

void func_808000B4_chgoldstatue(Actor* arg0, GraphicsBuffers* arg1)
{
    void* sp1C;
    s32 sp18;

    sp1C = actor_getAdditionalMem(arg0, 1U);
    func_80101870(arg0, arg1);
    if (sp1C != NULL)
    {
        sp18 = _sumumbofx_entrypoint_10(sp1C);
        _sumumbofx_entrypoint_8(sp1C, arg1);
        func_800DF5D8(0xFFU, (s32)(((f32)sp18 * 0.5f) + 128.0f), 0xFFU, 0xFF);
    }
}

void func_80800150_chgoldstatue(Actor* arg0, s32 arg1)
{

    func_80102424(arg0, arg1);
    switch (arg0->unk70_10)
    {
    case 2:
        _subaddieDll_entrypoint_4(arg0, 1U);
        func_801032B0(arg0, 0x673, (s32)arg0->unk0->unk16);
        if (flag_getValue(FLAG_57C_MAGIC_SUMMON_GOLDEN_GOLIATH) == 0)
        {
            _capod_entrypoint_13(arg0->unk0, NULL, 2U, 0x20U);
        }
        else
        {
            _capod_entrypoint_13(arg0->unk0, NULL, 8U, 0x20U);
        }
        event_sendToActorsOfType(0x2B0, 0xBB, 2);
        func_80800000_chgoldstatue(arg0);
        func_80090734(2, arg0->position);
        return;
    case 3:
        flag_setValue(FLAG_57C_MAGIC_SUMMON_GOLDEN_GOLIATH, 1);
        return;
    case 5:
        _capod_entrypoint_14();
        func_80800094_chgoldstatue(arg0);
        func_800F7D38(character_getActiveIndex(), 0x3F, arg0->position, arg0->rotation[1]);
        flag_setValueFalse(FLAG3_9DE_UNK);
        func_8010381C(arg0);
        arg0->unk64_16 = 0;
        return;
    case 6:
        if (arg0->unk64_16)
        {
            func_8010381C(arg0);
            arg0->unk64_16 = 0;
            return;
        }
    default:
        return;
    case 7:
        func_801032B0(arg0, 0x673, (s32)arg0->unk0->unk16);
        break;
    }
}

void func_808002C8_chgoldstatue(Actor* arg0)
{
    _subaddieDll_entrypoint_1(arg0);
    if (func_8010D278() == 0xE)
    {
        func_80800150_chgoldstatue(arg0, 6);
        return;
    }
    flag_setValueFalse(FLAG3_9DE_UNK);
    if (_glcutDll_entrypoint_20() != 0)
    {
        func_80800150_chgoldstatue(arg0, 7);
    }
}

void func_8080032C_chgoldstatue(Actor* arg0)
{
    f32 sp64[3] = D_80800910_chgoldstatue;
    f32 sp58[3];
    f32 sp4C[3] = D_8080091C_chgoldstatue;
    f32 sp40[3] = D_80800928_chgoldstatue;
    f32 sp34[3] = D_80800934_chgoldstatue;
    void* temp_s0;

    temp_s0 = actor_getAdditionalMem(arg0, 1U);
    if ((arg0->unk7C_12) && (_subaddieskeleton_entrypoint_2(arg0->unk0, 2, sp58), _sumumbofx_entrypoint_7(temp_s0, 175.0f, 0, 0x14, sp40, sp58, sp64), _sumumbofx_entrypoint_6(temp_s0, 150.0f, 150.0f, 0x15, 0x23, sp34, sp58, sp64), _sumumbofx_entrypoint_6(temp_s0, 150.0f, 100.0f, 0x24, 0x2D, sp4C, sp58, sp64), _sumumbofx_entrypoint_14(temp_s0), ((arg0->unk70_10) == 2)) && (_sumumbofx_entrypoint_21(temp_s0) == 0.0f) && (_sumumbofx_entrypoint_5(temp_s0, 0x40000000) != 0))
    {
        _sumumbofx_entrypoint_17(temp_s0, 1.0f);
        if (flag_getValue(FLAG_57C_MAGIC_SUMMON_GOLDEN_GOLIATH) == 0)
        {
            func_80800150_chgoldstatue(arg0, 3);
            return;
        }
        func_80800150_chgoldstatue(arg0, 4);
    }
}

//Update
void func_80800528_chgoldstatue(Actor* arg0)
{
    s32 sp34;
    void* sp30;

    sp34 = 0;
    if (!(arg0->unk64_17))
    {
        sp30 = actor_getAdditionalMem(arg0, 1U);
        switch (arg0->unk70_10)
        {
        case 1:
            _sudeflect_entrypoint_1(arg0->position, 240.0f, 0.0f, 100.0f, 0xE);
            if (flag_getValue(FLAG3_9DE_UNK) != 0)
            {
                func_80800150_chgoldstatue(arg0, 2);
            }
            break;
        case 2:
            func_8080032C_chgoldstatue(arg0);
            break;
        case 3:
            if (func_80101E14(arg0, 0.35f) != 0)
            {
                _chglowbo_entrypoint_6();
            }
            if (func_80101F24(arg0) < 0.38f)
            {
                sp34 = 1;
            }
            if (func_80101E14(arg0, 0.38f) != 0)
            {
                _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_80800890_chgoldstatue);
            }
            else if (func_80101E4C(arg0, &D_80800940_chgoldstatue) != 0)
            {
                _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_808008A0_chgoldstatue);
            }
            else if (func_80101E4C(arg0, &D_80800954_chgoldstatue) != 0)
            {
                _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_808008B8_chgoldstatue);
            }
            if (func_80101E14(arg0, 0.39f) != 0)
            {
                flag_setValueTrue(FLAG3_9DF_UNK);
                _sumumbofx_entrypoint_16(sp30, 3.0f);
            }
            func_8080032C_chgoldstatue(arg0);
            if (func_80101DDC(arg0) != 0)
            {
                func_80800150_chgoldstatue(arg0, 5);
            }
            break;
        case 4:
            func_8080032C_chgoldstatue(arg0);
            if (func_80101F24(arg0) < 0.38f)
            {
                sp34 = 1;
            }
            _subaddieaudioquick_entrypoint_3(arg0, arg0->position, (u32*)&D_80800890_chgoldstatue, 0.38f);
            if (func_80101E14(arg0, 0.34f) != 0)
            {
                _sumumbofx_entrypoint_16(sp30, 0.25f);
                flag_setValueTrue(FLAG3_9DF_UNK);
            }
            else if (func_80101E14(arg0, 0.39f) != 0)
            {
                func_80800150_chgoldstatue(arg0, 5);
            }
            break;
        case 5:
            if (func_8010C500(arg0) == 0)
            {
                func_80800150_chgoldstatue(arg0, 6);
            }
            break;
        case 6:
            if (func_8010C500(arg0) != 0)
            {
                func_800F7B9C(character_getActiveIndex(), 0x82U);
            }
            break;
        }
        if (sp34 == 0)
        {
            return;
        }

        _subaddieaudioloop_entrypoint_4(arg0, arg0->position, 1U, &D_80800968_chgoldstatue);
        arg0->unk6C_0 = _subaddieaudioloop_entrypoint_7(arg0->unk6C_0, arg0->position, 1, &D_8080097C_chgoldstatue, arg0->unk70_0);

    }
}

extern ActorData D_80800990_chgoldstatue;
ActorData* chgoldstatue_entrypoint_0()
{
    return &D_80800990_chgoldstatue;
}
