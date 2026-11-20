#include "core2/1E71B00.h"

extern f32 D_80124E20;

s32 func_80098210() 
{
    return sizeof(ba_unknown_AC_s);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098408.s")

void func_80098480(PlayerState* self, s32 arg1, s32 arg2) {
    self->unkAC->unk28 = arg1;
    self->unkAC->unk2A = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_800984CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_800984F0.s")

void func_80098520(PlayerState* self, f32 arg1) {
    self->unkAC->unk2C = arg1;
}
s32 func_80098530() 
{
    return sizeof(ba_unknown_E0_s);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098590.s")

f32 player_getPoleBottomHeight(PlayerState* self) {
    return self->unkE0->unk0[1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_800985C4.s")

f32 func_80098610(PlayerState* self) {
    return self->unkE0->unk30;
}

s32 func_8009861C(PlayerState* self) {
    return self->unkE0->unk2E;
}

f32 player_getPoleThickness(PlayerState* self) {
    return self->unkE0->unk18;
}

s32 func_80098634(PlayerState* self) {
    return self->unkE0->unk2F;
}

s32 func_80098640(PlayerState* self) {
    return self->unkE0->unk2D;
}

f32 player_getPoleTopHeight(PlayerState* self) {
    return self->unkE0->unkC[1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098658.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_80098778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E71B00/func_800987CC.s")

void player_exitPoleClimb(PlayerState* arg0) {

    arg0->unkE0->unk2C = 0;
    ml_vec3f_copy(arg0->unkE0->unk1C, arg0->unkE0->unk0);
    arg0->unkE0->unk28 = D_80124E20;
}