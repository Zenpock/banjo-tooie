#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/columns/func_80800000_chlavacolumns.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/columns/chlavacolumns_eventHandler.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/columns/chlavacolumns_update.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/columns/func_80800200_chlavacolumns.s")

extern ActorData D_80800260_chlavacolumns;
ActorData* chlavacolumns_entrypoint_0()
{
    return &D_80800260_chlavacolumns;
}
