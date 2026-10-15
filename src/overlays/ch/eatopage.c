#include "ch/cheatopage.h"

void func_8080000C_chcheatopage(Actor*);
void func_80800070_chcheatopage(Actor*);
s32 func_80800124_chcheatopage(Actor*, s32, s32);
void func_80800194_chcheatopage(Actor*, unkCUnk0*);
void func_808002A0_chcheatopage(Actor*, void*);
s32 func_808002F0_chcheatopage(Actor*);

ActorData D_80800330_chcheatopage =
{
    /*0x0*/ 0x0187,
    /*0x2*/ 0x0136,
    /*0x4*/ 0x07F3,
    /*0x6*/ 0x0001,
    /*0x8*/ 0x00000000,
    /*0xC*/ func_80800070_chcheatopage,
    /*0x10*/ func_80105834,
    /*0x14*/ func_808002A0_chcheatopage,
    /*0x18*/ 0x0000,
    /*0x1A*/ 0x0000,
    /*0x1C*/ 0.8f,
    /*0x20*/ 0x0000,
    /*0x22*/ 0x0000,
    /*0x24*/ 0x4000,
    /*0x26*/ 0x0004,
    /*0x28*/ 0x00000000,
    /*0x2C*/ func_80108ED0,
    /*0x30*/ 0x0000,
    /*0x32*/ 0x0000,
    /*0x34*/ func_8080000C_chcheatopage,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8800, //Randomizer Change so we can touch it during cutscene
    /*0x3E*/ 0x3000,
    /*0x40*/ func_80800124_chcheatopage,
    /*0x44*/ 0x0000,
    /*0x46*/ 0x0000,
};

u8 D_80800378_chcheatopage[] = { 0x18,0,0,0,0,0,0,0 };
ActorData* chcheatopage_entrypoint_0()
{
    return &D_80800330_chcheatopage;
}
void func_8080000C_chcheatopage(Actor* actor)
{
    func_80103110(actor, 0U);
    func_8010A5B0(actor, flag_getValue(FLAG2_666_UNK) == 0);
    if (actor->unk64_20)
    {
        func_800FC660(0x77);
        actor->unk64_20 = 0;
    }
}

void func_80800070_chcheatopage(Actor* actor)
{

    switch (actor->unk70_10)
    {
    case 1:
        actor->rotation[1] += 186.0f * time_getDelta();
        func_80103110(actor, 0U);
        return;
    case 2:
        if (func_800D9078(&actor->unk58) != 0)
        {
            func_800F82D4(character_getActiveIndex(), 0);
            actor_mark_delete(actor);
            _glcutDll_entrypoint_6(0xADU, 1U);
        }
    }
}

//Event Handler
s32 func_80800124_chcheatopage(Actor* actor, s32 eventId, s32 arg2)
{
    if (&arg2) {}
    switch (eventId)
    {

    case EVENT_3E_ACTOR_TOUCHED:
        func_80800194_chcheatopage(actor, arg2);
        break;
    case 0x13:
        *(s32*)&actor->unk50 = arg2;
        break;
    case 0x14:
        actor->unk64_20 = 1;
        break;
    default:
        return 0;
    }
    return 1;
}

//Handle Touching the cheato page
void func_80800194_chcheatopage(Actor* actor, unkCUnk0* arg1)
{
    if (func_8010A6B0(actor, ((u32)arg1->unk1A >> 5)) != 0)
    {
        _fxsparkle_entrypoint_1(actor->position, 0x14U);
        inventory_incrementValue(0x4A);
        func_800D0BD4(*(s32*)&actor->unk50, 4U);
        func_800FC660(0x72);
        //Randomizer Change Removed FTT
        actor_mark_delete(actor);
    }
}

void func_808002A0_chcheatopage(Actor* actor, void* arg1)
{
    func_80101870(actor, arg1);
    if ((actor->unk7C_12) && (actor->unk70_10 == 1))
    {
        func_80103110(actor, 1U);
    }
}

s32 func_808002F0_chcheatopage(Actor* actor)
{
    s32 index;

    for (index = 0; index < 1; index++)
    {
        if (D_80800378_chcheatopage[index] == *(s32*)&actor->unk50)
        {
            return 1;
        }
    }
    return 0;
}
