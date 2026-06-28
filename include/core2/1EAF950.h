#ifndef __CORE2_1EAF950_H__
#define __CORE2_1EAF950_H__

#include <common.h>
typedef struct {
	u8 pad[0x8];
	s16 unk8;
	s16 unkA;
} ImageStruct;
ImageStruct *func_800D674C(s32 a0);
s32 func_800D6CEC(s16);
void func_800D70D0(s32);
s32 func_800D70F8(s16, s32);
s32 func_800D721C(s16, s32);
void func_800D71F4(s32);
u8 func_800D731C(u16);
void *func_800D7520(s32);

#endif
