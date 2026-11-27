#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/entrancebridge/func_80800000_chlavaentrancebridge.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/entrancebridge/chlavaentrancebridge_eventHandler.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/entrancebridge/chlavaentrancebridge_update.s")

extern ActorData D_80800230_chlavaentrancebridge;
ActorData* chlavaentrancebridge_entrypoint_0()
{
    return &D_80800230_chlavaentrancebridge;
}
