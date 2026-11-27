#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/stationdoors/func_80800000_chfactorystationdoors.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/stationdoors/chfactorystationdoors_update.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/stationdoors/func_80800158_chfactorystationdoors.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/stationdoors/chfactorystationdoors_eventHandler.s")

extern ActorData D_80800268_chfactorystationdoors;
ActorData* chfactorystationdoors_entrypoint_0()
{
    return &D_80800268_chfactorystationdoors;
}
