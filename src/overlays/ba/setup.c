#include "ba/setup.h"

Prop* func_8080071C_basetup(s32);

extern u8 D_8012762C;

s32 basetup_entrypoint_0() 
{
    return 0x4;
}

void func_80800008_basetup(PlayerState* self)
{
    MapId sp1C;
    s32 sp18;

    sp1C = func_800EA05C();
    sp18 = func_800EA090();
    if ((func_800DB9B0() == 0) && (((sp1C == MAP_13A_CCL_CENTRAL_CAVERN) && (sp18 == 0xE)) || ((sp1C == MAP_136_CCL_CLOUD_CUCKOOLAND) && (sp18 == 0x1B))) && (flag_getValue(FLAG_327_UNK) != 0))
    {
        func_800A0FF0(self);
    }
}

void func_80800080_basetup(PlayerState* self)
{
    s32 sp1C;
    TransformationId temp_v0;

    sp1C = _bashoes_entrypoint_1(self);
    if (func_800F40EC(self) != 0)
    {
        switch (player_getTransformation(self))
        {
            case TRANSFORM_1_BK:
                if ((sp1C == 2) || (sp1C == 3) || (sp1C == 4) || (sp1C == 5))
                {
                    _bashoes_entrypoint_6(self, 1);
                    return;
                }
                break;
            case TRANSFORM_B_KAZOOIE:
                if ((sp1C == 3) || (sp1C == 4) || (sp1C == 5))
                {
                    _bashoes_entrypoint_6(self, 2);
                }
                break;
        }
    }
}

void func_80800140_basetup(f32* arg0)
{
    f32 sp24[3];
    f32 sp18[3];

    ml_vec3f_copy(sp18, arg0);
    arg0[1] -= 1000.0f;
    func_800C6A7C(sp18, arg0, sp24, 0x420025);
}

void func_80800194_basetup(PlayerState* arg0, f32* arg1, f32* arg2)
{
    TransformationId currentTransform;
    MapId currentMap;
    s32 sp1C;

    currentTransform = player_getTransformation(arg0);
    currentMap = func_800EA05C();
    sp1C = func_800EA090();
    if ((func_800DB9B0() == 0) && (((currentMap == MAP_112_TDL_TERRYDACTYLAND) && (sp1C == 0xF)) || ((currentMap == MAP_116_TDL_INSIDE_MOUNTAIN) && (sp1C == 2))) && (currentTransform == TRANSFORM_12_TREXSMALL))
    {
        func_80800140_basetup(arg1);
        func_80800140_basetup(arg2);
    }
}

void basetup_entrypoint_1(s32 arg0, s32 arg1)
{
    PlayerState* temp_v0;
    s32 pad[1];
    s32 sp24;
    BanjoStateId nextState;
    s32 temp_v0_2;

    temp_v0 = character_getPlayerState(arg1);
    nextState = _badata_entrypoint_35(temp_v0);
    sp24 = func_800EA068(8);
    temp_v0_2 = func_8009E958();
    switch (temp_v0_2)
    {
        case 1:
            if ((sp24 != 0) && (ability_getValue(ABILITY_15_BREEGULL_BLASTER) != 0))
            {
                nextState = BS_STATE_C8_FP_ENTER_SLOW;
            }
            break;
        case 9:
            if (sp24 != 0)
            {
                nextState = BS_STATE_CB_FP_ENTER_FAST;
                break;
            }
            nextState = BS_STATE_C9_PUTTING_AWAY_FP_KAZOOIE;
            break;
    }
    func_800A3544(temp_v0, 0);
    bs_setState(temp_v0, nextState);
}

void func_808002D4_basetup(PlayerState* self)
{
    bastatetimer_set(self, BA_STATE_TIMER_ID_2_LONGLEG, func_8009E97C());
    bastatetimer_set(self, BA_STATE_TIMER_ID_3_TURBO_TALON, func_8009E988());
    if (func_8009EA64() != 0)
    {
        bs_setState(self, _badata_entrypoint_33(self));
    }
    else if (func_8009EA20() != 0)
    {
        bs_setState(self, BS_STATE_11E);
    }
    else
    {
        func_80800008_basetup(self);
        bs_setState(self, _badata_entrypoint_35(self));
    }
    func_80800080_basetup(self);
}

