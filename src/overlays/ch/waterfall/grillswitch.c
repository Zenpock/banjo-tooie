#include "ch/waterfall/grillswitch.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/waterfall/grillswitch/chwaterfallgrillswitch_update.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/waterfall/grillswitch/func_80800054_chwaterfallgrillswitch.s")

extern ActorData D_80800090_chwaterfallgrillswitch;
ActorData* chwaterfallgrillswitch_entrypoint_0()
{
    return &D_80800090_chwaterfallgrillswitch;
}
