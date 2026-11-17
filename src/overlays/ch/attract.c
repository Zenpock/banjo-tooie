#include "ch/attract.h"


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

extern D_80800468_chattractUNK D_80800468_chattract[];
extern ActorData D_808004F4_chattract;
extern s32 B_80800540_chattract;
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