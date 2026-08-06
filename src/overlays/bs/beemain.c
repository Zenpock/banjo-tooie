#include "common.h"

#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"
#include "overlays/ba/bounce.h"
#include "overlays/ba/timer.h"
#include "core2/1E76CC0.h"

extern void func_8009DF18(PlayerState *, s32, f32, s32);
extern s32 bastick_getZone(PlayerState*);
extern f32 bastick_getZonePosition();
extern f32 func_800F1214(f32, f32, f32);
extern void _babee_entrypoint_2(PlayerState*);
extern enum bs_state_e _badrone_entrypoint_24(PlayerState*);
extern void _bsbee_entrypoint_2();
extern s32 bainput_should_enter_first_person(PlayerState*);
extern s32 func_8008DD04(PlayerState*);
extern void func_8009D3A8(PlayerState*, s32);
extern s32 player_inWater(PlayerState*);
extern void func_8009D7A4(PlayerState*, f32, f32);
extern void func_800A2CE8(PlayerState*, f32, s32);
extern void func_80800058_bsbeemain(PlayerState*);
extern void _bsbee_entrypoint_1(PlayerState*);
extern f32 bastick_distance(PlayerState*);
extern f32 bastick_getAngleRelativeToBanjo(PlayerState*);
extern s32 func_8008DF8C(PlayerState*, s32);
extern void func_80800000_bsbeemain(PlayerState*);
extern s32 player_isStable(PlayerState*);
extern enum bs_state_e _badrone_entrypoint_28(PlayerState*);
extern void _basudie_entrypoint_1(PlayerState*);
extern void _ncbadie_entrypoint_3(s32, f32);
extern f32 func_800136E4(f32);
extern void func_8008E944(PlayerState*);
extern void func_8009514C(PlayerState*);
extern void func_8009BFE4(PlayerState*, f32, f32);
extern void func_800A32C4(PlayerState*, f32*);
extern s32 func_800A4CA8(PlayerState*);
extern s32 func_800EA068(s32);
extern void func_800FC660(s32);

extern s32 D_80801260_bsbeemain[];
extern s32 D_80801270_bsbeemain[];
extern s32 D_80801280_bsbeemain[];
extern s32 D_80801290_bsbeemain[];
extern s32 D_808012A0_bsbeemain[];
extern s32 D_808012B0_bsbeemain[];

/* .code */

void func_80800000_bsbeemain(PlayerState* self) {
    func_8009DF18(self, 0x41F, 1.4f, 0x1F40);
}

void func_8080002C_bsbeemain(PlayerState* self) {
    func_8009D7A4(self, 1.35f, 1.45f);
}

void func_80800058_bsbeemain(PlayerState* self) {
    f32 sp1C;

    sp1C = bastick_getZonePosition();
    if (bastick_getZone(self) == 0) {
        baphysics_set_target_horizontal_velocity(self, 0.0f);
        return;
    }
    baphysics_set_target_horizontal_velocity(self, func_800F1214(sp1C, 30.0f, 375.0f));
}

void func_808000C0_bsbeemain(PlayerState* self) {
    _bsbee_entrypoint_1(self);
    baanim_playForDuration_loopSmooth(self, 0x1DE, 3.0f); // ASSET_1DE_ANIM_BEE_IDLE
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 1, BA_PHYSICS_2_NORMAL);
    baphysics_set_target_horizontal_velocity(self, 0.0f);
    func_800909CC(self);
}

void func_80800128_bsbeemain(PlayerState* self) {
    enum bs_state_e var_s1;

    var_s1 = BS_STATE_0_INVALID;
    _bsbee_entrypoint_2();
    func_8009D3A8(self, 0);
    if (func_8008DD04(self) != 0) {
        var_s1 = 0x88;
    }
    if (bakey_held(self, BUTTON_Z) != 0) {
        _babee_entrypoint_2(self);
    }
    if (bainput_should_enter_first_person(self) != 0) {
        var_s1 = _badrone_entrypoint_24(self);
    }
    if (bastick_getZone(self) > 0) {
        var_s1 = 0x86;
    }
    if (bakey_pressed(self, BUTTON_A) != 0) {
        var_s1 = 0x87;
    }
    if (player_inWater(self) != 0) {
        var_s1 = 0x8C;
    }
    bs_setState(self, func_800A02DC(self, var_s1));
}

void func_808001FC_bsbeemain(s32 self)
{
    func_80090A2C();
    _bsbee_entrypoint_0(self);
}

