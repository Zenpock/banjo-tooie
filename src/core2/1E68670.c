#include "core2/1E68670.h"

s32 func_8008ED80(void)
{
	return 0x1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008ED88.s")

s32 func_8008EE04(s32 arg0, s32 arg1) {
	if (arg0 != 0)
	{
		return arg1;
	}
	return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008EE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008EE88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008EEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008EF3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008F4F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008F568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008F62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008F6B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008F748.s")

void inventory_incrementByProp(s32 arg0, PropId arg1) {
	inventory_incrementValue(inventory_getInventIdFromPropId(arg1));
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E68670/func_8008F7B4.s")

void inventory_getValueByProp(s32 arg0, PropId arg1) {
	inventory_getValue(inventory_getInventIdFromPropId(arg1));
}

void inventory_showValueByProp(s32 arg0, PropId arg1)
{
	inventory_showValue(inventory_getInventIdFromPropId(arg1));
}

void func_8008F880(ActorMarker* arg0, f32* arg1)
{
	ml_vec3f_copy(arg1, actorList_getFromMarker(arg0)->position);
}
