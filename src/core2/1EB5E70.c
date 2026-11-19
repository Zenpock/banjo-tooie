#include "core2/1EB5E70.h"

extern s32 D_8012C824;
extern s32 D_8012C850[];
extern s32 D_8012C940;
extern s32 D_8012C978;
extern s32 D_8012C9B8;
extern f32 D_8012C9BC[3];
extern s32 D_8012CA28;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DC580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DC5BC.s")

void func_800DC61C(s32 arg0, s32 arg1) {
}
void func_800DC628(s32 arg0, s32 arg1) {
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DC634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DC740.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DC84C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DC958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DCB58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DCD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DCEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DCF48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD07C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD19C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD1C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD37C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD56C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD65C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DD998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DDB38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DDC28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DDD14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DDDC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DDF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DDFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DE03C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DE0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DE1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DE2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DE318.s")

// modelRender_draw?
void* func_800DE448(f32 position[3], f32 arg1[3], f32 scale, f32 arg3[3], s32 arg4) {
    return func_800DE498(graphics_getGraphicsBuffer(), position, arg1, scale, arg3, arg4);
}

// the real modelRender_draw?
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DE498.s")

s32 func_800DF324()
{
    return D_8012C824;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF33C.s")

s32 func_800DF350()
{
    return D_8012C940;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF35C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF38C.s")

void func_800DF3E0(void)
{
    s32 var_v1;
    for (var_v1 = 0; var_v1 < 0x3C; var_v1++)
    {
        D_8012C850[var_v1] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF410.s")

void func_800DF41C(s32 arg0) {
    D_8012C824 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF47C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF4A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF4B0.s")

void func_800DF4CC(f32 arg0[3])
{
    D_8012C9B8 = 1;
    ml_vec3f_copy(D_8012C9BC, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF5D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF6BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF72C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF7C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF7DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF7E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF7F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF818.s")

void func_800DF824(s32 arg0) {
    D_8012C978 = arg0;
}

void func_800DF830(s32 arg0) {
    D_8012CA28 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF83C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF8B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF8BC.s")

f32 func_800DF8C4(f32* arg0) {
    return *arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF8CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF8D4.s")

s32 func_800DF8F8(s32* arg0) {
    return arg0[1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EB5E70/func_800DF944.s")
