#include "common.h"

#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "overlays/ba/physics.h"
#include "core2/1E93440.h"
#include "core2/1EB5980.h"

extern void func_800BBCB8(f32[3], s32, f32, s32, s32 *);
extern f32 func_800DC178(f32, f32);
extern s32 _bsbee_entrypoint_2();
extern s32 _bsrest_entrypoint_20(PlayerState*);
extern s32 func_800B5BE4(s32);
extern s32 func_800BABB8(s32, f32[3], f32[3], f32, s32[]);
extern void _bsbee_entrypoint_1();
extern f32 bastick_distance(PlayerState*);
extern f32 bastick_getAngleRelativeToBanjo(PlayerState*);
extern void _babee_entrypoint_5(PlayerState*);
extern void _baboost_entrypoint_4(PlayerState*, s32);
extern void _babuzz_entrypoint_1(PlayerState*);
extern void _bafly_entrypoint_4(PlayerState*);
extern void _bafpctrl_entrypoint_18(PlayerState*, s32);
extern void baroll_setIdeal(PlayerState*, f32);
extern void func_80093360(PlayerState*, f32);
extern void func_800947EC(PlayerState*, s32, s32);
extern void func_8009BF5C(PlayerState*, f32);
extern s32 func_8009CA70(PlayerState*, s32, s32);
extern void _babee_entrypoint_6(PlayerState*);
extern void _babee_entrypoint_7(PlayerState*, f32, f32, f32);
extern void _baboost_entrypoint_3(PlayerState*);
extern void _baboost_entrypoint_4(PlayerState*, s32);
extern void _babuzz_entrypoint_2(PlayerState*);
extern void _bafly_entrypoint_20(PlayerState*);
extern void _bafly_entrypoint_5(PlayerState*);
extern void _bafpctrl_entrypoint_18(PlayerState*, s32);
extern void baroll_setAngularVelocity(PlayerState*, f32, f32);
extern void func_80093360(PlayerState*, f32);
extern f32 _bafpctrl_entrypoint_3(PlayerState*);
extern void _ncbafly_entrypoint_4(s32, f32, f32, f32);
extern void baroll_setIdeal(PlayerState*, f32);
extern f32 bastick_getX();
extern s32 func_800A4CA8(PlayerState*);
extern f32 func_800F10B4(f32, f32, f32, f32, f32);

extern s32 D_80800DC0_bsbeefly;
extern s32 D_80800DE8_bsbeefly;
extern s32 D_80800E18_bsbeefly;

