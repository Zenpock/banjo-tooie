#include "core2/1E79FD0.h"

s32 func_800A06E0() 
{
    return sizeof(BaUnknown138);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A06E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A0714.s")

s32 func_800A0C20(PlayerState* self) {
    return self->unk138->unk10;
}

f32 func_800A0C2C(PlayerState* self) {
    return self->unk138->unk0;
}

f32 func_800A0C38(PlayerState* self) {
    return self->unk138->unk4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A0C44.s")

void func_800A0CD0(PlayerState* self, s32 arg1) {
    self->unk138->unk12 = arg1;
}

void func_800A0CDC(PlayerState* self, s32 arg1) {
    self->unk138->unkD = arg1;
}

void func_800A0CE8(PlayerState* self, s32 arg1) {
    self->unk138->unkE = arg1;
}

void func_800A0CF4(PlayerState* self, s32 arg1) 
{
    func_800A0D14(self, arg1, 0.0f);
}

void func_800A0D14(PlayerState* self, s32 arg1, f32 arg2) {
    self->unk138->unk8 = arg2;
    self->unk138->unkC = arg1;
    if (arg2 == 0.0f) {
        self->unk138->unk10 = arg1;
    }
}

void func_800A0D44(PlayerState* self, s32 arg1) {
    func_800A0D14(self, arg1, 0.2f);
}

void func_800A0D68(PlayerState* self, s32 arg1) {
    self->unk138->unk17 = arg1;
}

void func_800A0D74(PlayerState* self, f32 arg1) {
    self->unk138->unk0 = arg1;
}

void func_800A0D84(PlayerState* self, f32 arg1) {
    self->unk138->unk4 = arg1;
}

void func_800A0D94(PlayerState* self, s32 arg1) {
    self->unk138->unk16 = arg1;
}

void func_800A0DA0(PlayerState* self, s32 arg1) {
    self->unk138->unk14 = arg1;
}

void func_800A0DAC(PlayerState* self, s32 arg1) {
    self->unk138->unk13 = arg1;
}

void func_800A0DB8(PlayerState* self, s32 arg1) {
    self->unk138->unkF = arg1;
}

void func_800A0DC4(PlayerState* self, s32 arg1) {
    self->unk138->unk15 = arg1;
}

void func_800A0DD0(PlayerState* self, s32 arg1) {
    self->unk138->unk11 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A0DDC.s")

s32 func_800A0E50(void) 
{
    return sizeof(BaUnknown150);
}

f32 func_800A0E58(PlayerState* self)
{
    return self->unk150->unk8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A0E64.s")

s32 func_800A0FCC(PlayerState* self)
{
    return self->unk150->unk2;
}

s32 func_800A0FD8(PlayerState* self)
{
    return self->unk150->unk0;
}

s32 func_800A0FE4(PlayerState* self)
{
    return self->unk150->unk1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A0FF0.s")

void func_800A1040(PlayerState* self)
{
    self->unk150->unk4 = self->unk150->unkC;
    self->unk150->unk8 = self->unk150->unk10;
    self->unk150->unkC = -1.0f;
}

void func_800A106C(PlayerState* self, f32 arg1, f32 arg2)
{
    self->unk150->unkC = self->unk150->unk4;
    self->unk150->unk10 = self->unk150->unk8;
    self->unk150->unk4 = arg1;
    self->unk150->unk8 = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E79FD0/func_800A10A0.s")