void func_80800394_basetup(PlayerState* self)
{
    s32 sp34;
    s32 sp30;
    TransformationId currentTransform;
    s32 pad;
    TransformationId currentTransform2;
    BanjoStateId currentState;
    s32 stateInvalid;
    s32 var_v0;

    sp34 = func_800F8B88() == 3;
    sp30 = func_8008DAA8(self);
    currentTransform = player_getTransformation(self);
    currentState = bs_getCurrentState(self);
    stateInvalid = currentState == BS_STATE_0_INVALID;
    if (sp30 != 0)
    {
        if (stateInvalid)
        {
            func_808002D4_basetup(self);
        }
    }
    else if (stateInvalid)
    {
        func_808002D4_basetup(self);
    }
    if (sp30 == 0)
    {
        currentTransform2 = player_getTransformation(self);
        if (func_800F64A4(character_getActiveIndex(), 0x10000) != 0)
        {
            if ((func_8008E23C(self) != 0) && (currentTransform2 == TRANSFORM_A_BANJO))
            {
                func_800F457C(self, 2);
            }
            else
            {
                bs_setState(self, _badrone_entrypoint_29(self));
            }
        }
        else if (sp34 != 0)
        {
            bs_setState(self, 0xED);
        }
        else
        {
            func_800F457C(self, 2);
        }
        if (func_800F8DA8(currentTransform2) != 0)
        {
            func_800F8D50(self->unk184, currentTransform2);
        }
    }
    else
    {
        var_v0 = 0;
        switch (currentTransform)
        {
            case TRANSFORM_B_KAZOOIE:
                if (sp34 == 0)
                {
                    break;
                }
                var_v0 = 1;
                break;
            case TRANSFORM_E_GOLDENGOLIATH:
            case TRANSFORM_11_CLOCKWORK:
                var_v0 = 1;
                break;
        }
        if (var_v0)
        {
            func_800F8128(self->unk184);
        }
    }
}

s32 func_80800534_basetup(PlayerState* self)
{
    f32 sp2C[3];

    if ((func_800DB9B0() != 0) || (_glcutDll_entrypoint_1() != 0))
    {
        func_80800394_basetup(self);
        return 1;
    }
    if (func_8008DAA8(self) == 0)
    {
        func_80800394_basetup(self);
        if ((func_800F99FC() == 0) && (func_800F99E8() == 0) && (func_800F8B7C() != 0) && (func_8008E23C(self) != 0))
        {
            _plcamera_entrypoint_13(self->unk184, func_800F8A50());
        }
        return 1;
    }
    if (func_800F99FC() != 0)
    {
        if (player_getTransformation(self) == TRANSFORM_A_BANJO)
        {
            func_808002D4_basetup(self);
        }
        return 1;
    }
    if (func_800F99E8() != 0) {
        func_80800394_basetup(self);
        return 1;
    }
    if ((func_800F8B7C() != 0) && (func_8008E23C(self) != 0))
    {
        func_800F89E4(player_getTransformation(self), &sp2C);
        func_800F452C(self, &sp2C);
        yaw_setIdeal(self, func_800F8A50());
        yaw_applyIdeal(self);
        _plcamera_entrypoint_13(self->unk184, func_800F8A50());
        func_80800394_basetup(self);
        return 1;
    }
    if (func_8009EA64() != 0)
    {
        func_80800394_basetup(self);
        return 1;
    }
    return 0;
}

