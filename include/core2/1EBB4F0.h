#ifndef __CORE2_1EBB4F0_H__
#define __CORE2_1EBB4F0_H__

#include "common.h"
#include "core1/mlmtx.h"
#include "core2/1E80A70.h"
#include "core2/1E88E90.h"
#include "core2/1EAF950.h"
#include "core2/1EBCFC0.h"
#include "core2/1EC8070.h"
#include "core2/1ECBCC0.h"
#include "AssetStructs.h"

void func_800E22F0(GraphicsBuffers*, s32);
void func_800E2434(s32);
void func_800E24CC(s32);
void func_800E24F8(s32, s32, s32);
void func_800E253C(f32);
void func_800E2554(f32, f32);
void func_800E2568(s32, s32);
void func_800E257C(s32);
//Control the drawing mode :0 = In Front, 1 is CLipping, 2 is also clipping, 3 is clipping and with alpha pixels omitted
void func_800E2588(u32);
//Ready an image to be drawn
void func_800E2594(GraphicsBuffers*, ImageStruct*);
//Draw the image in 3d space billboarded to the player
void func_800E2720(GraphicsBuffers*, u32, u32, f32 pos[3], f32 size[3], f32[3]);
void func_800E2A14(GraphicsBuffers*);
f32 func_800E2DF0();
void func_800E2E48(GraphicsBuffers*, ImageStruct*, s32, s32*);
void draw_2D_Image(GraphicsBuffers*, ImageStruct*, s32, s32*);

#endif
