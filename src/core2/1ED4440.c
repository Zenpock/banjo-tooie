#include "core2/1ED4440.h"

extern f32 D_801357C0;

s32 func_800FAB50(f32 arg0[3], f32 arg1[3], f32 arg2[3], s32 arg3, f32 arg4)
{
    f32 sp34[3];
    f32 sp28[3];
    s32 sp24;

    ml_vec3f_copy(sp28, arg1);
    ml_getdiff_vec3f(sp34, sp28, arg0);
    ml_vec3f_set_length(sp34, arg4);
    ml_vec3f_add(sp28, sp34);
    sp24 = func_800C6A7C(arg0, sp28, arg2, arg3);
    if (sp24 == 0) {
        return 0;
    }
    ml_vec3f_subtract(sp28, sp34);
    ml_vec3f_copy(arg1, sp28);
    return sp24;
}

s32 func_800FABF4(f32 arg0[3], f32 arg1[3], f32 arg2[3], s32 arg3, f32 arg4, f32 arg5)
{
    f32 sp34[3];
    f32 sp28[3];
    s32 sp24;
    ml_vec3f_copy(sp34, arg0);
    ml_vec3f_copy(sp28, arg1);
    sp34[1] += arg5;
    sp28[1] += arg5;
    sp24 = func_800FAB50(sp34, sp28, arg2, arg3, arg4);
    if (sp24 == 0)
    {
        return 0;
    }
    sp28[1] -= arg5;
    ml_vec3f_copy(arg1, sp28);
    return sp24;
}

void func_800FACA0(f32 arg0[3], f32 arg1, s32 arg2)
{
    f32 sp34[3];
    f32 sp28[3];
    f32 sp1C[3];
    s32* temp_v0;

    ml_vec3f_copy(sp28, arg0);
    ml_vec3f_copy(sp1C, arg0);
    sp28[1] += 100.0f;
    sp1C[1] -= 500.0f;
    temp_v0 = func_800C6A7C(sp28, sp1C, sp34, arg2);
    if ((temp_v0 != 0) && (!(sp34[1] < 0.0f) || (temp_v0[2] & 0x10000)) && (arg0[1] < sp1C[1])) {
        arg0[1] = sp1C[1];
    }
}

void func_800FAD68(f32 arg0[3], f32 arg1, f32 arg2, s32 arg3, s32 arg4)
{
    f32 sp34[3];
    f32 sp28[3];
    s32 pad;
    ml_vec3f_assign_value(sp28, arg0[0], arg0[1] + arg2, arg0[2]);
    if (func_800C6C94(sp28, arg1, sp34, arg4) != 0)
    {
        arg0[0] += 1.3f * sp34[0];
        arg0[1] += 1.3f * sp34[1];
        arg0[2] += 1.3f * sp34[2];
        if (arg3 != 0)
        {
            func_800FACA0(arg0, (arg2 + arg1), arg4);
        }
    }
}

void func_800FAE44(f32 arg0[3], f32 arg1[3], f32 arg2, f32 arg3, s32 arg4, s32 arg5)
{
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];
    s32 pad[1];
    f32 temp = arg3 + arg2;
    ml_vec3f_assign_value(sp2C, arg0[0], arg0[1] + arg3, arg0[2]);
    ml_vec3f_copy(arg1, arg0);
    if (func_800C6C94(sp2C, arg2, sp38, arg5) != 0)
    {
        arg1[0] = arg0[0] + (sp38[0] * 2);
        arg1[1] = arg0[1] + (sp38[1] * 2);
        arg1[2] = arg0[2] + (sp38[2] * 2);
        sp44[0] = arg0[0] + (sp38[0] * 2);
        sp44[1] = arg0[1] + (sp38[1] * 2);
        sp44[2] = arg0[2] + (sp38[2] * 2);
        ml_vec3f_copy(arg0, sp44);
        if (arg4 != 0) {
            func_800FACA0(arg0, temp, arg5);
        }
    }
}

void func_800FAF78(f32 arg0[3], f32 arg1[3], f32 arg2[3], f32 arg3[3], f32 arg4[3]) {
    f32 sp3C[3];
    f32 sp30[3];
    f32 sp24[3];
    f32 phi_f12;

    ml_getdiff_vec3f(sp3C, arg1, arg0);
    ml_getdiff_vec3f(sp30, arg3, arg2);
    ml_getdiff_vec3f(sp24, sp3C, sp30);
    phi_f12 = -ml_vec3f_dot_product(arg4, sp24);
    phi_f12 = MAX(5.0f, phi_f12);
    arg1[0] += phi_f12 * arg4[0];
    arg1[1] += phi_f12 * arg4[1];
    arg1[2] += phi_f12 * arg4[2];
}

