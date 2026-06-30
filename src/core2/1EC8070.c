#include "core2/1EC8070.h"

// TODO rename operations based on whether they output to a new vector or output to an input vector.
// add vs sum/subtract vs difference? What to do for scalar multiplication? apply_scale vs scale?

extern f32 D_80125EA0;

// ml_vec3f_sum
void func_800EE780(f32 dst[3], f32 a[3], f32 b[3]) {
    dst[0] = a[0] + b[0];
    dst[1] = a[1] + b[1];
    dst[2] = a[2] + b[2];
}

// ml_vec3f_scaled_sum
void func_800EE7B4(f32 dst[3], f32 a[3], f32 b[3], f32 scale) {
    dst[0] = a[0] + b[0] * scale;
    dst[1] = a[1] + b[1] * scale;
    dst[2] = a[2] + b[2] * scale;
}

// ml_vec3f_copy
void func_800EE7F8(f32 dst[3], f32 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3s_copy
void func_800EE814(s16 dst[3], s16 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3i_copy
void func_800EE830(s32 dst[3], s32 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3i_to_vec3f
void func_800EE84C(f32 dst[3], s32 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3s_to_vec3f
void func_800EE88C(f32 dst[3], s16 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3s_to_vec3i
void func_800EE8CC(s32 dst[3], s16 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec2f_to_vec3f
void func_800EE8E8(f32 dst[3], f32 src[2]) {
    dst[0] = src[0];
    dst[1] = 0;
    dst[2] = src[1];
}

// ml_vec3f_to_vec3i
void func_800EE904(s32 dst[3], f32 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3f_to_vec3s
void func_800EE940(s16 dst[3], f32 src[3]) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

// ml_vec3f_cross_product
void func_800EE97C(f32 dst[3], f32 a[3], f32 b[3]) {
    dst[0] = a[1] * b[2] - a[2] * b[1];
    dst[1] = a[2] * b[0] - a[0] * b[2];
    dst[2] = a[0] * b[1] - a[1] * b[0];
}

// ml_vec3i_cross_product
void func_800EE9EC(f32 dst[3], s32 a[3], s32 b[3]) {
    dst[0] = a[1] * b[2] - a[2] * b[1];
    dst[1] = a[2] * b[0] - a[0] * b[2];
    dst[2] = a[0] * b[1] - a[1] * b[0];
}

// ml_vec3f_dot_product
f32 func_800EEAA4(f32 a[3], f32 b[3]) {
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

// ml_vec3f_distance
f32 func_800EEAD4(f32 a[3], f32 b[3]) {
    f32 delta[3];
    delta[0] = a[0] - b[0];
    delta[1] = a[1] - b[1];
    delta[2] = a[2] - b[2];
    return sqrtf(SQ(delta[0]) + SQ(delta[1]) + SQ(delta[2]));
}

// ml_vec3f_distance_sq
f32 func_800EEB40(f32 a[3], f32 b[3]) {
    f32 delta[3];
    delta[0] = a[0] - b[0];
    delta[1] = a[1] - b[1];
    delta[2] = a[2] - b[2];
    return SQ(delta[0]) + SQ(delta[1]) + SQ(delta[2]);
}

void func_800EEB9C(f32* arg0, f32 arg1, f32 arg2)
{
    f32 temp_f6;

    temp_f6 = func_800137F4(arg1) * arg2;
    arg0[0] = temp_f6;
    arg0[1] = 0.0f;
    arg0[2] = func_80013788() * arg2;
}

void func_800EEBF0(f32* arg0, f32* arg1, f32 arg2)
{
    func_800EFD24(arg0);
    func_800EF214(arg0, arg1[0], arg1[1], arg2);
}

void func_800EEC30(f32* arg0, f32 arg1, f32 arg2, f32 arg3)
{
    func_800EFD24(arg0);
    func_800EF214(arg0, arg1, arg2, arg3);
}

void func_800EEC70(f32* arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 sp1C;

    sp1C = func_800138D0(arg1) * arg3;
    arg0[1] = 0.0f;
    arg0[0] = (f32)(func_800137F4(arg2) * sp1C);
    arg0[2] = (f32)(func_80013788() * sp1C);
}
// ml_vec3f_is_equal
int func_800EECE0(f32* arg0, f32* arg1)
{
    return (arg0[0] == arg1[0] && arg0[1] == arg1[1] && arg0[2] == arg1[2]);
}
// ml_vec3i_is_equal
int func_800EED58(s32* arg0, s32* arg1)
{
    return (arg0[0] == arg1[0] && arg0[1] == arg1[1] && arg0[2] == arg1[2]);
}

// ml_vec3s_is_equal
int func_800EEDA0(s16* arg0, s16* arg1)
{
    return (arg0[0] == arg1[0] && arg0[1] == arg1[1] && arg0[2] == arg1[2]);

}

// ml_vec3f_is_within_range
int func_800EEDE8(f32* arg0, f32* arg1, f32 arg2)
{
    return (mlAbsF(arg0[0] - arg1[0]) < arg2 && mlAbsF(arg0[1] - arg1[1]) < arg2 && mlAbsF(arg0[2] - arg1[2]) < arg2);
}

// ml_vec3f_is_zero
int func_800EEEA8(f32* arg0)
{
    return !(arg0[0] != 0.0f || arg0[1] != 0.0f || arg0[2] != 0.0f);
}

// ml_vec3f_is_not_zero
int func_800EEF24(f32* arg0)
{
    return (arg0[0] != 0.0f || arg0[1] != 0.0f || arg0[2] != 0.0f);
}

f32 func_800EEF94(f32* arg0)
{
    return sqrtf(arg0[0] * arg0[0] + arg0[1] * arg0[1] + arg0[2] * arg0[2]);
}

f32 func_800EEFD4(f32* arg0)
{
    return (arg0[0] * arg0[0] + arg0[1] * arg0[1] + arg0[2] * arg0[2]);
}

f32 func_800EEFFC(f32* arg0)
{
    return sqrtf(arg0[0] * arg0[0] + arg0[2] * arg0[2]);
}

f32 func_800EF030(f32* arg0)
{
    return (arg0[0] * arg0[0]) + (arg0[2] * arg0[2]);
}

void func_800EF04C(f32* arg0, f32* arg1)
{
    arg0[0] += arg1[0];
    arg0[1] += arg1[1];
    arg0[2] += arg1[2];
}

void func_800EF080(s16* arg0, s16* arg1)
{
    arg0[0] += arg1[0];
    arg0[1] += arg1[1];
    arg0[2] += arg1[2];
}

void func_800EF0B4(s16* arg0, f32* arg1)
{
    arg0[0] += arg1[0];
    arg0[1] += arg1[1];
    arg0[2] += arg1[2];
}

void func_800EF11C(f32* arg0, s16* arg1)
{
    arg0[0] += arg1[0];
    arg0[1] += arg1[1];
    arg0[2] += arg1[2];
}

void func_800EF174(f32* arg0, f32* arg1, f32 arg2)
{
    arg0[0] += arg1[0] * arg2;
    arg0[1] += arg1[1] * arg2;
    arg0[2] += arg1[2] * arg2;
}

void func_800EF1B8(f32* arg0, f32 arg1, f32 arg2)
{
    arg0[0] += arg2 * func_800137F4(arg1);
    arg0[2] += arg2 * func_80013788();
}

void func_800EF214(f32* arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 temp_f6;
    temp_f6 = func_800137AC(arg1) * arg3;
    arg0[1] += arg3 * func_800137C4();
    arg0[0] += temp_f6 * func_800137F4(arg2);
    arg0[2] += temp_f6 * func_80013788();
}

void func_800EF2A0(f32* arg0)
{
    f32 temp_f14;
    f32 temp_f2_2;
    temp_f14 = arg0[0] * arg0[0] + arg0[1] * arg0[1] + arg0[2] * arg0[2];
    if (temp_f14 != 0.0f)
    {
        temp_f2_2 = 1.0f / sqrtf(temp_f14);
        arg0[0] *= temp_f2_2;
        arg0[1] *= temp_f2_2;
        arg0[2] *= temp_f2_2;
    }
}

// ml_vec3f_apply_scale
void func_800EF334(f32 vec[3], f32 scale) {
    vec[0] *= scale;
    vec[1] *= scale;
    vec[2] *= scale;
}

// ml_vec3f_set_length
void func_800EF368(f32 vec[3], f32 target_length) {
    f32 length_sq;

    length_sq = SQ(vec[0]) + SQ(vec[1]) + SQ(vec[2]);
    if (length_sq != 0.0f) {
        func_800EF334(vec, target_length / sqrtf(length_sq));
    }
}

// ml_vec3f_subtract
void func_800EF3DC(f32 dst[3], f32 src[3]) {
    dst[0] -= src[0];
    dst[1] -= src[1];
    dst[2] -= src[2];
}

void func_800EF410(f32* arg0, f32* arg1)
{
    f32 temp_f14;

    temp_f14 = arg1[0] * arg1[0] + arg1[1] * arg1[1] + arg1[2] * arg1[2];
    if (temp_f14 != 0.0f)
    {
        func_800EFA20(arg0, arg1, 1.0f / sqrtf(temp_f14));
        return;
    }
    func_800EE7F8(arg0, arg1);
}

void func_800EF49C(f32* arg0)
{
    arg0[0] = func_800136E4(arg0[0]);
    arg0[1] = func_800136E4(arg0[1]);
    arg0[2] = func_800136E4(arg0[2]);
}


void func_800EF4E4(f32* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    f32 cosf;
    f32 sinf;
    f32 sp24;

    sinf = func_800137F4(arg1);
    cosf = func_80013788();
    sp24 = arg4 * sinf + arg5 * cosf;
    arg0[1] = (arg4 * cosf) - (arg5 * sinf);
    sinf = func_800137F4(arg2);
    cosf = func_80013788();
    arg0[0] = (sp24 * sinf) + (arg3 * cosf);
    arg0[2] = (sp24 * cosf) - (arg3 * sinf);
}

void func_800EF5A0(f32* arg0, f32* arg1, f32 arg2, f32 arg3, f32 arg4)
{
    f32 cosf;
    f32 pad;
    f32 temp_f14;
    f32 sinf;
    f32 temp_f2;

    sinf = func_800137F4(arg1[0]);
    cosf = func_80013788();
    temp_f14 = (arg3 * sinf) + (arg4 * cosf);
    arg0[1] = (arg3 * cosf) - (arg4 * sinf);
    sinf = func_800137F4(arg1[1]);
    cosf = func_80013788();
    arg0[0] = (temp_f14 * sinf) + (arg2 * cosf);
    arg0[2] = (temp_f14 * cosf) - (arg2 * sinf);
    sinf = func_800137F4(arg1[2]);
    cosf = func_80013788();
    temp_f2 = arg0[0];
    temp_f14 = (arg0[0] * cosf) - (arg0[1] * sinf);
    arg0[1] = (arg0[0] * sinf) + (arg0[1] * cosf);
    arg0[0] = temp_f14;
}

void func_800EF6A8(f32* arg0, f32* arg1, f32 arg2, f32 arg3, f32 arg4)
{
    f32 cosf;
    f32 sinf;
    f32 sp2C;
    f32 temp_f2;
    f32 temp_f2_2;

    sinf = func_800137F4(arg1[2]);
    cosf = func_80013788();
    arg0[1] = (f32)((arg2 * sinf) + (arg3 * cosf));
    arg0[0] = (f32)((arg2 * cosf) - (arg3 * sinf));
    sinf = func_800137F4(arg1[0]);
    cosf = func_80013788();
    temp_f2 = arg0[1];
    sp2C = (temp_f2 * sinf) + (arg4 * cosf);
    arg0[1] = (f32)((temp_f2 * cosf) - (arg4 * sinf));
    sinf = func_800137F4(arg1[1]);
    cosf = func_80013788();
    temp_f2_2 = arg0[0];
    arg0[2] = (f32)((sp2C * cosf) - (temp_f2_2 * sinf));
    arg0[0] = (f32)((temp_f2_2 * cosf) + (sp2C * sinf));
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC8070/func_800EF7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC8070/func_800EF8BC.s")

void func_800EF934(f32* arg0, f32* arg1, f32 arg2)
{
    f32 sp1C;
    f32 temp_f0;
    f32 val;
    sp1C = func_800137AC(arg2);
    temp_f0 = func_800137C4();
    val = (arg1[2] * temp_f0) + (arg1[0] * sp1C);
    arg0[1] = arg1[1];
    arg0[2] = (arg1[2] * sp1C) - (arg1[0] * temp_f0);
    arg0[0] = val;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC8070/func_800EF9A8.s")

void func_800EFA20(f32* arg0, f32* arg1, f32 arg2)
{
    arg0[0] = arg1[0] * arg2;
    arg0[1] = arg1[1] * arg2;
    arg0[2] = arg1[2] * arg2;
}

void func_800EFA4C(f32* arg0, f32 arg1, f32 arg2, f32 arg3)
{
    arg0[0] = arg1;
    arg0[1] = arg2;
    arg0[2] = arg3;
}

void func_800EFA6C(s16* arg0, s16 arg1, s16 arg2, s16 arg3)
{
    arg0[0] = arg1;
    arg0[1] = arg2;
    arg0[2] = arg3;
}

void func_800EFA88(s32* arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0[0] = arg1;
    arg0[1] = arg2;
    arg0[2] = arg3;
}

void func_800EFA98(f32* arg0, f32* arg1, f32 arg2)
{
    f32 temp_f14;

    temp_f14 = arg1[0] * arg1[0] + arg1[1] * arg1[1] + arg1[2] * arg1[2];
    if (temp_f14 != 0.0f)
    {
        func_800EFA20(arg0, arg1, arg2 / sqrtf(temp_f14));
        return;
    }
    func_800EE7F8(arg0, arg1);
}

void func_800EFB24(f32* arg0, f32* arg1, f32* arg2)
{
    arg0[0] = arg1[0] - arg2[0];
    arg0[1] = arg1[1] - arg2[1];
    arg0[2] = arg1[2] - arg2[2];
}

void func_800EFB58(s32* arg0, s32* arg1, s32* arg2)
{
    arg0[0] = (arg1[0] - arg2[0]);
    arg0[1] = (arg1[1] - arg2[1]);
    arg0[2] = (arg1[2] - arg2[2]);
}

f32 func_800EFB8C(f32* arg0, f32* arg1)
{
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = arg0[0] - arg1[0];
    temp_f2 = arg0[2] - arg1[2];
    if ((temp_f0 != 0.0f) || (temp_f2 != 0.0f))
    {
        return sqrtf((temp_f0 * temp_f0) + (temp_f2 * temp_f2));
    }
    return 0.0f;
}

f32 func_800EFBFC(f32* arg0, f32* arg1) {
    f32 sp1C;
    f32 temp_f0;
    f32 var_f12;

    sp1C = mlAbsF(arg1[0] - arg0[0]);
    temp_f0 = mlAbsF(arg1[2] - arg0[2]);
    if (sp1C < temp_f0)
    {
        var_f12 = sp1C;
    }
    else
    {
        var_f12 = temp_f0;
    }
    return (sp1C + temp_f0) - (var_f12 * D_80125EA0);
}

f32 func_800EFC7C(f32* arg0, f32* arg1)
{
    f32 temp_f12;
    f32 temp_f2;

    temp_f2 = arg0[0] - arg1[0];
    temp_f12 = arg0[2] - arg1[2];
    if ((temp_f2 != 0.0f) || (temp_f12 != 0.0f))
    {
        return (temp_f2 * temp_f2) + (temp_f12 * temp_f12);
    }
    return 0;
}

void func_800EFCD8(f32* arg0, f32 arg1, f32 arg2)
{
    arg0[0] = func_800137F4(arg1) * arg2;
    arg0[2] = func_80013788() * arg2;
}

// ml_vec3f_clear
void func_800EFD24(f32 vec[3]) {
    vec[0] = vec[1] = vec[2] = 0;
}

// ml_vec3i_clear
void func_800EFD3C(s32 vec[3]) {
    vec[0] = vec[1] = vec[2] = 0;
}

// ml_vec3s_clear
void func_800EFD4C(s16 vec[3]) {
    vec[0] = vec[1] = vec[2] = 0;
}

void func_800EFD60(f32* arg0, f32* arg1, f32 arg2)
{
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    sp1C = mlAbsF(func_800137AC(arg2));
    temp_f0 = mlAbsF(func_800137C4());
    temp_f2 = arg1[0];
    temp_f12 = arg1[2];
    arg0[0] = (f32)((temp_f2 * sp1C) + (temp_f12 * temp_f0));
    arg0[1] = (f32)arg1[1];
    arg0[2] = (f32)((temp_f12 * sp1C) + (temp_f2 * temp_f0));
}

void func_800EFDE8(f32* arg0, f32* arg1, f32* arg2)
{
    f32 sp1C[3];

    func_800EFA20(sp1C, arg1, -1.0f);
    func_800EFA20(arg0, arg2, 2.0f * func_800EEAA4(sp1C, arg2));
    func_800EF3DC(arg0, sp1C);
}