#include "bs/trexlarge.h"

#include "overlays/ba/playerstate.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800000_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_8080000C_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800024_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800034_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800044_bstrexlarge.s")

int func_80800140_bstrexlarge(PlayerState* self)
{
    return bakey_pressed(self, BUTTON_B);
}

int func_80800160_bstrexlarge(PlayerState* self)
{
    return bakey_pressed(self, BUTTON_A);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800180_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_8080024C_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800270_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800294_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808002E0_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808003C4_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808004B4_bstrexlarge.s")

void func_80800560_bstrexlarge(void)
{
    bstrexlarge_entrypoint_1();
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800580_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808005D4_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_1.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_2.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_3.s")

void func_80800834_bstrexlarge(void)
{
    bstrexlarge_entrypoint_1();
}
void func_80800854_bstrexlarge()
{
    bstrexlarge_entrypoint_2();
}

void func_80800874_bstrexlarge()
{
    bstrexlarge_entrypoint_3();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_4.s")

void func_808008A8_bstrexlarge(PlayerState* self)
{
    bstrexlarge_entrypoint_1();
    _bsdrone_entrypoint_2(self);
}
void func_808008D0_bstrexlarge(PlayerState* self)
{
    bstrexlarge_entrypoint_2();
    _bsdrone_entrypoint_0(self);
}
void func_808008F8_bstrexlarge(PlayerState* self)
{
    _bsdrone_entrypoint_1();
    bstrexlarge_entrypoint_3(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_5.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800934_bstrexlarge.s")

void func_80800A00_bstrexlarge(void)
{
    bstrexlarge_entrypoint_1();
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800A20_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800A50_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_6.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_7.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800BC4_bstrexlarge.s")

void func_80800DAC_bstrexlarge(PlayerState* self)
{
    func_80800BC4_bstrexlarge(self, 0);
    bstrexlarge_entrypoint_1(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800DD8_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800E08_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_8.s")

void func_80800F2C_bstrexlarge(void)
{
    bstrexlarge_entrypoint_1();
}
void func_80800F4C_bstrexlarge()
{
    bstrexlarge_entrypoint_2();
}

void func_80800F6C_bstrexlarge()
{
    bstrexlarge_entrypoint_3();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_9.s")

void func_80800FA0_bstrexlarge(PlayerState* self)
{
    _babounce_entrypoint_3();
    bstrexlarge_entrypoint_1(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80800FC8_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80801008_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_10.s")

void func_80801060_bstrexlarge(PlayerState* self)
{
    _bsrest_entrypoint_14(self);
    bstrexlarge_entrypoint_1(self);
}
void func_80801088_bstrexlarge(PlayerState* self)
{
    bstrexlarge_entrypoint_2();
    _bsrest_entrypoint_16(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808010B0_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_11.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80801110_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808011A8_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80801208_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80801230_bstrexlarge.s")

void func_80801244_bstrexlarge(PlayerState* self)
{
    bstrexlarge_entrypoint_1();
    func_80801208_bstrexlarge(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_8080126C_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808012EC_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_12.s")

void func_808014A4_bstrexlarge(void)
{
    bstrexlarge_entrypoint_1();
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808014C4_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80801574_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_13.s")

void func_80801604_bstrexlarge(PlayerState* self)
{
    func_80090A2C();
    func_800951B4(self);
    bstrexlarge_entrypoint_1(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_80801634_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808016B4_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_14.s")

void func_808017DC_bstrexlarge(void)
{
    bstrexlarge_entrypoint_1();
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808017FC_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/func_808018AC_bstrexlarge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/trexlarge/bstrexlarge_entrypoint_15.s")
