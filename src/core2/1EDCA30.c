#include "core2/1EDCA30.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_801032B0.s")

void func_80103328(Actor* actor)
{
	s32 sp44[3];
	s32 sp38[3];
	f32 sp2C[3];
	VertexStore* sp28;
	f32 sp24;
	ModelBin* asset_pointer;

	if (actor->unk68 != 0)
	{
		return;
	}

	asset_pointer = func_80103964(actor->unk0);

	if (asset_pointer == NULL)
	{
		return;
	}
	func_800D62E4(actor->unk0->unk14);
	sp28 = func_800B2840(asset_pointer);
	actor->unk68 = sp28->unk12;
	actor->unk6A = sp28->unk14;
	actor->unk62 = func_800B2248(sp28);
	func_800B2198(sp28, &sp44, &sp38);
	actor->unk88 = sp44[1];
	actor->unk8A = sp38[1];
	func_800B237C(sp28, sp2C, &sp24);
	ml_vec3f_to_vec3s(actor->unk0->unk1E, sp2C);
	actor->unk0->unk18_21 = sp24;
}

s32 func_8010347C(ActorMarker* arg0)
{
	Actor* sp1C;

	sp1C = actorList_getFromMarker(arg0);
	func_80103328(sp1C);
	func_800DF7F8(arg0->unk14, sp1C->unk68, sp1C->unk6A);
	return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_8010381C.s")

void func_80103930(Actor* arg0)
{
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103938.s")

void* func_80103964(ActorMarker* arg0)
{
    if ((arg0->unk14 == 0) || (arg0->unk14 == 0xFFFF)) {
        return NULL;
    }
    return asset_load(arg0->unk14);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_801039A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_801039E4.s")

void func_80103AA0()
{
    func_801039A4();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103C94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103CDC.s")

void func_80103D00(s32 arg0,s32 arg1)
{
    func_80103B24(arg0,0x1,arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103D24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80103FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_80104004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDCA30/func_801040A8.s")
