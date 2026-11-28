#include "ch/anglerboss/flare.h"
void func_80800190_changlerbossflare(Actor* actor);
void func_8080021C_changlerbossflare(Actor* actor);
void func_808003A4_changlerbossflare(Actor* actor);
extern ActorData D_80800480_changlerbossflare;
extern s32 D_808004C8_changlerbossflare;
extern u32 D_808004DC_changlerbossflare;
extern u32 D_808004F4_changlerbossflare;
extern s32 D_80800500_changlerbossflare;
extern s32 D_8080053C_changlerbossflare;
extern s32 D_80800550_changlerbossflare;
ActorData* changlerbossflare_entrypoint_0()
{
    return &D_80800480_changlerbossflare;
}

void func_8080000C_changlerbossflare(Actor* actor)
{
    _subaddieaudioquick_entrypoint_2(actor, actor->position, &D_808004C8_changlerbossflare);
    func_8010A3E8(actor, 0.3f);
    actor->unk54s = light_createNew();
    actor->unk70_0 = 1;
}

void changlerbossflare_update(Actor* actor)
{
    _subaddieaudioloop_entrypoint_4(actor, actor->position, 1U, &D_808004DC_changlerbossflare);
    (((f32*)actor->actorData)[0]) += (time_getDelta() * 300.0f);
    if ((actor->unk70_10) == 1)
    {
        func_800C8E54(actor->unk54s, actor->scale * 400.0f, actor->scale * 1000.0f);
        light_setColors(actor->unk54s, &D_808004F4_changlerbossflare);
        light_setPosition(actor->unk54s, actor->position);
        func_8080021C_changlerbossflare(actor);
        func_808003A4_changlerbossflare(actor);
        if (func_8010B990(actor, 0x400007) & 0x20)
        {
            func_80800190_changlerbossflare(actor);
        }
    }
}

s32 changlerbossflare_eventHandler(Actor* actor, s32 eventType, s32 arg2)
{
    switch (eventType)
    {
        case 0x40:
        {
            func_80800190_changlerbossflare(actor);
            break;
        }
        default:
            return 0;
    }
    return 1;
}

void func_80800190_changlerbossflare(Actor* actor)
{
    if (actor->unk54s != 0)
    {
        actor->unk54s = _chlightfader_entrypoint_1(actor->unk54s, 1.4f, 2);
    }
    func_800BBCB8(actor->position, actor->position, 1.0f, 0xC, &D_80800500_changlerbossflare);
    _subaddieaudioquick_entrypoint_2(actor, actor->position, &D_8080053C_changlerbossflare);
    actor_disableCollision(actor);
    actor_mark_delete(actor);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/anglerboss/flare/func_8080021C_changlerbossflare.s")

void func_808003A4_changlerbossflare(Actor* actor)
{
    f32 sp34[3];
    f32 sp2C[2];
    if (actor->unk64_20 && func_800F6438(actor->unk6C_0))
    {
        character_getCoords(actor->unk6C_0, sp34);
        if (ml_vec3f_distance_sq(actor->position, sp34) < 1440000.0f)
        {
            actor->unk64_20 = 0;
        }
        else
        {
            func_800F18FC(actor->position, sp34, &sp2C);
            func_800EEBF0(&actor->actorData[4], &sp2C, ml_vec3f_magnitude(&actor->actorData[4]));
        }
    }
}