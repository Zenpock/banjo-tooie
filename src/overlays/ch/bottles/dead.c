#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/bottles/dead/func_80800000_chbottlesdead.s")

void func_80800034_chbottlesdead()
{
    func_8010C964();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/bottles/dead/func_80800054_chbottlesdead.s")

extern ActorData D_808000C0_chbottlesdead;
ActorData* chbottlesdead_entrypoint_0()
{
    return &D_808000C0_chbottlesdead;
}
