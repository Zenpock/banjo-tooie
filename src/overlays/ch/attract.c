#include "ch/attract.h"

s32 D_80800440_chattract[] = {
0,0,0,0,0x3FCCCCCD,0x0284004A,0x00000000,0x00000000,0x3F8CCCCD,0x0286004A

};


typedef struct {
    u16 unk0;
    u8 unk2;
    u8 unk3;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    f32 unk14;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
}D_80800468_chattractUNK;

D_80800468_chattractUNK D_80800468_chattract[] = {
    {0x0000,0x00,0x00,0.0f,0.0f,0.0f,0x0000,0x0000,0.0f,0x00,0x00,0x00,0x00},
    {0x08A8,0x01,0x01,2.5f,0.0f,0.1400000006f,0x0098,0x005E,0.0f,0x01,0x00,0x00,0x00},
    {0x085A,0x00,0x01,5.0f,2.0f,0.200000003f,0x0098,0x00AB,0.0f,0x00,0x00,0x00,0x00},
    {0x0859,0x01,0x00,0.0f,0.0f,0.1000000015f,0x0112,0x00C6,280.0f,0x00,0x00,0x00,0x00},
    {0x085B,0x00,0x01,5.0f,2.0f,0.200000003f,0x0098,0x00AB,0.0f,0x00,0x00,0x00,0x00}
};

void func_8080000C_chattract(s32);
void func_80800014_chattract(Actor*);
void func_80800204_chattract(Actor*, GraphicsBuffers*);
s32 func_808002AC_chattract(Actor*, s32, s32);

ActorData D_808004F4_chattract = {

    /*0x0*/ 0x158,
    /*0x2*/ 0x4B5,
    /*0x4*/ 0x0,
    /*0x6*/ 0x2,
    /*0x8*/ D_80800440_chattract,
    /*0xC*/ func_80800014_chattract,
    /*0x10*/ func_80102EC0,
    /*0x14*/ func_80800204_chattract,
    /*0x18*/ 0,
    /*0x1A*/ 0,
    /*0x1C*/ 0.0f,
    /*0x20*/ 0,
    /*0x22*/ 0,
    /*0x24*/ 0x0840,
    /*0x26*/ 0x0404,
    /*0x28*/ 0,
    /*0x2C*/ 0,
    /*0x30*/ 0,
    /*0x32*/ 0,
    /*0x34*/ func_8080000C_chattract,
    /*0x38*/ func_80107C2C,
    /*0x3C*/ 0x8000,
    /*0x3E*/ 0x0002,
    /*0x40*/ func_808002AC_chattract,
    /*0x44*/ 0,
    /*0x46*/ 0,

};

s32 B_80800540_chattract[4];
void chattract_entrypoint_2(s32);
ActorData* chattract_entrypoint_0()
{
    return &D_808004F4_chattract;
}
void func_8080000C_chattract(s32 arg0) 
{
}

void func_80800014_chattract(Actor* arg0)
{
    D_80800468_chattractUNK* temp_v0;

    if (arg0->unk54 != 0.0f)
    {
        arg0->rotation[1] += arg0->unk54 * time_getDelta();
    }
    if ((arg0->unk79_4) != 0)
    {
        if (!(arg0->unk79_0) && (timer_reachedZero(&arg0->unk58) != 0))
        {
            if (D_80800468_chattract[arg0->unk74_7].unk2 != 0)
            {
                _subaddiefade_entrypoint_2(arg0);
            }
            else
            {
                _subaddiefade_entrypoint_1(arg0, 0xFF);
            }
            arg0->unk58 = D_80800468_chattract[arg0->unk74_7].unk4;
            arg0->unk79_4 = 0;
            func_80102424(arg0, (s32)(arg0->unk70_10));
        }
    }
    else if (!(arg0->unk79_0) && (timer_reachedZero(&arg0->unk58) != 0))
    {
        temp_v0 = &D_80800468_chattract[arg0->unk74_7];
        if (temp_v0->unk8 != 0.0f)
        {
            if (temp_v0->unk3 != 0)
            {
                _subaddiefade_entrypoint_5(arg0);
            }
            else
            {
                _subaddiefade_entrypoint_1(arg0, 0);
            }
            arg0->unk58 = D_80800468_chattract[arg0->unk74_7].unk8;
            arg0->unk79_4 = 1;
            return;
        }
        if (temp_v0->unk3 != 0) {
            _subaddiefade_entrypoint_3(arg0);
            return;
        }
        actor_mark_delete(arg0);
    }
}

void func_80800204_chattract(Actor* arg0, GraphicsBuffers* arg1) {
    f32 sp3C[3];

    if (arg0->rotation[1] != 0.0f)
    {
        ml_vec3f_assign_value(sp3C, 0, arg0->rotation[1], 0);
        func_800DF4CC(sp3C);
    }
    func_800DF410(arg0->alpha);
    func_800DF47C(func_801015D0, arg0);
    func_800DF944(arg1, arg0->position, 0.0f, arg0->scale, 0U, 1U, func_8010347C(arg0->unk0));
}

s32 func_808002AC_chattract(Actor* arg0, s32 arg1, s32 arg2) {
    D_80800468_chattractUNK* sp24;

    switch (arg1)
    {
        case EVENT_95_ACTOR_SPAWNED:
        {
            sp24 = &D_80800468_chattract[arg0->unk74_7];
            func_80103140(arg0, sp24->unk0, 0U);
            func_80102424(arg0, arg0->unk74_7);
            arg0->unk58 = sp24->unk4;
            arg0->scale = sp24->unkC;
            arg0->unk7A_14 = sp24->unk18;
            if (sp24->unk2 != 0)
            {
                _subaddiefade_entrypoint_2(arg0);
            }
            arg0->position[0] = sp24->unk10;
            arg0->position[1] = sp24->unk12;
            arg0->unk54 = sp24->unk14;
            arg0->unk79_4 = 0;
            return 1;
        }
    }
    return 0;
}

void chattract_entrypoint_1(s32 arg0) {
    _chbaddiesetup_entrypoint_1(&_chattract_entrypoint_2, arg0);
}

void chattract_entrypoint_2(s32 arg0)
{
    Actor* temp_v0;

    temp_v0 = func_80108454(0x4B5, &B_80800540_chattract, 0);
    if (temp_v0 != 0)
    {
        temp_v0->unk74_7 = arg0 + 1;
        temp_v0->unk0->unk12_1 = 1;
        func_800EC828();
    }
}