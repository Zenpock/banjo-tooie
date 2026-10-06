#include "core2/1ED8C80.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FF390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FF3EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FF44C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FF4A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FF564.s")

void func_800FF62C(void)
{
	Actor* actor;
	ActorData* temp_v0;
	s32 actorIterator;
	f32 sp40[3];
	s32 pad;
	Unk80132ED0* temp_s1;
	s32 var_s3;

	if (func_800BEC1C() != 0)
	{
		var_s3 = 1;
	}
	else
	{
		var_s3 = 0;
		if (1) {}
	}
	func_8010D1E8();
	if (func_800DB9B0() != 0)
	{
		func_800E3980(sp40);
	}
	else
	{
		func_8010D254(sp40);
	}

	actor = func_801067C4(&actorIterator);
	//Loop through all actors
	while (actor != NULL)
	{
		temp_s1 = actor->unk0;
		if (!(actor->unk64_17))
		{
			if (actor->unk74_4)
			{
				if (func_8010038C(actor, sp40) != 0)
				{
					func_80100368(actor)->unk10_func(actor);
				}
			}
			else
			{
				func_80100120(actor);
				if (func_8010038C(actor, sp40) != 0)
				{
					temp_v0 = func_80100368(actor);
					//If there is an update function for the actor call it
					if (temp_v0->update_func != NULL)
					{
						temp_v0->update_func(actor);
					}
				}
			}
			if ((actor->unk8C != 0) && (actor->unk74_27))
			{
				//Animate Actors
				func_8008ADE4(func_80104248(actor));
			}
			if (actor->unk90 != 0)
			{
				func_801061D8(actor);
			}
			if (actor->unk79_0)
			{
				_subaddiefade_entrypoint_7(actor);
			}
			if (actor->unk94_20 != 0)
			{
				func_80106F70(actor);
			}
			if (actor->unk8E != 0)
			{
				func_80104780(actor);
			}
			if (actor->unk7A_3)
			{
				_chbounce_entrypoint_8(actor);
				func_80103014(actor);
				if (var_s3 != 0)
				{
					_subaddiezone_entrypoint_0(actor);
				}
			}
			else if (!(actor->unk74_5))
			{
				func_80103014(actor);
				if (var_s3 != 0)
				{
					_subaddiezone_entrypoint_0(actor);
				}
			}
			else
			{
				temp_s1->unk28_23 = func_800136E4(actor->rotation[1]);
				temp_s1->unk24_6 = func_800136E4(actor->rotation[0]);
				temp_s1->unk28_14 = func_800136E4(actor->rotation[2]);
			}
			func_80103040(actor);
		}
		actor = func_8010682C(&actorIterator);

	}
	func_8010DF3C();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFA3C.s")

void func_800FFA88(Unk80132ED0* a0)
{
    func_800FFAB0(func_80106790(a0));
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFAB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFB74.s")

void func_800FFBE4(void) {
}

void func_800FFBEC()
{
    func_800FFC3C();
    func_8010DEFC();
}

void func_800FFC14()
{
    func_800FFC3C();
    func_8010DEFC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFC3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFC90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFDBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFE08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_800FFECC.s")

u32* func_80100074(Actor* a0, u32 a1, u32 a2)
{
    return func_800FFECC(a0,a1,a2);
}

void* func_80100094(Actor* arg0, u32 arg1)
{
    s16 temp_a2;
    void* var_v0;

    var_v0 = NULL;
    if (arg0->unk82[arg1] != 0)
    {
        return func_8001B798(arg0->unk82[arg1]);
    }
    return var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_801000D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_80100120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_801001D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_80100230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_801002C0.s")

ActorData* func_80100368(Actor* arg0)
{
    return (*arg0->pointerToSyscallEntry)();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED8C80/func_8010038C.s")
