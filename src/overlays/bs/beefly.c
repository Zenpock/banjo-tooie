#include "common.h"

#include "overlays/bs/state.h"
#include "overlays/ba/playerstate.h"
#include "overlays/ba/flag.h"
#include "core2/1E93440.h"
#include "core2/1EB5980.h"

extern void func_800BBCB8(f32[3], s32, f32, s32, s32 *);
extern f32 func_800DC178(f32, f32);
extern s32 _bsbee_entrypoint_2();
extern s32 _bsrest_entrypoint_20(PlayerState*);
extern s32 func_800B5BE4(s32);
extern s32 func_800BABB8(s32, f32[3], f32[3], f32, s32[]);

extern s32 D_80800DC0_bsbeefly;
extern s32 D_80800DE8_bsbeefly;

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

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_8080010C_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808001C4_bsbeefly.s")

void func_808002B0_bsbeefly()
{
    _bsbee_entrypoint_0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808002E4_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_8080039C_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800480_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_808005B0_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800600_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800708_bsbeefly.s")

void func_80800B18_bsbeefly(s32 arg0)
{
    func_808002E4_bsbeefly();
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

void func_80800BE8_bsbeefly(s32 arg0)
{
    _bsrest_entrypoint_14();
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_2.s")

void func_80800C2C_bsbeefly(s32 arg0)
{
    _bafly_entrypoint_18();
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800C5C_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800C94_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_3.s")

void func_80800CE0_bsbeefly(s32 arg0)
{
    _bafly_entrypoint_15();
    func_808002E4_bsbeefly(arg0);
    _bsbee_entrypoint_0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800D10_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/func_80800D50_bsbeefly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/beefly/bsbeefly_entrypoint_4.s")