s32 bsbeemain_entrypoint_0(s32 arg0) {
    return D_80801260_bsbeemain[arg0];
}

void func_80800238_bsbeemain(PlayerState* self) {
    _bsbee_entrypoint_1(self);
    baanim_playForDuration_loopSmooth(self, 0x1DD, 0.38f); // ASSET_1DD_ANIM_BEE_WALK
    func_8009FFD8(self, BAANIM_UPDATE_2_SCALE_HORZ, YAW_TYPE_1_DEFAULT, 1, BA_PHYSICS_2_NORMAL);
    func_8008C9F0(self, 30.0f, 375.0f, 0.6f, 0.4f);
    func_800909CC(self);
}

void func_808002C0_bsbeemain(PlayerState* self) {
    enum bs_state_e sp24;

    sp24 = BS_STATE_0_INVALID;
    _bsbee_entrypoint_2();
    func_8009D3A8(self, 0);
    func_80800058_bsbeemain(self);
    func_800A2CE8(self, 0.94f, 4);
    func_800A2CE8(self, 0.44f, 3);
    if (bakey_held(self, BUTTON_Z) != 0) {
        _babee_entrypoint_2(self);
    }
    if ((bastick_getZone(self) == 0) && (func_8009BCD4(self, 1.0f) != 0)) {
        sp24 = 0x85;
    }
    if (func_8008DD04(self) != 0) {
        sp24 = 0x88;
    }
    if (bakey_pressed(self, BUTTON_A) != 0) {
        sp24 = 0x87;
    }
    if (player_inWater(self) != 0) {
        sp24 = 0x8C;
    }
    bs_setState(self, sp24);
}

void func_808003B4_bsbeemain(PlayerState* self)
{
    func_80090A2C();
    _bsbee_entrypoint_0(self);
}

s32 bsbeemain_entrypoint_1(s32 arg0) {
    return D_80801270_bsbeemain[arg0];
}

void func_808003F0_bsbeemain(PlayerState* self) {
    AnimCtrl* anim_ctrl;

    anim_ctrl = baanim_getAnimCtrlPtr(self);
    _bsbee_entrypoint_1(self);
    anctrl_reset(anim_ctrl);
    anctrl_setSmoothTransition(anim_ctrl, 0);
    anctrl_setIndex(anim_ctrl, 0x1E2);
    anctrl_setSubrange(anim_ctrl, 0.0f, 0.34f);
    anctrl_setStart(anim_ctrl, 0.1f);
    anctrl_setDuration(anim_ctrl, 1.2f);
    anctrl_setPlaybackType(anim_ctrl, 1);
    anctrl_start(anim_ctrl);
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 3, BA_PHYSICS_6_AIRBORN);
    if (bastick_distance(self) != 0.0f) {
        yaw_setIdeal(self, bastick_getAngleRelativeToBanjo(self));
    }
    baphysics_set_target_yaw(self, yaw_getIdeal(self));
    func_80800058_bsbeemain(self);
    baphysics_set_horizontal_velocity(self, yaw_getIdeal(self), baphysics_get_target_horizontal_velocity(self));
    baphysics_set_vertical_velocity(self, 693.5f);
    baphysics_set_gravity(self, -1200.0f);
    func_8080002C_bsbeemain(self);
    self->unk15C.word = 0;
}

