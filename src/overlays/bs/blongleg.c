#include "bs/blongleg.h"

s32 func_80800000_bsblongleg(PlayerState* arg0)
{
    return player_inWater(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800020_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800064_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_808000C8_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_8080013C_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800204_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_808002D8_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800378_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_1.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_2.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_3.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_5.s")

void bsblongleg_entrypoint_6()
{
    func_80800204_bsblongleg();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_7.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_9.s")

void bsblongleg_entrypoint_10()
{
    func_80800204_bsblongleg();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_11.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800994_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800A18_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_12.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_13.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_15.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_16.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_17.s")

void bsblongleg_entrypoint_18(s32 arg0)
{
    baphysics_reset_gravity();
    func_80800204_bsblongleg(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_19.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_21.s")

void bsblongleg_entrypoint_22()
{
    func_80800204_bsblongleg();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_23.s")

void bsblongleg_entrypoint_24(PlayerState* self)
{
    _bsrest_entrypoint_14(self);
    func_80800204_bsblongleg(self);
}
void bsblongleg_entrypoint_25(PlayerState* self)
{
    func_8080013C_bsblongleg(self);
    _bsrest_entrypoint_16(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_26.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_27.s")

void bsblongleg_entrypoint_28(PlayerState* self)
{
    func_8080013C_bsblongleg(self);
    _bsdrone_entrypoint_0(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_29.s")

void bsblongleg_entrypoint_30(PlayerState* self)
{
    _bsdrone_entrypoint_2();
    func_80800204_bsblongleg(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_31.s")
