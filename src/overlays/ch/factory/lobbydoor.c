#include "ch/factory/lobbydoor.h"


extern ActorData D_80800160_chfactorylobbydoor;
extern s32 D_808001A8_chfactorylobbydoor;

void func_808000D0_chfactorylobbydoor(Actor*);

ActorData* chfactorylobbydoor_entrypoint_0()
{
    return &D_80800160_chfactorylobbydoor;
}
void func_8080000C_chfactorylobbydoor(Actor* actor)
{
    if ((func_800EA090() == 1) && ((func_800D0A9C(0x35U, 1U) == 0) || (func_8009E958() != 1)))
    {
        func_80101FDC(actor, 1U);
    }
    if (_chdoormake_entrypoint_3(actor, 0.0f, 90.0f, 200.0f, 8, -1) != 0)
    {
        _chdoormake_entrypoint_5(actor, 1.5f);
        _chdoormake_entrypoint_8(actor, 5U);
    }
}
void func_808000A8_chfactorylobbydoor(Actor* arg0)
{
    func_808000D0_chfactorylobbydoor(arg0);
    _chdoor_entrypoint_0(arg0);
}
void func_808000D0_chfactorylobbydoor(Actor* actor)
{
    if (_subaddiedialog_entrypoint_7(actor, actor->position, &D_808001A8_chfactorylobbydoor) != 0)
    {
        _chmrtannoy_entrypoint_0();
    }
}

s32 func_80800108_chfactorylobbydoor(Actor* actor, s32 eventId, s32 arg2)
{
    switch (eventId)
    {
        case 0x2E:

            if (((s16*)&arg2)[0] == 0x1370)
            {
                event_sendToActor(actor, 7, 0);
            }
            return 1;
    }
    return _chdoor_entrypoint_1(actor, eventId, arg2);
}