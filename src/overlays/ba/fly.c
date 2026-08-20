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

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_3.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_5.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_6.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_7.s")

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

void bafly_entrypoint_18(s32 arg0)
{
    baphysics_reset_gravity();
    func_8008E95C(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_19.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ba/fly/bafly_entrypoint_21.s")
