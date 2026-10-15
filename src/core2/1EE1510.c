#include "core2/1EE1510.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80107C20.s")

Actor* func_80107C2C(s32* arg0, s32 arg1, ActorData* arg2, s32 arg3, Prop* arg4)
{
    Actor* temp_v0;
    s32 sp38;
    s32 i;

    temp_v0 = actorList_pushback(&sp38);
    temp_v0->pointerToSyscallEntry = arg3;
    temp_v0->unk70_10 = arg2->unk6;
    temp_v0->position[0] = arg0[0];
    temp_v0->position[1] = arg0[1];
    temp_v0->position[2] = arg0[2];
    temp_v0->rotation[1] = arg1;
    temp_v0->unk64_16 = 1;
    temp_v0->unk54 = arg1;
    temp_v0->scale = 1.0f;
    temp_v0->unk6C_9 = arg2->unk2;
    temp_v0->unk74_0 = 0;
    ((f32*)temp_v0->actorData)[7] = 0/*.0f*/;
    temp_v0->unk7A_14 = 1;
    temp_v0->unk64_18 = 1;
    temp_v0->unk7C = arg2->unk18;
    if (arg2->unk1C != 0.0f) {
        temp_v0->unk74_20 = 1;
    }
    else {
        temp_v0->unk74_20 = 0;
    }
    temp_v0->unk94_16 = temp_v0->unk74_20;
    func_80100074(temp_v0, 0U, (u16)arg2->unk30);
    func_80100074(temp_v0, 1U, (u16)arg2->unk32);
    if ((u16)arg2->Model == 0xFFFF)
    {
        temp_v0->unk0 = func_800EBED4(arg0, 1, arg2->unk0, arg2->unk24w & 0x400 ? 1 : 0);
    }
    else 
    {
        temp_v0->unk0 = func_800EBED4(arg0, func_800D738C(arg2->Model) == 7 ? 0 : 1, arg2->unk0, arg2->unk24w & 0x400 ? 1 : 0);
    }
    temp_v0->unk0->unk18_16 = 1;
    if (arg2->unk2C_func != NULL)
    {
        temp_v0->unk0->unk8 = (CallbackTable * (*)()) arg2->unk2C_func;
    }
    else 
    {
        temp_v0->unk0->unk8 = func_80107C20;
    }
    func_800EC340(temp_v0->unk0, sp38);
    func_800EC360(temp_v0->unk0, (u16)arg2->Model);
    func_800EC368(temp_v0->unk0, (u16)arg2->unk22);
    temp_v0->unk74_16 = 1;
    temp_v0->unk74_19 = temp_v0->unk74_16;
    if (func_80102FA0(arg2, 1) != 0) {
        _subaddieDll_entrypoint_1(temp_v0);
    }
    if (func_80102FA0(arg2, 0x800000) != 0) {
        temp_v0->unk70_21 = 1;
    }
    if (func_80102FA0(arg2, 8) != 0) {
        temp_v0->unk70_24 = 1;
    }
    if (func_80102FA0(arg2, 0x100) != 0) {
        temp_v0->unk74_0 = 1;
    }
    if (func_80102FA0(arg2, 0x200000) != 0) {
        temp_v0->unk64_25 = 1;
    }
    if (func_80102FA0(arg2, 0x04000000) != 0) {
        temp_v0->unk70_22 = 1;
    }
    if (func_80102FA0(arg2, 4) == 0) {
        temp_v0->unk74_17 = 1;
    }
    if (func_80102FA0(arg2, 0x100000) == 0) {
        temp_v0->unk70_20 = 1;
    }
    if (func_80102FA0(arg2, 0x08000000) != 0) {
        temp_v0->unk70_18 = 1;
    }
    if (func_80102FA0(arg2, 0x80000002) != 0) {
        temp_v0->unk0->unk28_9 = 0;
    }
    if (func_80102FA0(arg2, 0x80000004) != 0) {
        temp_v0->unk64_31 = 1;
    }
    if (func_80102FA0(arg2, 0x80000008) != 0) {
        temp_v0->unk64_30 = 1;
    }
    if (func_80102FA0(arg2, 0x80000400) != 0) {
        temp_v0->unk70_17 = 1;
    }
    if (func_80102FA0(arg2, 0x80001000) != 0) {
        temp_v0->unk70_16 = 1;
    }
    if (func_80102FA0(arg2, 0x80002000) != 0) {
        temp_v0->unk74_5 = 1;
    }
    if (func_80102FA0(arg2, 0x80004000) != 0) {
        temp_v0->unk7C_13 = 1;
    }
    if (func_80102FA0(arg2, 0x80000100) != 0) {
        temp_v0->unk74_26 = 1;
    }
    if (func_80102FA0(arg2, 0x80100000) != 0) {
        temp_v0->unk74_23 = 1;
    }
    if (func_80102FA0(arg2, 0x80000001) != 0) {
        temp_v0->unk64_24 = 1;
    }
    if (func_80102FA0(arg2, 0x80000010) != 0) {
        temp_v0->unk7A_1 = 1;
    }
    if (func_80102FA0(arg2, 0x80400000) != 0) {
        temp_v0->unk94_31 = 1;
    }
    if (func_80102FA0(arg2, 0x80800000) != 0) {
        temp_v0->unk94_30 = 1;
    }
    if (func_80102FA0(arg2, 0x80000040) != 0) {
        temp_v0->unk70_2 = 1;
    }
    if (func_80102FA0(arg2, 0x80040000) != 0) {
        temp_v0->unk79_3 = 1;
    }
    if (func_80102FA0(arg2, 0x80200000) != 0) {
        temp_v0->unk94_17 = 1;
    }
    if (func_80102FA0(arg2, 0x84000000) != 0) {
        temp_v0->unk94_14 = 1;
    }
    if (func_80102FA0(arg2, 0x80000080) != 0) {
        temp_v0->unk70_19 = 1;
    }
    if (func_80102FA0(arg2, 0x82000000) != 0) {
        temp_v0->unk94_16 = 0;
    }
    func_8010A800(temp_v0, 0);
    if (func_80102FA0(arg2, 0x800) != 0) {
        func_8010A800(temp_v0, 1);
        func_8010A63C(temp_v0);
    }
    if (func_80102FA0(arg2, 0x20000) != 0) {
        func_8010A800(temp_v0, 2);
    }
    else if (func_80102FA0(arg2, 0x400000) != 0) {
        func_8010A800(temp_v0, 3);
    }
    else if (func_80102FA0(arg2, 0x80008000) != 0) {
        func_8010A800(temp_v0, 4);
    }
    if (func_80102FA0(arg2, 0x80000800) != 0) {
        temp_v0->unk7C_14 = 0;
    }
    else {
        temp_v0->unk7C_14 = 1;
    }
    if (func_80102FA0(arg2, 0x80000200) != 0) {
        temp_v0->unk64_16 = 0;
    }
    else {
        temp_v0->unk64_16 = 1;
    }
    if (arg4 != NULL) {
        temp_v0->unk6C_21 = arg4->unk10_5;
        temp_v0->unk70_0 = (s32)arg4->unk12_1;
    }
    func_80108658(temp_v0, arg2->unk24w, arg2->unk3Cw, arg4);
    temp_v0->unk14 = 0x4A0021;
    for (i = 0; i < 3; i++) {
        temp_v0->unk5C[i] = 0x63;
    }
    func_800F31FC(&temp_v0->unk98, 0xFF, 0xFF, 0xFF, 0xFF);
    if (arg2->eventHandler != NULL) {
        temp_v0->unk74_28 = 1;
    }
    else {
        temp_v0->unk74_28 = 0;
    }
    temp_v0->unk74_27 = 1;
    func_80102424(temp_v0, temp_v0->unk70_10);
    func_80103930(temp_v0);
    func_8010A3E8(temp_v0, 1.0f);
    func_80106E88(temp_v0);
    func_80104F2C(temp_v0, func_80102FA0(arg2, 0x40000000), func_80102FA0(arg2, 0x10));
    if (func_800BEC1C() != 0) {
        _subaddiezone_entrypoint_0(temp_v0);
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_801084B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_8010856C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_801085CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108658.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_801088A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108C14.s")

Actor* func_80108C90(s32 arg0, s32* arg1, u32 arg2, Prop* arg3)
{
	ActorData* (*temp_v0_2)(void);
	ActorData* actorData;
	temp_v0_2 = (ActorData * (*)(void))_gemarkersDll_entrypoint_0(arg0);
	if (temp_v0_2 == NULL)
	{
		return NULL;
	}
	actorData = temp_v0_2();
	return actorData->unk38_func(arg1, arg2, actorData, temp_v0_2, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EE1510/func_80108DC0.s")
