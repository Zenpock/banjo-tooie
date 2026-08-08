#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/bobpanel/func_80800000_chbobpanel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/bobpanel/func_8080004C_chbobpanel.s")

extern ActorData D_808000C0_chbobpanel;
ActorData* chbobpanel_entrypoint_0()
{
    return &D_808000C0_chbobpanel;
}
