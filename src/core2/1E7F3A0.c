#include "core2/1E7F3A0.h"

typedef struct {
    u8 unk0[4];
    f32 unk4;
    u8 unk8[4];
}
unkD_80127100;

extern unkD_80127100* D_80127100;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E7F3A0/func_800A5AB0.s")

s8 func_800A5B6C(void)
{
    return D_80127100->unk0[2];
}
s8 func_800A5B7C(void) {
    return D_80127100->unk0[3];
}

f32 func_800A5B8C(void) {
    return D_80127100->unk4;
}

u8 func_800A5B9C(void) {
    return D_80127100->unk8[0];
}
u8 func_800A5BAC(void) {
    return D_80127100->unk8[1];
}
u8 func_800A5BBC(void) {
    return D_80127100->unk8[2];
}
u8 func_800A5BCC(void) {
    return D_80127100->unk8[3];
}