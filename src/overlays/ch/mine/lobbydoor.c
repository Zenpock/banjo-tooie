#include "ch/mine/lobbydoor.h"

extern s32 D_80800238_chminelobbydoor;
extern u16 D_8080023C_chminelobbydoor;
extern s16 D_8080023E_chminelobbydoor;

void func_808000D0_chminelobbydoor(Actor*);

extern ActorData D_808001F0_chminelobbydoor;
ActorData* chminelobbydoor_entrypoint_0()
{
    return &D_808001F0_chminelobbydoor;
}

void func_8080000C_chminelobbydoor(Actor* actor)
{
    if ((func_800EA090() == 1) && ((func_800D0A9C(0xFU, 1U) == 0) || (func_8009E958() != 1)))
    {
        func_80101FDC(actor, 1U);
    }
    if (_chdoormake_entrypoint_3(actor, 0.0f, 90.0f, 200.0f, 8, -1) != 0)
    {
        _chdoormake_entrypoint_5(actor, 1.5f);
        _chdoormake_entrypoint_8(actor, 0xEU);
    }
}

void func_808000A8_chminelobbydoor(Actor* arg0)
{
    func_808000D0_chminelobbydoor(arg0);
    _chdoor_entrypoint_0(arg0);
}

void func_808000D0_chminelobbydoor(Actor* actor)
{
    s32 var_v1;
    s32 var_v0;

    if (ability_getValue(ABILITY_15_BREEGULL_BLASTER) != 0)
    {
        var_v1 = 1;
    }
    else
    {
        var_v1 = 0;
    }
    if (ability_getValue(ABILITY_1A_BEAK_BAYONET) != 0)
    {
        var_v0 = 2;
    }
    else
    {
        var_v0 = 0;
    }
    var_v1 += var_v0;
    switch (var_v1)
    {
    case 0:
    case 2:
        break;
    case 1:
        D_8080023C_chminelobbydoor = 0xF9F;
        D_8080023E_chminelobbydoor = 0xFA0;
        break;
    case 3:
        D_8080023C_chminelobbydoor = 0xFA1;
        D_8080023E_chminelobbydoor = 0xFA1;
        break;
    }
    _subaddiedialog_entrypoint_7(actor, actor->position, &D_80800238_chminelobbydoor);
}

s32 func_8080018C_chminelobbydoor(Actor* actor, s32 eventId, s32 arg2)
{
    switch (eventId)
    {
    case 0x2E:

        if (((s16*)&arg2)[0] == 0xFA1)
        {
            event_sendToActor(actor, 7, 0);
            return 1;
        }
        return 1;
    }
    return _chdoor_entrypoint_1(actor, eventId, arg2);
}