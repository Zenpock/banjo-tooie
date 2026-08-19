#include "common.h"
#include "core2/1E8A640.h"

s16 func_800B0D50(s16* arg0) {
    return *arg0;
}

s16 func_800B0D58(unkStruct800B0D58* a0) {
    return a0->unk2;
}

u8* func_800B0D60(unkStruct800B0D60* a0) {
    return (u8*)a0 + a0->unk8;
}

s32 func_800B0D6C(s32 arg0, s32 arg1) {
    return 0xC + arg0 + (arg1 * 8);
}