void func_80800548_bsbeemain(PlayerState* arg0) {
    enum bs_state_e sp34;
    AnimCtrl* sp30;
    f32 sp24[3];

    sp34 = BS_STATE_0_INVALID;
    sp30 = baanim_getAnimCtrlPtr(arg0);
    _bsbee_entrypoint_2(arg0);
    func_80800058_bsbeemain(arg0);
    func_8009BB24(arg0, sp24);
    if ((bakey_released(arg0, BUTTON_A)) && (sp24[1] > 0.0f)) {
        baphysics_reset_gravity(arg0);
    }
    switch (arg0->unk15C.word) {
        case 0:
            if (func_8008DF8C(arg0, 0x82)) {
                baanim_setEndAndDuration(arg0, 0.715f, 0.7f);
                arg0->unk15C.word = 2;
            } else if (anctrl_isStopped(sp30)) {
                baanim_setEndAndDuration(arg0, 0.51f, 4.0f);
                arg0->unk15C.word = 1;
            }
            break;
        case 1:
            if (func_8008DF8C(arg0, 0x82)) {
                baanim_setEndAndDuration(arg0, 0.715f, 1.2f);
                arg0->unk15C.word = 2;
            }
            break;
        case 2:
            func_8009D3A8(arg0, 0);
            if (player_isStable(arg0)) {
                func_80800000_bsbeemain(arg0);
                baanim_setEndAndDuration(arg0, 1.0f, 0.7f);
                arg0->unk15C.word = 3;
            }
            break;
        case 3:
            func_8009D3A8(arg0, 0);
            if (anctrl_isStopped(sp30)) {
                baphysics_set_target_horizontal_velocity(arg0, 0.0f);
                sp34 = 0x85;
            }
            break;
    }
    if (bakey_held(arg0, BUTTON_Z)) {
        _babee_entrypoint_2(arg0);
    }
    if (player_isStable(arg0)) {
        if (bastick_getZone(arg0) > 0) {
            sp34 = 0x86;
        }
        if (bakey_pressed(arg0, BUTTON_A)) {
            sp34 = 0x87;
        }
    } else if (bakey_pressed(arg0, BUTTON_A)) {
        sp34 = 0x8C;
    }
    if (player_inWater(arg0)) {
        sp34 = 0x8C;
    }
    bs_setState(arg0, sp34);
}

void func_80800788_bsbeemain(PlayerState* self)
{
    _bsbee_entrypoint_0();
    baphysics_reset_gravity(self);
}

s32 bsbeemain_entrypoint_2(s32 arg0) {
    return D_80801280_bsbeemain[arg0];
}

void func_808007C4_bsbeemain(PlayerState* arg0) {
    AnimCtrl* temp_s0;

    temp_s0 = baanim_getAnimCtrlPtr(arg0);
    _bsbee_entrypoint_1(arg0);
    anctrl_reset(temp_s0);
    anctrl_setIndex(temp_s0, 0x1E2);
    anctrl_setStart(temp_s0, 0.34f);
    anctrl_setDuration(temp_s0, 8.0f);
    anctrl_setSubrange(temp_s0, 0.0f, 0.51f);
    anctrl_setPlaybackType(temp_s0, 1);
    anctrl_start(temp_s0);
    func_8009FFD8(arg0, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 3, BA_PHYSICS_6_AIRBORN);
    arg0->unk15C.word = 0;
}

void func_80800874_bsbeemain(PlayerState* arg0) {
    enum bs_state_e sp34;
    AnimCtrl* sp30;
    f32 sp24[3];

    sp34 = BS_STATE_0_INVALID;
    sp30 = baanim_getAnimCtrlPtr(arg0);
    _bsbee_entrypoint_2(arg0);
    func_8009D3A8(arg0, 0);
    func_80800058_bsbeemain(arg0);
    func_8009BB24(arg0, sp24);
    switch (arg0->unk15C.word) {
        case 0:
            if (func_8008DF8C(arg0, 0x82)) {
                baanim_setEndAndDuration(arg0, 0.715f, 0.7f);
                arg0->unk15C.word = 1;
            }
            break;
        case 1:
            func_8009D3A8(arg0, 0);
            if (player_isStable(arg0)) {
                func_80800000_bsbeemain(arg0);
                baphysics_set_target_horizontal_velocity(arg0, 0.0f);
                baanim_setEndAndDuration(arg0, 1.0f, 0.7f);
                arg0->unk15C.word = 2;
            }
            break;
        case 2:
            func_8009D3A8(arg0, 0);
            if (anctrl_isStopped(sp30)) {
                baphysics_set_target_horizontal_velocity(arg0, 0.0f);
                sp34 = 0x85;
            }
            break;
    }
    if (bakey_held(arg0, BUTTON_Z)) {
        _babee_entrypoint_2(arg0);
    }
    if (player_isStable(arg0)) {
        if (baflag_isTrue(arg0, BA_FLAG_19)) {
            sp34 = _badrone_entrypoint_28(arg0);
        } else {
            if (bastick_getZone(arg0) > 0) {
                sp34 = 0x86;
            }
            if (bakey_pressed(arg0, BUTTON_A)) {
                sp34 = 0x87;
            }
            sp34 = func_800A02DC(arg0, sp34);
        }
    } else if ((baflag_isFalse(arg0, BA_FLAG_F)) && (bakey_pressed(arg0, BUTTON_A))) {
        sp34 = 0x8C;
    }
    if (player_inWater(arg0)) {
        sp34 = 0x8C;
    }
    bs_setState(arg0, sp34);
}