s32 func_808006F0_basetup(s32 arg0)
{
    return _gccubesearch_entrypoint_14(_gemarkersDll_entrypoint_1(arg0), 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/setup/func_8080071C_basetup.s")

TransformationId func_80800778_basetup(s32 arg0)
{
    MapId temp_v0_2;
    TransformationId temp_v0;

    temp_v0 = func_8009E958();
    if (temp_v0 != TRANSFORM_1_BK)
    {
        if ((temp_v0 == TRANSFORM_9_FIRSTPERSON) && (func_800EA05C() == MAP_116_TDL_INSIDE_MOUNTAIN))
        {
            temp_v0 = TRANSFORM_1_BK;
            func_8009EB18(0);
        }
    }
    else if ((func_800EA068(8) != 0) && (ability_getValue(ABILITY_15_BREEGULL_BLASTER) != 0))
    {
        temp_v0 = TRANSFORM_9_FIRSTPERSON;
    }
    if (func_800EA068(0x40) != 0)
    {
        switch (func_800EA05C())
        {
        case MAP_182_MP_SUBMARINE:
            temp_v0 = TRANSFORM_C_SUB;
            break;
        case MAP_188_MP_BEE_HIVE:
            temp_v0 = TRANSFORM_6_BEE;
            break;
        default:
            temp_v0 = TRANSFORM_9_FIRSTPERSON;
            break;
        }
        func_8009E9D8(temp_v0);
    }
    return temp_v0;
}

void basetup_entrypoint_2(PlayerState* self)
{
    s32 sp64;
    Prop* sp60;
    s32 sp5C;
    f32 sp50[3];
    f32 sp4C;
    f32 sp40[3];
    TransformationId sp3C;
    s32 pad;
    f32 sp2C[3];
    f32 sp28;

    if ((player_getTransformation(self) == 4) || (_gclevel_entrypoint_4(1) != 0))
    {
        func_800F44DC(self, 0);
        return;
    }
    if (func_80800534_basetup(self) == 0)
    {
        sp5C = func_800EA090();
        sp64 = func_808006F0_basetup(sp5C);
        if (sp64 != 0)
        {
            sp60 = func_8080071C_basetup(sp5C);
        }
        else
        {
            if (_sudeathmatch_entrypoint_0(self->unk184, &sp50, &sp40) != 0)
            {
                sp4C = sp40[1];
            }
            else if (sp64 == 0)
            {
                func_800F44DC(self, 0);
                return;
            }
            sp60 = NULL;
        }
        sp3C = func_80800778_basetup((s32)self);
        if (sp3C == TRANSFORM_9_FIRSTPERSON)
        {
            _bashoes_entrypoint_6(self, 1);
            func_8009EB0C(0.0f);
            if ((sp60 != NULL) && (func_8009E994() == 0))
            {
                sp3C = func_8009E958();
            }
            else
            {
                func_800A3544(self, D_8012762C == 0x1B ? 1 : 0);
            }
        }
        func_800A3410(self, sp3C);
        func_80092778(self);
        func_800F44DC(self, 0);
        if (sp64 != 0)
        {
            _gspropctrl_entrypoint_11((Prop*)sp64, &sp50);
            sp4C = (f32)_gspropctrl_entrypoint_12(sp64);
        }
        func_800F44DC(self, 1);
        *self->unk100 = -1;
        if (func_8009EA4C() == 2)
        {
            if ((func_800EA068(8) != 0) && (ability_getValue(ABILITY_15_BREEGULL_BLASTER) != 0))
            {
                func_8009EAD0(1);
            }
            else
            {
                sp4C += 180.0f;
            }
        }
        yaw_setIdeal(self, sp4C);
        yaw_applyIdeal(self);
        if (sp60 != NULL)
        {
            sp28 = 1.0f;
            if (func_800EA068(4) != 0)
            {
                sp28 = (f32)_gspropctrl_entrypoint_13(sp60) * 0.1f;
            }
            _gspropctrl_entrypoint_11(sp60, &sp2C);
            func_80800194_basetup(self, &sp2C, &sp50);
            func_800F452C(self, &sp2C);
            func_808002D4_basetup(self);
            func_800F497C(self->unk184);
            func_800F49D4(self->unk184, &_basetup_entrypoint_1, self->unk184);
            func_800F4A8C(self->unk184, &sp50, sp28);
            return;
        }
        func_800F452C(self, &sp50);
        func_808002D4_basetup(self);
    }
}

void basetup_entrypoint_3(s32 arg0) {}

void basetup_entrypoint_4(s32 arg0) {}
