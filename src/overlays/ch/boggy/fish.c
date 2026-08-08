#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/boggy/fish/func_80800000_chboggyfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/boggy/fish/func_80800064_chboggyfish.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/boggy/fish/func_8080018C_chboggyfish.s")

extern ActorData D_80800220_chboggyfish;
ActorData* chboggyfish_entrypoint_0()
{
    return &D_80800220_chboggyfish;
}