void func_80800A74_bsbeemain()
{
    _bsbee_entrypoint_0();
}

s32 bsbeemain_entrypoint_3(s32 arg0) {
    return D_80801290_bsbeemain[arg0];
}

void bsbeemain_entrypoint_4(PlayerState* self)
{
    _babounce_entrypoint_3(self);
    _bsbee_entrypoint_0(self);
}

void bsbeemain_entrypoint_5(PlayerState* self) {
    _bsbee_entrypoint_1(self);
    _babounce_entrypoint_4(self, 1);
    _babounce_entrypoint_5(self, 0x1E0, 0.7518f);
}

void bsbeemain_entrypoint_6(PlayerState* self) {
    enum bs_state_e next_state;

    next_state = BS_STATE_0_INVALID;
    _bsbee_entrypoint_2(self);
    if (_babounce_entrypoint_9(self) != 0) {
        next_state = 0x85;
    }
    bs_setState(self, next_state);
}

s32 bsbeemain_entrypoint_7(s32 arg0) {
    return D_808012A0_bsbeemain[arg0];
}

void func_80800B68_bsbeemain(PlayerState* self)
{
    _babounce_entrypoint_3(self);
    _bsbee_entrypoint_0(self);
}

void func_80800B90_bsbeemain(PlayerState* self) {
    _bsbee_entrypoint_1(self);
    _babounce_entrypoint_4(self, 2);
    _babounce_entrypoint_5(self, 0x1E0, 0.7518f);
}

void func_80800BD0_bsbeemain(PlayerState* self) {
    enum bs_state_e next_state;

    next_state = BS_STATE_0_INVALID;
    _bsbee_entrypoint_2(self);
    if (_babounce_entrypoint_9(self) != 0) {
        next_state = 0x85;
    }
    bs_setState(self, next_state);
}

s32 bsbeemain_entrypoint_8(s32 arg0) {
    return D_808012B0_bsbeemain[arg0];
}

void func_80800C28_bsbeemain(PlayerState* self) {
    AnimCtrl* anim_ctrl;
    f32 sp48;
    f32 sp3C[3];
    f32 sp30[3];

    anim_ctrl = baanim_getAnimCtrlPtr(self);
    self->unk160.word = func_800EA068(0x40);
    if (self->unk160.word) {
        func_800FC660(0x19);
    } else {
        _basudie_entrypoint_1(self);
        func_8008E944(self);
        func_8009514C(self);
        func_800A4DA4(self, 0xA);
        _ncbadie_entrypoint_3(func_800A4CA8(self), 30.0f);
        func_800A0180(self);
    }
    _bsbee_entrypoint_1(self);
    anctrl_reset(anim_ctrl);
    anctrl_setSmoothTransition(anim_ctrl, 0);
    anctrl_setIndex(anim_ctrl, 0x1E1); // ASSET_1E1_ANIM_BEE_DIE
    anctrl_setSubrange(anim_ctrl, 0.0f, 0.3966f);
    anctrl_setDuration(anim_ctrl, 1.7f);
    anctrl_setPlaybackType(anim_ctrl, 1);
    anctrl_start(anim_ctrl);
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 2, BA_PHYSICS_3_LOCKED_ROTATION);
    func_8009C128(self, sp3C);
    func_800A32C4(self, sp30);
    func_800F1E6C(sp30, sp3C, &sp48);
    yaw_setIdeal(self, func_800136E4(sp48 + 180.0f));
    yaw_applyIdeal(self);
    self->unk16C = 250.0f;
    baphysics_set_target_horizontal_velocity(self, 250.0f);
    baphysics_set_target_yaw(self, sp48);
    baphysics_set_horizontal_velocity(self, sp48, baphysics_get_target_horizontal_velocity(self));
    baphysics_set_vertical_velocity(self, 420.0f);
    baphysics_set_gravity(self, -1200.0f);
    func_8009BFE4(self, 1000.0f, 12.0f);
    func_8009D820(self, 1.8f);
    _batimer_set(self, 0, 2.9f);
    self->unk15C.word = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800E0C_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800FB8_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800FF0_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_9.s")

void func_80801080_bsbeemain(PlayerState* self)
{
    _bsbee_entrypoint_1(self);
    _bsrest_entrypoint_16(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808010A8_bsbeemain.s")

void func_808010F4_bsbeemain(PlayerState* self)
{
    _bsrest_entrypoint_14();
    _bsbee_entrypoint_0(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80801130_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_8080118C_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808011E8_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_11.s")
