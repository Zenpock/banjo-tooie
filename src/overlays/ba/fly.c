#include "ba/fly.h"

s32 bafly_entrypoint_0(void)
{
    return 0x10;
}

void bafly_entrypoint_1(PlayerState* self, f32* arg1, s32* arg2, f32 arg3) {
    f32 sp24[3];

    if (baflag_isTrue(self, BA_FLAG_30))
    {
        _baeggfire_entrypoint_3(self, &sp24, arg1);
        func_800EF334(arg1, arg3);
        func_800CA9D8(func_800A4C48(self), arg2);
        return;
    }
    func_800CA740(func_800A4C48(self), arg1);
    func_800EF334(arg1, arg3);
    func_800CA9D8(func_800A4C48(self), arg2);
}

s32 bafly_entrypoint_2(PlayerState *self)
{
    if (!player_isStable(self)) {
        return 0;
    }
    if (func_80096628(self) & 0x100000) {
        return 0;
    }
    return 1;
}

u8 bafly_entrypoint_3(PlayerState* self)
{
    return self->unk8C->unk8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_4.s")

void bafly_entrypoint_5(PlayerState* self) {
    s32 temp_v0;

    if (_gcstatusDll_entrypoint_11() >= 2) {
        self->unk8C->unk9 = 0U;
    } else {
        self->unk8C->unk9 = func_800C2E04();
        func_800C3418(self->unk8C->unk9, 0);
    }
    self->unk8C->unk4 = 1.0f;
    self->unk8C->unk0 = 0.0f;
    self->unk8C->unk8 = 0;
    temp_v0 = func_800EA05C();
    if ((temp_v0 != 0xE4) && (temp_v0 != 0x17B)) {
        self->unk8C->unkE = 0;
        return;
    }
    self->unk8C->unkE = 1;
}

void bafly_entrypoint_6(PlayerState* self, f32 arg1) {
    self->unk8C->unk0 = arg1;
}

void bafly_entrypoint_7(PlayerState* self, s32 arg1)
{
    self->unk8C->unk8 = (u8) arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_9.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_11.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_12.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_13.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_15.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_16.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_17.s")

void bafly_entrypoint_18(PlayerState* self)
{
    baphysics_reset_gravity(self);
    func_8008E95C(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_19.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_21.s")
