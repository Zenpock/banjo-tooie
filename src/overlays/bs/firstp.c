#include "bs/firstp.h"

extern s32 D_8080A890_bsfirstp[];
extern s32 D_8080B5C0_bsfirstp[];

void func_80800858_bsfirstp(PlayerState*, s32);
s32 func_80800864_bsfirstp(PlayerState*);
void func_80800F14_bsfirstp(PlayerState*);
void func_80801000_bsfirstp(PlayerState*);

void func_808019EC_bsfirstp(PlayerState*);
void func_80801A5C_bsfirstp(PlayerState*);
void func_80802BE8_bsfirstp(PlayerState*, f32);
s32 func_80802C90_bsfirstp(PlayerState*);
s32 func_80802D14_bsfirstp(PlayerState*);
s32 func_80802D50_bsfirstp(PlayerState*, enum bs_state_e*);
s32 func_80802E7C_bsfirstp(BsKazFly*);
void func_80803760_bsfirstp(PlayerState*);
s32 func_80803CD4_bsfirstp(PlayerState*, s32, s32, s32, f32*);
void func_8080633C_bsfirstp(PlayerState*, f32);
void func_80807EEC_bsfirstp(PlayerState*);
void func_80807F24_bsfirstp(PlayerState*);
s32 func_80808630_bsfirstp(PlayerState*);
void func_80808678_bsfirstp(PlayerState*, s32);
enum bs_state_e func_80808B24_bsfirstp(PlayerState*);
void func_80808B8C_bsfirstp(PlayerState*, enum bs_state_e);
void func_80808C48_bsfirstp(PlayerState*);
void func_80808E78_bsfirstp(PlayerState*);
s32 func_80809540_bsfirstp(PlayerState*, s32);

struct bs_kazfly_s* func_80800000_bsfirstp(PlayerState* arg0)
{
    struct bs_kazfly_s* temp_a0;
    _bastatemem_entrypoint_0(arg0, 0x2A8);
    temp_a0 = arg0->kazfly;
    aligned8_memset(temp_a0, 0U, 0x2A8);
    return temp_a0;
}

