#include "common.h"

#include "overlays/ba/playerstate.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800000_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800084_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800100_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800168_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_8080018C_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808001B0_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808001D4_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800238_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808002D4_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800368_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808003C0_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800400_bsbansack.s")

void func_80800434_bsbansack(PlayerState* self)
{
    func_80800400_bsbansack();
    func_80800238_bsbansack(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_8080045C_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808004B0_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800508_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800540_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808005BC_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_1.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800710_bsbansack.s")

void func_8080077C_bsbansack(PlayerState* self)
{
    baphysics_reset_gravity();
    func_80800238_bsbansack(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808007A4_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800810_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_2.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800A14_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800A78_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800AA4_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800AF4_bsbansack.s")

void func_80800D4C_bsbansack(PlayerState* self)
{
    func_80800AF4_bsbansack(self, 0);
    func_80800238_bsbansack(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800D78_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80800DAC_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_3.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_8080101C_bsbansack.s")

void func_80801158_bsbansack(PlayerState* self)
{
    func_8080101C_bsbansack(self, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801178_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_8080119C_bsbansack.s")

void func_80801318_bsbansack(PlayerState* self)
{
    func_80801158_bsbansack(self);
    _babounce_entrypoint_3(self);
    func_80800238_bsbansack(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801348_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801390_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_4.s")

void func_8080143C_bsbansack(PlayerState* self)
{
    func_80801158_bsbansack(self);
    _babounce_entrypoint_3(self);
    func_80800238_bsbansack(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_8080146C_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_808014B4_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_5.s")

void func_80801560_bsbansack(PlayerState* self)
{
    _bsdrone_entrypoint_2();
    func_80800238_bsbansack(self);
}
void func_80801588_bsbansack(PlayerState* self)
{
    func_808002D4_bsbansack();
    _bsdrone_entrypoint_0(self);
}
void func_808015B0_bsbansack(PlayerState* self)
{
    _bsdrone_entrypoint_1(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_6.s")

void func_808015E4_bsbansack(PlayerState* self)
{
    _bsrest_entrypoint_14(self);
    func_80800238_bsbansack(self);
}
void func_8080160C_bsbansack(PlayerState* self)
{
    func_808002D4_bsbansack();
    _bsrest_entrypoint_16(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801634_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_7.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801680_bsbansack.s")

void func_80801A04_bsbansack(PlayerState* self)
{
    func_80801680_bsbansack(self, 0);
    func_80800238_bsbansack(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801A30_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801A64_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_8.s")

void func_80801CB4_bsbansack()
{
    func_80800238_bsbansack();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801CD4_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/func_80801D20_bsbansack.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/ban/sack/bsbansack_entrypoint_9.s")
