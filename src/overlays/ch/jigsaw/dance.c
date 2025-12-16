#include "common.h"
#include "core2/1E2B200.h"

#include "core2/1EB2840.h"
#include "core2/1EB3750.h"

#include "core2/1EB5980.h"
#include "core2/1EA0690.h"
#include "core2/1EA1DA0.h"
#include "core2/1EA9160.h"

#include "core2/1EAAD80.h"

#include "core2/1EC8070.h"
#include "core2/1ECE0B0.h"

#include "core2/1ED4E30.h"
#include "core2/1ED8C80.h"
#include "core2/1EDAEA0.h"
#include "core2/1EDC7B0.h"
#include "core2/1EDCA30.h"
#include "core2/1EDED00.h"
#include "core2/1EE27C0.h"

#include "su/dialog.h"
#include "ch/introtext.h"

#include "fx/sparkle.h"
#include "fx/twinkle.h"

#include "gameflags.h"


typedef struct {
    u16 pad0[0xD];
    u16 unk1A;
} unkStructMoveItem;

s32 D_808003E0_chmoveitem[3] =
{
    0xFF,
    0xFF,
    0xC0
};
f32 D_808003EC_chmoveitem[2] =
{
    250.0f,
    350.0f
};

void func_80800210_chmoveitem(Actor*);
void func_80800260_chmoveitem(Actor*);
void func_80800380_chmoveitem(Actor*, void*);
s32 moveItem_Handler(Actor*, s32, s32);
ActorData NewItem_chmoveitem =
{
    /*0x0*/ 0x53,
    /*0x2*/ 0x220,
    /*0x4*/ 0x859,
    /*0x6*/ 0x1,
    /*0x8*/ 0,
    /*0xC*/ func_80800260_chmoveitem,
    /*0x10*/ func_80105834,
    /*0x14*/ func_80800380_chmoveitem,
    /*0x18*/ 0,
    /*0x1A*/ 0,
    /*0x1C*/ 0.8f,
    /*0x20*/ 0,
    /*0x22*/ 0,
    /*0x24*/ 0,
    /*0x26*/ 0x4,
    /*0x28*/ 0,
    /*0x2C*/ func_80108ED0,
    /*0x30*/ 0,
    /*0x32*/ 0,
    /*0x34*/ func_80800210_chmoveitem,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8800,
    /*0x3E*/ 0x3000,
    /*0x40*/ moveItem_Handler,
    /*0x44*/ 0,
    /*0x46*/ 0,
    /*0x48*/ 0,
};

void func_80800210_chmoveitem(Actor* arg0)
{
    if (func_800DC298(0.5f) != 0)
    {
        arg0->unk58 = 200.0f;
        return;
    }
    arg0->unk58 = -200.0f;
}

void func_80800260_chmoveitem(Actor* arg0)
{

    s32 var_s1 = 0;
    f32 sp58[3];

    arg0->rotation[1] += func_800D8FF8() * arg0->unk58;
    arg0->rotation[1] = func_800136E4(arg0->rotation[1]);
    if (arg0->unk7C_12)
    {
        var_s1 = 0;
        do {
            if (func_800DC298(0.03f) != 0)
            {
                func_80103DFC(arg0, sp58);
                func_800EF214(sp58, func_800DC178(0.0f, 360.0f), func_800DC178(0.0f, 360.0f), 60.0f);
                _fxtwinkle_entrypoint_0(sp58);
            }
            var_s1 += 1;
        } while (var_s1 != 4);
    }
    func_80103110(arg0, 0U);
}

void func_80800380_chmoveitem(Actor* arg0, void* arg1)
{
    func_80101870(arg0, arg1);
    if (arg0->unk7C_12)
    {
        func_80103110(arg0, 1);
    }
}

ActorData* chjigsawdance_entrypoint_0(void)
{
    return &NewItem_chmoveitem;
}

void chjigsawdance_entrypoint_1(void)
{
}
void chjigsawdance_entrypoint_2(void)
{
}

s32 moveItem_Touched(Actor* arg0, unkStructMoveItem* arg1)
{
    if (arg0->unk6C_0 != 0)
    {
        func_800C8B84(arg0->unk6C_0);
    }
    //Set the ability flag
    func_800C70B0(arg0->unk74_7, 1);
    //Play collected sound effect
    func_800FC63C(0x10, 0x6D60);
    //Show the Move Title
    _chintrotext_entrypoint_1(0x18BB, 0x1 - 1, 0, 1);
    _fxsparkle_entrypoint_1(arg0->position, 0);
    func_800FFA88(arg0->unk0);
}

s32 moveItem_Handler(Actor* arg0, s32 arg1, s32 arg2)
{
    f32 sp2C[3];
    switch (arg1)
    {
    case 0x3E: //Touched Item
        moveItem_Touched(arg0, (unkStructMoveItem*)arg2);
        break;
    case 0x13: //Just Spawned
        arg0->unk74_7 = arg2;
        arg0->position[1] += 75.0f;
        arg0->scale = 0.25f;
        break;
    default:
        return 0;
    }
    if (arg2)
    {
    }
    return 1;
}