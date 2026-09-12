#include "bs/stand.h"

extern s32 D_80800D90_bsstand[];
extern s32 D_80800D98_bsstand[];
extern s32 D_80800DA8_bsstand[];
extern s32 D_80800DB8_bsstand[];

BanjoStateId func_80800038_bsstand(PlayerState*, BanjoStateId);


s32 func_80800000_bsstand(PlayerState* self) {
    return D_80800D90_bsstand[self->unk160.word];
}

s32 func_80800018_bsstand(PlayerState* self, s32 arg1)
{
    arg1 = arg1 + 1;
    if (arg1 >= self->unk164.word)
    {
        arg1 = 0;
    }
    return arg1;
}

BanjoStateId func_80800038_bsstand(PlayerState* self, BanjoStateId arg1)
{
    switch (bastick_getZone(self))
    {
        case BS_STICK_ZONE_ID_1:
            arg1 = BS_STATE_1F_TIPTOE;
            break;
        case BS_STICK_ZONE_ID_2:
            arg1 = BS_STATE_2_SLOW_WALK;
            break;
        case 3:
            arg1 = BS_STATE_3_WALK;
            break;
        case 4:
            arg1 = BS_STATE_4_RUN;
            break;
    }

    if (bakey_held(self, BUTTON_Z) != 0)
    {
        arg1 = BS_STATE_7_CROUCH;
    }
    if (bakey_pressed(self, BUTTON_B) != 0)
    {
        //RANDOMIZER CHANGE TRY AND BASH IF WE ARE BK and DONT HAVE PECK
        if (func_8008E23C(self) || func_8008D1B0(self))
        {
            arg1 = func_800A055C(self, arg1);
        }
        else if (ability_getValue(ABILITY_32_BREEGULL_BASH))
        {
            arg1 = BS_STATE_189_BREEGULL_BASH;
        }
    }
    if (bakey_pressed(self, BUTTON_A) != 0)
    {
        arg1 = bs_getTypeOfJump(self);
        if (func_8008D714(self) != 0)
        {
            arg1 = 0xB8;
        }
        else if (func_8008D790(self) != 0)
        {
            _baduo_entrypoint_12(self);
            return BS_STATE_0_INVALID;
        }
    }
    if (bainput_should_enter_first_person(self) != 0)
    {
        arg1 = _badrone_entrypoint_24(self);
    }
    if (func_8008E148(self) != 0)
    {
        arg1 = _badrone_entrypoint_25(self);
    }
    if (player_inWater(self) != 0)
    {
        arg1 = 0x2D;
    }
    return func_800A02DC(self, arg1);
}

void bsstand_entrypoint_0(PlayerState* self)
{
    BanjoStateId temp_v0;

    temp_v0 = bs_getPreviousState(self);
    if (func_8009CBDC(self, temp_v0) == 0xA)
    {
        func_80098840(self);
    }
    if (temp_v0 == 0x5B)
    {
        baanim_playForDuration_once(self, 0x6F, 5.5f);
    }
    else
    {
        baanim_playForDuration_onceSmooth(self, 0x6F, 5.5f);
    }
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 1, BA_PHYSICS_2_NORMAL);
    baphysics_set_target_horizontal_velocity(self, 0.0f);
    func_800909CC(self);
    if (func_8008E23C(self) != 0)
    {
        self->unk160.word = 0;
        self->unk164.word = 6;
    }
    else {
        self->unk160.word = 1;
        self->unk164.word = 0x15;
    }
    self->unk15C.word = 0;
    self->unk168.word = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/stand/func_80800274_bsstand.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/stand/bsstand_entrypoint_1.s")

void bsstand_entrypoint_2(PlayerState* self) {
    func_800A0CF4(self, 0);
    func_80090A2C(self);
    func_800951B4(self);
}


s32 bsstand_entrypoint_3(s32 arg0) {
    return D_80800D98_bsstand[arg0];
}

void bsstand_entrypoint_4(PlayerState* self) {
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 1, BA_PHYSICS_2_NORMAL);
    baphysics_set_target_horizontal_velocity(self, 0.0f);
}

void bsstand_entrypoint_5(PlayerState* self)
{
    BanjoStateId nextState;
    AnimCtrl* temp_v0;

    nextState = BS_STATE_0_INVALID;
    temp_v0 = baanim_getAnimCtrlPtr(self);
    if (anctrl_getIndex(temp_v0) == 0xD2)
    {
        if (anctrl_isAt(temp_v0, 0.8264f) != 0)
        {
            func_8009DF18(self, 0x449, 1.0f, 0x36B0);
        }
        if (anctrl_isAt(temp_v0, 0.8864f) != 0)
        {
            func_8009DF18(self, 0x449, 1.0f, 0x36B0);
        }
    }
    if (anctrl_isStopped(temp_v0) != 0)
    {
        nextState = BS_STATE_1_IDLE;
    }
    bs_setState(self, func_80800038_bsstand(self, nextState));
}

void bsstand_entrypoint_6(s32 self) 
{
}

s32 bsstand_entrypoint_7(s32 arg0) {
    return D_80800DA8_bsstand[arg0];
}

BanjoStateId bsstand_entrypoint_8(PlayerState* self, BanjoStateId state)
{
    return func_80800038_bsstand(self, state);
}

void bsstand_entrypoint_9(PlayerState* self)
{
    _bsdrone_entrypoint_0(self);
}

void bsstand_entrypoint_10(PlayerState* self)
{
    _bsdrone_entrypoint_1(self);
}
void bsstand_entrypoint_11(PlayerState* self)
{
    _bafpctrl_entrypoint_10(self,0);
    _bsdrone_entrypoint_2(self);
}

s32 bsstand_entrypoint_12(s32 arg0)
{
    return D_80800DB8_bsstand[arg0];
}
