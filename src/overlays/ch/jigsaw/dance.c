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

u8 moveSpawnable[0x32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
typedef struct {
    u8 DialogIndex;
    u8 AbilityId;
} MoveNames;
MoveNames D_MOVENAMES[] = {
    {0x0D,0x14},
    {0x0E,0x15},
    {0x0F,0x16},
    {0x0B,0x19},
    {0x0C,0x1A},
    {0x04,0x1B},
    {0x05,0x1C},
    {0x12,0x1D},
    {0x10,0x1E},
    {0x11,0x1F},
    {0x1A,0x20},
    {0x13,0x21},
    {0x14,0x22},
    {0x16,0x23},
    {0x17,0x24},
    {0x15,0x25},
    {0x07,0x26},
    {0x08,0x27},
    {0x09,0x28},
    {0x06,0x29},
    {0x18,0x2A},
    {0x19,0x2B},
    {0x00,0x2C},
    {0x01,0x2D},
    {0x1B,0x30},
    {0x02,0x2E},
    {0x03,0x2F},
    {0x1C,0x32},
    //BK Moves
    {0x1D,0x0},
    {0x1E,0x1},
    {0x1F,0x2},
    {0x20,0x4},
    {0x21,0x5},
    {0x22,0x6},
    {0x23,0x7},
    {0x24,0x8},
    {0x25,0x9},
    {0x26,0xA},
    {0x27,0xB},
    {0x28,0xC},
    {0x29,0xD},
    {0x2A,0xE},
    {0x2B,0xF},
    {0x2C,0x10},
    {0x2D,0x11},
    {0x2E,0x12}
};

void func_80800210_chmoveitem(Actor*);
void func_80800260_chmoveitem(Actor*);
void func_80800380_chmoveitem(Actor*, void*);
s32 moveItem_Handler(Actor*, s32, s32);
ActorData NewItem_chmoveitem =
{
    /*0x0*/ 0x37A,
    /*0x2*/ 0x4BA,
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
    /*0x26*/ 0x0,
    /*0x28*/ 0,
    /*0x2C*/ func_80108ED0,
    /*0x30*/ 0,
    /*0x32*/ 0x14,
    /*0x34*/ func_80800210_chmoveitem,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8040,
    /*0x3E*/ 0x5404,
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

Unk80132ED0* chjigsawdance_entrypoint_1(s32 arg0, f32* arg1, s32 spawnStyle, u16* arg3)
{
    s32 itemType;
    s32 itemFlag;
    Actor* sp2C;
    s32 sp28;

    itemFlag = (arg0 >> 0x10) & 0xFFFF;
    itemType = arg0 & 0xFFFF;
    switch (itemType)
    {
    case 1:
        sp2C = func_800D0CE0(PROP_21F_JIGGY_REAL, arg1, spawnStyle, &sp28);
        if (sp28 == 0)
        {
            func_8010108C(sp2C, 0x14, 1);
        }
        func_800D05E4(itemFlag, itemType, sp2C->unk0);
        break;
    case 0:
        sp2C = func_800D0CE0(PROP_1F4_JINJO_REAL, arg1, spawnStyle, &sp28);
        if (sp28 == 0)
        {
            func_8010108C(sp2C, 0x14, 1);
        }
        break;
    case 4:
        sp2C = func_800D0CE0(PROP_136_CHEATOPAGE_REAL, arg1, spawnStyle, &sp28);
        if (sp28 == 0)
        {
            func_8010108C(sp2C, 0x14, 1);
        }
        break;
    case 2:
        sp2C = func_800D0CE0(PROP_220_HONEYCOMB_REAL, arg1, spawnStyle, &sp28);
        break;
    case 3:
        sp2C = func_800D0CE0(PROP_21B_GLOWBO_REAL, arg1, spawnStyle, &sp28);
        break;
    case 7:
        sp2C = func_800D0CE0(PROP_4E5_DOUBLOON_REAL, arg1, spawnStyle, &sp28);
        break;
    case 8:
        sp2C = func_800D0CE0(PROP_3C6_TICKET_REAL, arg1, spawnStyle, &sp28);
        break;
    case 9:
        sp2C = func_800D0CE0(0x187, arg1, spawnStyle, &sp28);
        break;
    default:
        break;
    }
    func_800CFBC8(sp2C, itemFlag, itemType, 0);
    if ((arg3 != NULL) && (arg3[12] & 1))
    {
        func_80101074(sp2C->unk0);
        func_8010114C(arg3, 0xD, arg0);
    }
    return sp2C->unk0;
}

extern u8 D_8011AB3F[];
extern u8 D_8011ABC7[];
extern u8 D_8011AC7B[];
extern u8 D_8011ACAF[];
extern u8 D_8011ACD3[];
extern u8 D_8011AE3B[];
extern u8 D_8011AE5B[];
extern u32 D_8011AF28[];
//800D0908 Replacement
s32 chjigsawdance_entrypoint_2(s32 arg0, s32 arg1)
{
    switch (arg1)
    {
    case 0:
        if (D_8011AB3F[arg0 * 3] != 0)
        {
            return (D_8011AF28[arg1] + D_8011AB3F[arg0 * 3]) - 1;
        }
    default:
        break;
    case 1:
        if (D_8011ABC7[arg0 * 2] != 0)
        {
            return (D_8011AF28[arg1] + D_8011ABC7[arg0 * 2]) - 1;
        }
        break;
    case 4:
        if (D_8011ACD3[arg0 * 2] != 0)
        {
            return (D_8011AF28[arg1] + D_8011ACD3[arg0 * 2]) - 1;
        }
        break;
    case 2:
        if (D_8011AC7B[arg0 * 2] != 0)
        {
            return (D_8011AF28[arg1] + D_8011AC7B[arg0 * 2]) - 1;
        }
        break;
    case 3:
        if (D_8011ACAF[arg0 * 2] != 0)
        {
            return (D_8011AF28[arg1] + D_8011ACAF[arg0 * 2]) - 1;
        }
        break;
    case 7:
        if (D_8011AE3B[arg0] != 0)
        {
            return (D_8011AF28[arg1] + D_8011AE3B[arg0]) - 1;
        }
        break;
    case 8:
        if (D_8011AE5B[arg0] != 0)
        {
            return D_8011AF28[arg1] + D_8011AE5B[arg0] - 1;
        }
        break;
    case 9:
        if (moveSpawnable[arg0] != 0)
        {
            //Share the spawn flag start with Jinjo
            return D_8011AF28[0] + moveSpawnable[arg0] - 1;
        }
        break;
    }
    return 0;
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

    { 
        u8 dialogIndex = 0;
        s32 index = 0;
        for (index = 0; index < 46; index++)
        {
            if (D_MOVENAMES[index].AbilityId == arg0->unk74_7)
            {
                _chintrotext_entrypoint_1(0x18BB, D_MOVENAMES[index].DialogIndex, 0, 1);
                _fxsparkle_entrypoint_1(arg0->position, 0);
                break;
            }
        }
    
    }
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
    //Start
    case 0x95:
        if (func_800C6E38(arg0->unk74_7) || (func_800D0A9C(arg0->unk74_7,0x9) == 0))
        {
            func_800FFA88(arg0->unk0);
        }
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