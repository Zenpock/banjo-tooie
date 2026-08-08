#include "common.h"

#include "overlays/ba/playerstate.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800000_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_808000D0_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800128_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_808001D4_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800208_bscarry.s")

void func_8080027C_bscarry()
{
    func_808001D4_bscarry();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_8080029C_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800310_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/bscarry_entrypoint_0.s")

void func_808003D8_bscarry()
{
    func_808001D4_bscarry();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_808003F8_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_8080047C_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/bscarry_entrypoint_1.s")

void func_80800500_bscarry()
{
    func_808001D4_bscarry();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800520_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800594_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/bscarry_entrypoint_2.s")

void func_8080065C_bscarry(PlayerState* self)
{
    _bsdrone_entrypoint_2(self);
    func_808001D4_bscarry(self);
}
void func_80800684_bscarry(PlayerState* self)
{
    func_80800208_bscarry(self);
    _bsdrone_entrypoint_0(self);
}
void func_808006AC_bscarry(PlayerState* self)
{
    _bsdrone_entrypoint_1(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/bscarry_entrypoint_3.s")

void func_808006E0_bscarry(PlayerState* self)
{
    _bsrest_entrypoint_14(self);
    func_808001D4_bscarry(self);
}
void func_80800708_bscarry(PlayerState* self)
{
    func_80800208_bscarry(self);
    _bsrest_entrypoint_16(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/func_80800730_bscarry.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/carry/bscarry_entrypoint_4.s")