void func_800FB040(f32 arg0[3], f32 arg1[3], f32 arg2[3], f32 arg3[3], f32 arg4[3], s32 arg5)
{
    f32 sp6C[3];
    f32 sp60[3];
    f32 sp54[3];
    f32 sp48[3];
    f32 sp3C[3];
    f32 sp30[3];
    f32 var_f0;
    f32 sp28;
    f32 var_f12;

    ml_getdiff_vec3f(sp6C, arg1, arg0);
    ml_getdiff_vec3f(sp60, arg3, arg2);
    ml_getdiff_vec3f(sp54, sp6C, sp60);
    ml_vec3f_getNormalized(sp3C, sp54);
    func_800EF934(sp30, sp3C, 90.0f);
    sp28 = ml_vec3f_dot_product(arg4, sp3C);
    if (arg5 != 0)
    {
        D_801357C0 = ml_vec3f_dot_product(arg4, sp30);
    }
    if (D_801357C0 < 0.0f)
    {
        var_f0 = -1.0f;
    }
    else
    {
        var_f0 = 1.0f;
    }
    func_800EF934(sp48, arg4, var_f0 * sp28 * 45.0f);
    var_f12 = -ml_vec3f_dot_product(sp48, sp54);
    if (var_f12 < 5.0f) {
        var_f12 = 5.0f;
    }
    arg1[0] += var_f12 * sp48[0];
    arg1[1] += var_f12 * sp48[1];
    arg1[2] += var_f12 * sp48[2];
}

s32 func_800FB1B0(f32 arg0[3], f32 arg1[3], s32 arg2)
{
    f32 sp24[3];
    f32 sp18[3];

    ml_vec3f_copy(sp18, arg1);
    return func_800C6A7C(arg0, sp18, sp24, arg2);
}

f32 func_800FB1EC(f32 arg0[3], f32 arg1, f32 arg2[3], s32 arg3)
{
    f32 sp24[3];
    f32 phi_f0;

    func_800C7A68(arg0, arg1, sp24);
    if (!func_800FB1B0(arg2, sp24, arg3)) {
        return arg1;
    }
    func_800C7A68(arg0, 1.0f, sp24);
    if (!func_800FB1B0(arg2, sp24, arg3)) {
        return 1.0f;
    }

    func_800C7A68(arg0, 0.0f, sp24);
    if (!func_800FB1B0(arg2, sp24, arg3)) {
        return 0.0f;
    }
    return arg1;
}

s32 func_800FB2AC(f32 arg0[3], f32 arg1)
{
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];
    f32 sp20[3];
    s32 sp1C;

    ml_vec3f_assign_value(sp20, 0.0f, arg1, 0.0f);
    ml_vec3f_sum(sp2C, arg0, sp20);
    ml_getdiff_vec3f(sp38, arg0, sp20);
    sp1C = func_800BEF00(sp2C, sp38, sp44, 0x1F00);
    if (sp1C != 0)
    {
        ml_vec3f_copy(arg0, sp38);
    }
    return sp1C;
}

s32 func_800FB338(f32 arg0[3], s32 arg1, s32* arg2, f32* arg3) {
    arg3[0] = arg0[1];
    return 0;
}

s32 func_800FB350(f32 arg0[3], s32* arg1, f32 arg2[3])
{
    s32 temp_v0;
    f32 sp18[3];

    arg1[0] = 0;
    arg2[0] = arg0[1];
    ml_vec3f_copy(sp18, arg0);
    temp_v0 = func_800FB2AC(sp18, 20.0f);
    if (temp_v0 == 0)
    {
        return 0;
    }
    return func_800FB338(sp18, temp_v0, arg1, arg2);
}

s32 func_800FB3C0(f32 arg0[3], f32 arg1[3], f32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    if (SQ(arg2) < ml_vec3f_distance_sq(arg0, arg1))
    {
        return 0;
    }
    return func_800C6B78(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_800FB434(f32* arg0, f32* arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    s32 sp3C;
    f32 sp30[3];
    f32 sp24[3];

    ml_vec3f_assign_value(sp30, arg0[0], arg0[1] + arg2, arg0[2]);
    ml_vec3f_assign_value(sp24, arg1[0], arg1[1] + arg2, arg1[2]);
    sp3C = func_800C6B78(sp30, sp24, arg3, arg4, arg5, arg6);
    if (sp3C != 0)
    {
        ml_vec3f_assign_value(arg1, sp24[0], sp24[1] - arg2, sp24[2]);
    }
    return sp3C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ED4440/func_800FB508.s")
