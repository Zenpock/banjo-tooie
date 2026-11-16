#include "ch/intro/char.h"

typedef struct {
    u8 unk0[0xD0];
    f32 unkD0[2];
    u8 unkD4[0xC];
    f32 unkE4[3];
    f32 unkF0;
    f32 unkF4[3];
    f32 unk100;
}IntroCharStruct2;

void func_80803990_chintrochar(Actor*, GraphicsBuffers*);
extern s32 func_80804160_chintrochar[][8];
extern f32 func_80804168_chintrochar[][8];
extern f32 D_80805318_chintrochar[];
extern s32 D_80805374_chintrochar[];

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80800000_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_808000FC_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_808002FC_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80800398_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80800484_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80800540_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80800648_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_8080071C_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80803388_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80803418_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_808034C4_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_8080374C_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80803888_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80803990_chintrochar.s")

void func_80803A78_chintrochar(Actor* arg0, GraphicsBuffers* arg1)
{
    s32 sp74;
    sp74 = func_80804160_chintrochar[arg0->unk74_7][0];
    if (sp74 & 2)
    {
        if (sp74 & 0x8000)
        {
            f32 sp68[3];
            f32 sp60[2] = D_80805318_chintrochar;
            switch ((arg0->unk74_7) - 0x32)
            {
            case 3:
            case 4:
                sp60[1] -= 20.0f;
            }
            if (!(sp74 & 4))
            {
                if (arg0->rotation[1] != 0)
                {
                    ml_vec3f_assign_value(sp68, 0.0f, arg0->rotation[1], 0.0f);
                    func_800DF4CC(sp68);
                }
            }
            func_800DF47C(func_801017D0, arg0);
            func_800DF944(arg1, sp60, 0.0f, arg0->scale * 0.35f, 0U, 1U, func_8010347C(arg0->unk0));
        }
        else
        {
            f32 sp54[3];
            f32 sp48[3];
            f32 sp3C[3];
            func_800E39A8(sp54, sp48);
            func_800EF5A0(sp3C, sp48, 0, 0, -1000.0f);
            ml_vec3f_add(sp3C, sp54);
            func_800DF47C(func_801017D0, arg0);
            if (sp74 & 4)
            {
                func_800DE448(sp3C, sp48, arg0->scale, NULL, func_801039E4(arg0->unk0));
            }
            else
            {
                func_800DE448(sp3C, arg0->rotation, arg0->scale, NULL, func_801039E4(arg0->unk0));
            }
        }
    }
    else
    {
        if (arg0->unk94_30)
        {
            func_800DF440(0);
        }
        else
        {
            func_80101970(arg0);
        }
        if (sp74 & 0x200)
        {
            func_800DF464(func_80804168_chintrochar[arg0->unk74_7][0]);
        }
        func_800DF47C(func_801017D0, arg0);
        func_800DE448(arg0->position, arg0->rotation, arg0->scale, NULL, func_801039E4(arg0->unk0));
    }
    if (sp74 & 0x1000)
    {
        func_80803990_chintrochar(arg0, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80803D0C_chintrochar.s")

extern ActorData D_8080532C_chintrochar;
ActorData* chintrochar_entrypoint_0()
{
    return &D_8080532C_chintrochar;
}
void func_80803E98_chintrochar(Actor* arg0)
{
    IntroCharStruct2* temp_v0;
    s32 var_v1;

    temp_v0 = actor_getAdditionalMem(arg0, 2U);
    for (var_v1 = 0; var_v1 < 2; var_v1++)
    {
        temp_v0->unkD0[var_v1] = 0.0f;
    }
    ml_vec3f_copy(temp_v0->unkF4, arg0->position);
    ml_vec3f_copy(temp_v0->unkE4, arg0->position);
    temp_v0->unk100 = (f32)arg0->rotation[1];
    temp_v0->unkF0 = (f32)arg0->rotation[1];
}

void func_80803F24_chintrochar(Actor* arg0, Actor* arg1, s32 arg2)
{
    if (arg0->unk7C_12)
    {
        func_800DBEFC(arg0->unk0->unk4, D_80805374_chintrochar[arg2], arg1->position);
    }
    func_80103014(arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80803F7C_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80804054_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/func_80804238_chintrochar.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/intro/char/chintrochar_entrypoint_1.s")
