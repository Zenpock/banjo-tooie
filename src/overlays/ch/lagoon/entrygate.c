#include "ch/lagoonentrygate.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lagoon/entrygate/func_80800000_chlagoonentrygate.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lagoon/entrygate/chlagoonentrygate_update.s")

extern ActorData D_80800150_chlagoonentrygate;
ActorData* chlagoonentrygate_entrypoint_0()
{
    return &D_80800150_chlagoonentrygate;
}
