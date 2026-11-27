#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/trashbelt/chfactorytrashbelt_update.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/trashbelt/func_808001EC_chfactorytrashbelt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/trashbelt/chfactorytrashbelt_eventHandler.s")

extern ActorData D_808005EC_chfactorytrashbelt;
ActorData* chfactorytrashbelt_entrypoint_0()
{
    return &D_808005EC_chfactorytrashbelt;
}
