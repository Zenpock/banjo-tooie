#include "core2/1EA0690.h"
#include "core2/1EB3750.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EA0690/func_800C6DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EA0690/func_800C6E18.s")

//Has Ability
s32 ability_getValue(s32 AbilityID) {
    return flag_getValue(AbilityID + FLAG_0ED_ABILITY_BK_BEAK_BARGE);
}

//Immediate Return
void func_800C6E58(void) {
}

void func_800C6E60(void) {
    ability_setValueTrue(0, 1);
    ability_setValueTrue(1, 1);
    ability_setValueTrue(2, 1);
    ability_setValueTrue(3, 1);
    ability_setValueTrue(4, 1);
    ability_setValueTrue(5, 1);
    ability_setValueTrue(6, 1);
    ability_setValueTrue(7, 1);
    ability_setValueTrue(8, 1);
    ability_setValueTrue(9, 1);
    ability_setValueTrue(0xA, 1);
    ability_setValueTrue(0xB, 1);
    ability_setValueTrue(0xC, 1);
    ability_setValueTrue(0xD, 1);
    ability_setValueTrue(0xE, 1);
    ability_setValueTrue(0xF, 1);
    ability_setValueTrue(0x10, 1);
    ability_setValueTrue(0x11, 1);
    ability_setValueTrue(0x12, 1);
    ability_setValueTrue(0x13, 1);
    ability_setValueTrue(0x31, 1);
    ability_offsetSetValueTrue(0x3C, 1);
    ability_offsetSetValueTrue(0x3D, 1);
    ability_offsetSetValueTrue(0x3E, 1);
    ability_offsetSetValueTrue(0x3F, 1);
    ability_offsetSetValueTrue(0x40, 1);
    ability_offsetSetValueTrue(0x41, 1);
    ability_offsetSetValueTrue(0x42, 1);
    ability_offsetSetValueTrue(0x43, 1);
    ability_offsetSetValueTrue(0x44, 1);
    ability_offsetSetValueTrue(0x45, 1);
    ability_offsetSetValueTrue(0x46, 1);
    ability_offsetSetValueTrue(0x47, 1);
    ability_offsetSetValueTrue(0x48, 1);
}

//Give all Abilities
void func_800C7010(void) {
    //Overwrite with 
    s32 var_s0 = 0;
    while (var_s0 < 0x3C)
    {
        ability_setValueTrue(var_s0, 1);
        var_s0++;
    }
    var_s0 = 0x3C;
    while (var_s0 < 0x50)
    {
        ability_offsetSetValueTrue(var_s0, 1);
        var_s0 += 1;
    }
}

void func_800C7074(s32 arg0, s32 arg1) {
    ability_setValueTrue(arg0, arg1);
    if (arg1 != 0) {
        func_80101238(0x1A, arg0);
    }
}

//Set Ability Flag
void ability_setValueTrue(s32 arg0, s32 set) {
    flag_setValue(arg0 + FLAG_0ED_ABILITY_BK_BEAK_BARGE, set);
}

//Set Ability Flag offset by 1
void ability_offsetSetValueTrue(s32 arg0, s32 set) {
    flag_setValue(arg0 + FLAG_0EE_ABILITY_BK_BEAK_BOMB, set);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EA0690/func_800C70F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EA0690/func_800C710C.s")

void* func_800C7150(void* arg0) 
{
    return defrag(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EA0690/func_800C7170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EA0690/func_800C718C.s")
