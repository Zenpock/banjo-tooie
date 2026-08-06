#include "common.h"

#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"

extern void func_8009DF18(PlayerState *, s32, f32, s32);
extern s32 bastick_getZone(PlayerState*);
extern f32 bastick_getZonePosition();
extern f32 func_800F1214(f32, f32, f32);
extern void _babee_entrypoint_2(PlayerState*);
extern enum bs_state_e _badrone_entrypoint_24(PlayerState*);
extern void _bsbee_entrypoint_2();
extern s32 bainput_should_enter_first_person(PlayerState*);
extern s32 bastick_getZone(PlayerState*);
extern s32 func_8008DD04(PlayerState*);
extern void func_8009D3A8(PlayerState*, s32);
extern s32 player_inWater(PlayerState*);
extern void func_8009D7A4(s32, f32, f32);

extern s32 D_80801260_bsbeemain[];
extern s32 D_80801270_bsbeemain[];
extern s32 D_80801280_bsbeemain[];
extern s32 D_80801290_bsbeemain[];

/* .code */

void func_80800000_bsbeemain(PlayerState* arg0) {
    func_8009DF18(arg0, 0x41F, 1.4f, 0x1F40);
}

void func_8080002C_bsbeemain(s32 arg0) {
    func_8009D7A4(arg0, 1.35f, 1.45f);
}

void func_80800058_bsbeemain(PlayerState* arg0) {
    f32 sp1C;

    sp1C = bastick_getZonePosition();
    if (bastick_getZone(arg0) == 0) {
        baphysics_set_target_horizontal_velocity(arg0, 0.0f);
        return;
    }
    baphysics_set_target_horizontal_velocity(arg0, func_800F1214(sp1C, 30.0f, 375.0f));
}

void func_808000C0_bsbeemain(PlayerState* self) {
    _bsbee_entrypoint_1(self);
    baanim_playForDuration_loopSmooth(self, 0x1DE, 3.0f); // ASSET_1DE_ANIM_BEE_IDLE
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 1, BA_PHYSICS_2_NORMAL);
    baphysics_set_target_horizontal_velocity(self, 0.0f);
    func_800909CC(self);
}

void func_80800128_bsbeemain(PlayerState* arg0) {
    enum bs_state_e var_s1;

    var_s1 = BS_STATE_0_INVALID;
    _bsbee_entrypoint_2();
    func_8009D3A8(arg0, 0);
    if (func_8008DD04(arg0) != 0) {
        var_s1 = 0x88;
    }
    if (bakey_held(arg0, BUTTON_Z) != 0) {
        _babee_entrypoint_2(arg0);
    }
    if (bainput_should_enter_first_person(arg0) != 0) {
        var_s1 = _badrone_entrypoint_24(arg0);
    }
    if (bastick_getZone(arg0) > 0) {
        var_s1 = 0x86;
    }
    if (bakey_pressed(arg0, BUTTON_A) != 0) {
        var_s1 = 0x87;
    }
    if (player_inWater(arg0) != 0) {
        var_s1 = 0x8C;
    }
    bs_setState(arg0, func_800A02DC(arg0, var_s1));
}

void func_808001FC_bsbeemain(s32 arg0)
{
    func_80090A2C();
    _bsbee_entrypoint_0(arg0);
}

s32 bsbeemain_entrypoint_0(s32 arg0) {
    return D_80801260_bsbeemain[arg0];
}

void func_80800238_bsbeemain(PlayerState* arg0) {
    _bsbee_entrypoint_1(arg0);
    baanim_playForDuration_loopSmooth(arg0, 0x1DD, 0.38f); // ASSET_1DD_ANIM_BEE_WALK
    func_8009FFD8(arg0, BAANIM_UPDATE_2_SCALE_HORZ, YAW_TYPE_1_DEFAULT, 1, BA_PHYSICS_2_NORMAL);
    func_8008C9F0(arg0, 30.0f, 375.0f, 0.6f, 0.4f);
    func_800909CC(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808002C0_bsbeemain.s")

void func_808003B4_bsbeemain(s32 arg0)
{
    func_80090A2C();
    _bsbee_entrypoint_0(arg0);
}

s32 bsbeemain_entrypoint_1(s32 arg0) {
    return D_80801270_bsbeemain[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808003F0_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800548_bsbeemain.s")

void func_80800788_bsbeemain(s32 arg0)
{
    _bsbee_entrypoint_0();
    baphysics_reset_gravity(arg0);
}

s32 bsbeemain_entrypoint_2(s32 arg0) {
    return D_80801280_bsbeemain[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808007C4_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800874_bsbeemain.s")

void func_80800A74_bsbeemain()
{
    _bsbee_entrypoint_0();
}

s32 bsbeemain_entrypoint_3(s32 arg0) {
    return D_80801290_bsbeemain[arg0];
}

void bsbeemain_entrypoint_4(s32 arg0)
{
    _babounce_entrypoint_3();
    _bsbee_entrypoint_0(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_5.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_6.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_7.s")

void func_80800B68_bsbeemain(s32 arg0)
{
    _babounce_entrypoint_3();
    _bsbee_entrypoint_0(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800B90_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800BD0_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800C28_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800E0C_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800FB8_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80800FF0_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_9.s")

void func_80801080_bsbeemain(s32 arg0)
{
    _bsbee_entrypoint_1();
    _bsrest_entrypoint_16(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808010A8_bsbeemain.s")

void func_808010F4_bsbeemain(s32 arg0)
{
    _bsrest_entrypoint_14();
    _bsbee_entrypoint_0(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_80801130_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_8080118C_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/func_808011E8_bsbeemain.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beemain/bsbeemain_entrypoint_11.s")
