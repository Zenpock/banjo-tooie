#include "common.h"

extern ActorData D_80800288_chfantasysafeswitch;

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/fantasy/safeswitch/func_80800000_chfantasysafeswitch.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/fantasy/safeswitch/chfantasysafeswitch_update.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/fantasy/safeswitch/chfantasysafeswitch_eventHandler.s")

ActorData* chfantasysafeswitch_entrypoint_0()
{
    return &D_80800288_chfantasysafeswitch;
}
