#include "core2/1EBAA10.h"

extern u8 D_8012D004;

//ml_translate_y_local
void func_800E1120(f32 dst[3], f32 src[3], f32 dy) {
    f32 vec[3];

    func_800EFA4C(vec, 0.0f, dy, 0.0f);
    func_800EF8BC(vec, vec, src[0]);
    func_800EF934(vec, vec, src[1]);
    ml_vec3f_add(dst, vec);
}

//ml_translate_z_local
void func_800E119C(f32 dst[3], f32 src[3], f32 dz) {
    f32 vec[3];

    func_800EFA4C(vec, 0.0f, 0.0f, dz);
    func_800EF8BC(vec, vec, src[0]);
    func_800EF934(vec, vec, src[1]);
    ml_vec3f_add(dst, vec);
}

//ml_translate_x_local
void func_800E1218(f32 dst[3], f32 src[3], f32 dx) {
    f32 vec[3];

    func_800EFA4C(vec, dx, 0.0f, 0.0f);
    func_800EF8BC(vec, vec, src[0]);
    func_800EF934(vec, vec, src[1]);
    ml_vec3f_add(dst, vec);
}

void func_800E1294(s32 arg0, f32 position[3], f32 rotation[3], f32 delta)
{
    switch (arg0) {
    case 1:
        func_800E1218(position, rotation, delta);
        return;
    case 0:
        func_800E1120(position, rotation, delta);
        return;
    case 2:
        func_800E119C(position, rotation, delta);
        return;
    case 3:
        position[1] += delta;
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1338.s")

s32 func_800E1354(s32 arg0) {
    return *(&D_8012D004 + (arg0 * 0x7C)) != 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E13F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E144C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E146C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E148C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E14B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E14F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E15CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EBAA10/func_800E1A58.s")
