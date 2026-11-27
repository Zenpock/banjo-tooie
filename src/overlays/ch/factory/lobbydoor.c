#include "common.h"

extern ActorData D_80800160_chfactorylobbydoor;
ActorData* chfactorylobbydoor_entrypoint_0()
{
    return &D_80800160_chfactorylobbydoor;
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/lobbydoor/func_8080000C_chfactorylobbydoor.s")

void chfactorylobbydoor_update(s32 arg0)
{
    func_808000D0_chfactorylobbydoor();
    _chdoor_update(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/lobbydoor/func_808000D0_chfactorylobbydoor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/lobbydoor/chfactorylobbydoor_eventHandler.s")
