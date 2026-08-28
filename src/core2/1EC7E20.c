#include "common.h"
#include "core2/1EC7E20.h"

void func_800EE530(unkStruct800EE530* arg0) {
    arg0->unk2C = defrag(arg0->unk2C);
}

void func_800EE55C(unkStruct800EE55C* arg0) {
    s32 sp1C;
    s32 temp_a0;
    s32 temp_v0;

    sp1C = (arg0->unk2C - arg0->unk24) >> 2;
    arg0->unk24 = defrag(arg0->unk24);
    arg0->unk2C = (arg0->unk24 + (sp1C << 2));
}

void func_800EE5AC(unkStruct800EE5AC* arg0) {
    arg0->unk24 = defrag(arg0->unk24);
}

s32 func_800EE5D8(s32 arg0) {
    s32 var_a3;
    s32 sp24;
    u32 sp1C;
    u32 temp_v0_2;
    s32 *var_v1;

    var_a3 = defrag(arg0);

    if ((D_80127EF8 != 0) && (var_a3 != arg0)) {
        sp24 = arg0;

        sp1C = vector_end(D_80127EF8);
        temp_v0_2 = vector_begin(D_80127EF8);

        if (temp_v0_2 < sp1C) {
            var_v1 = (s32 *)temp_v0_2;

            do {
                if (*var_v1 == sp24) {
                    *var_v1 = var_a3;
                }

                var_v1 = (s32 *)((u8 *)var_v1 + 0xA8);
            } while ((u32)var_v1 < sp1C);
        }
    }

    return var_a3;
}

void func_800EE670(void) {
    void (*temp_v0_2)(void *);
    u32 temp_s2;
    unkStruct800EE670 *var_s0;

    if (D_80127EF8 != 0) {
        temp_s2 = vector_end(D_80127EF8);
        var_s0 = (unkStruct800EE670*)vector_begin(D_80127EF8);

        if ((u32)var_s0 < temp_s2) {
            do {
                temp_v0_2 = D_80123590[var_s0->unk6];

                if (temp_v0_2 != NULL) {
                    temp_v0_2((u8 *)var_s0 + 8);
                }

                var_s0 = (unkStruct800EE670*)((u8 *)var_s0 + 0xA8);
            } while ((u32)var_s0 < temp_s2);
        }

        D_80127EF8 = vector_defrag(D_80127EF8);
    }
}

void func_800EE718(void) {
    if (D_80135483 != 0) {
        _idbounce_entrypoint_6();
    }
}

void func_800EE748(void) {
    if (D_80135483 != 0) {
        _idbounce_entrypoint_7();
    }
}