/* .code */

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800000_bsbeefly.s")
void func_80800000_bsbeefly(PlayerState* arg0) {
    f32 sp24[3];

    func_8009C128(arg0, sp24);
    sp24[0] += func_800DC178(-30.0f, 30.0f);
    sp24[1] += 30.0f + func_800DC178(0, 30.0f);
    sp24[2] += func_800DC178(-30.0f, 30.0f);
    func_800BBCB8(sp24, 0, 1.0f, 1, &D_80800DC0_bsbeefly);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808000A4_bsbeefly.s")
void func_808000A4_bsbeefly(PlayerState* arg0) {
    f32 sp24[3];
    s32 sp20;

    sp20 = func_800B5BE4(0x22);
    func_8009C128(arg0, sp24);
    sp24[1] += 45.0f;
    func_800BABB8(sp20, sp24, 0, 1.0f, &D_80800DE8_bsbeefly);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_8080010C_bsbeefly.s")
void func_8080010C_bsbeefly(PlayerState* arg0) {
    _bsbee_entrypoint_1();
    baanim_playForDuration_once(arg0, 0x1DF, 1.5f);
    func_8009FFD8(arg0, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 3, BA_PHYSICS_6_AIRBORN);
    if (bastick_distance(arg0) != 0.0f) {
        yaw_setIdeal(arg0, bastick_getAngleRelativeToBanjo(arg0));
    }
    baphysics_set_target_yaw(arg0, yaw_getIdeal(arg0));
    baphysics_set_target_horizontal_velocity(arg0, 0.0f);
    baphysics_set_gravity(arg0, -1200.0f);
    arg0->unk15C.word = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808001C4_bsbeefly.s")

void func_808002B0_bsbeefly()
{
    _bsbee_entrypoint_0();
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_0.s")
s32 bsbeefly_entrypoint_0(s32 arg0) {
    return *(&D_80800E18_bsbeefly + arg0);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808002E4_bsbeefly.s")
void func_808002E4_bsbeefly(PlayerState* arg0) {
    if (func_8009CA70(arg0, bs_getNextState(arg0), 0x4000) == 0) {
        func_80093360(arg0, 0.0f);
        baroll_setIdeal(arg0, 0.0f);
        func_8009BF5C(arg0, 0.0f);
        func_800A4E30(arg0);
        baphysics_reset_gravity(arg0);
        baphysics_reset_terminal_velocity(arg0);
        _baboost_entrypoint_4(arg0, 0);
        _babuzz_entrypoint_1(arg0);
        _babee_entrypoint_5(arg0);
        _bafly_entrypoint_4(arg0);
        _bafpctrl_entrypoint_18(arg0, 0);
        func_800947EC(arg0, 1, 1);
    }
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_8080039C_bsbeefly.s")
void func_8080039C_bsbeefly(PlayerState* arg0) {
    if (func_8009CA70(arg0, bs_getPreviousState(arg0), 0x4000) == 0) {
        _bafly_entrypoint_5(arg0);
        _babee_entrypoint_6(arg0);
        _babee_entrypoint_7(arg0, 6000.0f, 0.2f, 12000.0f);
        func_80093360(arg0, 65.0f);
        yaw_setUpdateType(arg0, YAW_TYPE_3_BOUNDED);
        baroll_setAngularVelocity(arg0, 500.0f, 2.0f);
        _bafly_entrypoint_20(arg0);
        baphysics_set_gravity(arg0, -300.0f);
        baphysics_set_terminal_velocity(arg0, -99.9f);
        _baboost_entrypoint_3(arg0);
        _baboost_entrypoint_4(arg0, 1);
        _babuzz_entrypoint_2(arg0);
        _bafpctrl_entrypoint_18(arg0, 1);
    }
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800480_bsbeefly.s")
void func_80800480_bsbeefly(PlayerState* arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp28[3];
    f32 var_f0;

    sp28[1] = bastick_getX();
    _ncbafly_entrypoint_4(func_800A4CA8(arg0), 2.0f, 2000.0f, 350.0f);
    if (bakey_held(arg0, BUTTON_R)) {
        yaw_setVelocityBounded(arg0, 500.0f, 30.0f);
        sp30 = 6.0f;
        var_f0 = 85.0f;
    } else {
        yaw_setVelocityBounded(arg0, 500.0f, 2.0f);
        sp30 = 3.0f;
        var_f0 = 65.0f;
    }
    baroll_setIdeal(arg0, func_800F10B4(sp28[1], -1.0f, 1.0f, -var_f0, var_f0));
    sp34 = func_800F10B4(sp28[1], -1.0f, 1.0f, sp30, -sp30);
    sp34 *= _bafpctrl_entrypoint_3(arg0);
    yaw_setIdeal(arg0, yaw_getIdeal(arg0) + sp34);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808005B0_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800600_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800708_bsbeefly.s")

void func_80800B18_bsbeefly(PlayerState* arg0)
{
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_1.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800B54_bsbeefly.s")

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800BA4_bsbeefly.s")
void func_80800BA4_bsbeefly(PlayerState* arg0) {
    enum bs_state_e sp1C;

    sp1C = BS_STATE_0_INVALID;
    _bsbee_entrypoint_2();
    if (_bsrest_entrypoint_20(arg0) != 0) {
        sp1C = 0x8C;
    }
    bs_setState(arg0, sp1C);
}

void func_80800BE8_bsbeefly(PlayerState* arg0)
{
    _bsrest_entrypoint_14();
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_2.s")

void func_80800C2C_bsbeefly(PlayerState* arg0)
{
    _bafly_entrypoint_18();
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800C5C_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800C94_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_3.s")

void func_80800CE0_bsbeefly(PlayerState* arg0)
{
    _bafly_entrypoint_15();
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800D10_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800D50_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_4.s")