void func_80800040_bsfirstp(PlayerState* self)
{
    _bastatemem_entrypoint_1(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_0.s")

void bsfirstp_entrypoint_1(PlayerState* arg0, s32 arg1)
{
    AnimCtrl* temp_s0;

    switch (arg1)
    {
    case 0:
        temp_s0 = baanim_getAnimCtrlPtr(arg0);
        func_80801000_bsfirstp(arg0);
        func_8008B304(temp_s0);
        func_800DF41C(func_8008B4D4(temp_s0));
        return;
    case 1:
        temp_s0 = func_8008D04C(arg0);
        if (func_80800864_bsfirstp(arg0) != 0)
        {
            func_80800F14_bsfirstp(arg0);
        }
        func_8008B304(temp_s0);
        func_800DF41C(func_8008B4D4(temp_s0));
        return;
    }
}

void func_80800190_bsfirstp(PlayerState* arg0)
{
    BsKazFly* temp = arg0->kazfly;
    func_80800858_bsfirstp(arg0, 0);
    func_800EFD24(temp->unk2C);
    temp->unk50 = 0.0f;
}


void func_808001D0_bsfirstp(PlayerState* arg0) 
{
    func_80808C48_bsfirstp(arg0);
    func_80800858_bsfirstp(arg0, 0);
}

void func_808001FC_bsfirstp(PlayerState* arg0) 
{
    anctrl_setPlaybackType(func_8008D04C(arg0), 3);
}

s32 func_80800228_bsfirstp(PlayerState* arg0)
{
    s32 var_v1;

    if (anctrl_getPlaybackType(func_8008D04C(arg0)) == 3)
    {
        var_v1 = 1;
    }
    else
    {
        var_v1 = 0;
    }
    return var_v1;
}

void func_80800264_bsfirstp(PlayerState* arg0, f32 arg1) 
{
    func_8008B10C(func_8008D04C(arg0), arg1);
}

void func_80800290_bsfirstp(PlayerState* arg0, enum asset_e arg1, f32 arg2)
{
    baanim_playForDuration_loopStartingAt(arg0, arg1, arg2, baanim_getTimer(arg0));
}

void func_808002CC_bsfirstp(PlayerState* arg0, enum asset_e arg1, f32 arg2, f32 arg3)
{
    AnimCtrl* temp_v0;

    temp_v0 = func_8008D04C(arg0);
    anctrl_reset(temp_v0);
    anctrl_setIndex(temp_v0, arg1);
    anctrl_setDuration(temp_v0, arg2);
    anctrl_setStart(temp_v0, arg3);
    anctrl_setPlaybackType(temp_v0, 2);
    anctrl_start(temp_v0);
}

void func_80800340_bsfirstp(PlayerState* arg0, enum asset_e arg1, f32 arg2, f32 arg3) 
{
    AnimCtrl* temp_v0;

    temp_v0 = func_8008D04C(arg0);
    anctrl_reset(temp_v0);
    anctrl_setIndex(temp_v0, arg1);
    anctrl_setDuration(temp_v0, arg2);
    anctrl_setStart(temp_v0, arg3);
    anctrl_setPlaybackType(temp_v0, 1);
    anctrl_start(temp_v0);
}

void func_808003B4_bsfirstp(PlayerState* arg0, enum asset_e arg1, f32 arg2) {
    AnimCtrl* temp_v0;

    temp_v0 = func_8008D04C(arg0);
    anctrl_reset(temp_v0);
    anctrl_setSmoothTransition(temp_v0, 0);
    anctrl_setIndex(temp_v0, arg1);
    anctrl_setDuration(temp_v0, arg2);
    anctrl_setPlaybackType(temp_v0, 1);
    anctrl_start(temp_v0);
}

void func_80800424_bsfirstp(PlayerState* arg0, enum asset_e arg1, f32 arg2) {
    AnimCtrl* temp_v0;

    temp_v0 = func_8008D04C(arg0);
    anctrl_reset(temp_v0);
    anctrl_setIndex(temp_v0, arg1);
    anctrl_setDuration(temp_v0, arg2);
    anctrl_setPlaybackType(temp_v0, 1);
    anctrl_start(temp_v0);
}

void func_80800488_bsfirstp(PlayerState* arg0, enum asset_e arg1, f32 arg2) {
    AnimCtrl* temp_v0;

    temp_v0 = func_8008D04C(arg0);
    anctrl_reset(temp_v0);
    anctrl_setSmoothTransition(temp_v0, 0);
    anctrl_setIndex(temp_v0, arg1);
    anctrl_setDuration(temp_v0, arg2);
    anctrl_setPlaybackType(temp_v0, 2);
    anctrl_start(temp_v0);
}

void func_808004F8_bsfirstp(PlayerState* arg0)
{
    BsKazFly* temp_v0;
    f32 sp18;

    temp_v0 = arg0->kazfly;
    sp18 = temp_v0->unk20C;
    func_800EEC70(temp_v0->unk2C, sp18, yaw_get(arg0), 150.0f);
}

void func_8080053C_bsfirstp(PlayerState* arg0) {
    BsKazFly* sp1C;

    sp1C = arg0->kazfly;
    func_808004F8_bsfirstp(arg0);
    func_800EFD24(sp1C->unk38);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080056C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808006DC_bsfirstp.s")

void func_80800830_bsfirstp(PlayerState* self)
{
    func_8080056C_bsfirstp(self);
    func_808006DC_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800858_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800864_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800888_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808008B0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800900_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800978_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800A18_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800B44_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800C88_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800D18_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80800F14_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801000_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808015C0_bsfirstp.s")

void func_80801640_bsfirstp(PlayerState* self)
{
    func_800C517C(func_800A4C68(self));
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801668_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808016A0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080175C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_2.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080187C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808018E0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801928_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808019B0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808019EC_bsfirstp.s")

void func_80801A34_bsfirstp(PlayerState* self)
{
    func_8080187C_bsfirstp(self);
    bsfirstp_entrypoint_2(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801A5C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801A98_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801AC4_bsfirstp.s")

void func_80801AEC_bsfirstp(PlayerState* self)
{
    func_80801B64_bsfirstp(self,0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801B0C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801B64_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801BDC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801C18_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801C74_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801D30_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801D70_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801DC0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801E18_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80801FD0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080222C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802304_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808023A0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802438_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802444_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802458_bsfirstp.s")

s32 func_80802484_bsfirstp(void) {
    return D_8080A890_bsfirstp[func_800A3280()];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808024B0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808024DC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802508_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802534_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802560_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802594_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808025C8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080261C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802670_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808026AC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802700_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802754_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808027A8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_3.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_5.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802A40_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802AA8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_6.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_7.s")

void func_80802BD8_bsfirstp(PlayerState* self)
{
}
void func_80802BE0_bsfirstp(PlayerState* self)
{
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802BE8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802C30_bsfirstp.s")

void func_80802C6C_bsfirstp(PlayerState* self)
{
    func_800FC660(0xF);
}

s32 func_80802C90_bsfirstp(PlayerState* self)
{
    if (self->unk158.word == 0)
    {
        //Randomizer Change added gcegg to check if we have the egg type we are trying to fire
        return func_80094BC0(self) && _gcegg_entrypoint_6(func_80094510(self));
    }
    return _badeathmatch_entrypoint_9(self, _badeathmatch_entrypoint_6(self));
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802CD8_bsfirstp.s")

s32 func_80802D14_bsfirstp(PlayerState* arg0)
{
    if (arg0->unk158.word == 0)
    {
        //Swap to the next egg type
        func_80094A10(arg0);
        return;
    }
    _badeathmatch_entrypoint_0(arg0);
}

s32 func_80802D50_bsfirstp(PlayerState* arg0, BanjoStateId* arg1)
{
    BsKazFly* temp_a2;
    s32 var_v1;

    temp_a2 = arg0->kazfly;
    if (func_80802C90_bsfirstp(arg0) != 0)
    {
        var_v1 = 1;
    }
    else
    {
        var_v1 = 0;
    }
    switch (temp_a2->unkE2)
    {
    case 0:
        return 0;
    case 1:
        if (var_v1 == 0)
        {
            temp_a2->unkE2 = 0;
            if (temp_a2->unkE6 == 0)
            {
                temp_a2->unkE6 = 1;
                func_80802C6C_bsfirstp(arg0);
            }
            return 0;
        }
        break;
    case 2:
        if (var_v1 == 0)
        {

            temp_a2->unkE2 = 0;
            //Number of Times we failed to fire
            switch (temp_a2->unkE6)
            {
            case 0:
                temp_a2->unkE6 = 1;
                func_80802C6C_bsfirstp(arg0);
                return 0;
            case 1:
                temp_a2->unkE8 = func_80802D14_bsfirstp(arg0);
                func_80802E7C_bsfirstp(temp_a2);
            default:
                return 0;
            }
            break;
        }
        break;
    }
    switch (func_80802E7C_bsfirstp(temp_a2))
    {
    case 0:
        *arg1 = BS_STATE_D8_FP_EGG_FIRE;
        break;
    case 1:
        *arg1 = BS_STATE_D6_FP_HEAVY_EGG_FIRE;
        break;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802E7C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802ED4_bsfirstp.s")

void func_80802F00_bsfirstp(PlayerState* self)
{
    func_80802ED4_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80802F20_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808030E0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803124_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803134_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808031D0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803204_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808032C0_bsfirstp.s")

void func_80803320_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803340_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_9.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808035EC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808036F0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803760_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803784_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808037E4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803828_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_11.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_12.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_13.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803A84_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803B04_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803B58_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803B68_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803CD4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803E84_bsfirstp.s")

void func_80803F6C_bsfirstp(PlayerState* self)
{
    func_808090D8_bsfirstp(self);
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80803F94_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_15.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804104_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808041D0_bsfirstp.s")

void func_80804210_bsfirstp(PlayerState* self)
{
    func_808090D8_bsfirstp(self);
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804238_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_16.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080432C_bsfirstp.s")

void func_8080436C_bsfirstp(PlayerState* self)
{
    func_808090D8_bsfirstp(self);
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804394_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_17.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804488_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808045FC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808047EC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080483C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804848_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_18.s")

void func_80804A34_bsfirstp(PlayerState* self)
{
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804A3C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804A64_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804B10_bsfirstp.s")

void func_80804B84_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804BA4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_19.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804D18_bsfirstp.s")

void func_80804D80_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804DA0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804E1C_bsfirstp.s")

void func_80804EB4_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804ED4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_21.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804F28_bsfirstp.s")

void func_80804FB4_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80804FD4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_22.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80805058_bsfirstp.s")

void func_808050B0_bsfirstp(PlayerState* self)
{
    _bsdrone_entrypoint_2(self);
    func_80807C8C_bsfirstp(self);
}
void func_808050D8_bsfirstp(PlayerState* self)
{
    _bsdrone_entrypoint_1(self);
    func_80807D48_bsfirstp(self);
    func_80809D24_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_23.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080511C_bsfirstp.s")

void func_8080519C_bsfirstp(PlayerState* self)
{
    _bsdrone_entrypoint_2(self);
    func_80807C8C_bsfirstp(self);
}
void func_808051C4_bsfirstp(PlayerState* self)
{
    _bsdrone_entrypoint_1(self);
    func_80807D48_bsfirstp(self);
    func_80809D24_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_25.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808052A4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808052C8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80805380_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080549C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80805644_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808057C8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808058F0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_26.s")

void func_80805F48_bsfirstp(PlayerState* self)
{
    func_808061AC_bsfirstp(self,0);
}

void func_80805F68_bsfirstp(PlayerState* self)
{
    func_8009B4FC(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_27.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806000_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806130_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080613C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806148_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806170_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808061AC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080633C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080649C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806588_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806774_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808067B0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808067E8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080682C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808068E8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806928_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808069BC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808069FC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806AD0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806BA0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806C58_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806CC0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806D64_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806D90_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_29.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806E0C_bsfirstp.s")

void func_80806E9C_bsfirstp(PlayerState* self)
{
    _bsbabykaz_entrypoint_3(self);
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80806EC4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807024_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_30.s")

void func_808071D8_bsfirstp(PlayerState* self)
{
    func_80091E6C(self);
    _bsbabykaz_entrypoint_3(self);
    func_80807C8C_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807208_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807264_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_31.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808072C8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807328_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807394_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808074D0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807504_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080762C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_32.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808077AC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808077E0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807864_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_33.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808078F4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807A70_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807AF8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807BB8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807C8C_bsfirstp.s")

void func_80807D48_bsfirstp(PlayerState* self)
{
    func_80802BE0_bsfirstp(self);
    func_8080800C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807D70_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807DD4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807EEC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807F24_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807F5C_bsfirstp.s")

void func_80807F9C_bsfirstp(PlayerState* self)
{
    func_80807FBC_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80807FBC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080800C_bsfirstp.s")

void func_80808084_bsfirstp(PlayerState* self)
{
    func_80092744(self,0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808080A4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808080B4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808100_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808148_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808084AC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080853C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808085A8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808630_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808678_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808086B0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808848_bsfirstp.s")

void func_808088A4_bsfirstp(PlayerState* self)
{
    func_808086B0_bsfirstp(self,0x3);
    func_80807C8C_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808088D0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808A24_bsfirstp.s")

void func_80808A8C_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}


void func_80808AAC_bsfirstp(PlayerState* arg0)
{
    enum bs_state_e temp_v0;

    func_80807D48_bsfirstp(arg0);
    func_80808E78_bsfirstp(arg0);
    func_8080633C_bsfirstp(arg0, 1.0f);
    temp_v0 = func_80808B24_bsfirstp(arg0);
    if (temp_v0 != BS_STATE_0_INVALID)
    {
        bs_setState(arg0, temp_v0);
        return;
    }
    func_80808B8C_bsfirstp(arg0, temp_v0);
}

s32 bsfirstp_entrypoint_35(s32 arg0)
{
    return D_8080B5C0_bsfirstp[arg0];
}

enum bs_state_e func_80808B24_bsfirstp(PlayerState* arg0)
{
    enum bs_state_e sp1C;

    if (func_80802D50_bsfirstp(arg0, &sp1C) != 0)
    {
        return sp1C;
    }
    if (func_80808630_bsfirstp(arg0) != 0)
    {
        return BS_STATE_D2_BEAK_BAYONET;
    }
    if (func_80809540_bsfirstp(arg0, 0) != 0)
    {
        return BS_STATE_D1_FP_WALK;
    }
    return BS_STATE_0_INVALID;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808B8C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808C48_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808CAC_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808D80_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808DB0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808E78_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808EF0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80808F38_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808090D8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080911C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809198_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809250_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809334_bsfirstp.s")

void func_80809384_bsfirstp(PlayerState* self)
{
    func_80807C8C_bsfirstp(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808093A4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_36.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808094A4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808094F4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809540_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809684_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809740_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809900_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809938_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080995C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808099A8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_808099B4_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809A10_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809A7C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809AF8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/bsfirstp_entrypoint_37.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809C30_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809C90_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809CB4_bsfirstp.s")

void func_80809CD8_bsfirstp(PlayerState* self)
{
    func_80809CF8_bsfirstp(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809CF8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809D24_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809D6C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809D94_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809DA0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809DD0_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809EF8_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_80809F74_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080A03C_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080A194_bsfirstp.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/firstp/func_8080A250_bsfirstp.s")
