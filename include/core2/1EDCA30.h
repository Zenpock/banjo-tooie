#ifndef __CORE2_1EDCA30_H__
#define __CORE2_1EDCA30_H__

#include "common.h"
#include "core2/1E875C0.h"
#include "core2/1E8A670.h"
#include "core2/1E8BFE0.h"
#include "core2/1EAED30.h"
#include "core2/1EAF950.h"
#include "core2/1EB57A0.h"
#include "core2/1EC8070.h"
#include "core2/1ED8C80.h"
#include "core2/1ED9D70.h"
#include "core2/1EDA900.h"
#include "core2/1EDB4D0.h"
#include "core2/1EDC7B0.h"
#include "core2/1EDCA30.h"
#include "core2/1EDDA60.h"
#include "core2/1EDDC40.h"
#include "core2/1EDFED0.h"
#include "su/baddiefade.h"

typedef struct {
    s32 pad[5];
    u32 unk31 : 31;
    u32 unk0 : 1;
} unkStruct80103CB8;

void func_80103140(Actor*, u32, u16);
void func_801032B0(Actor*, s32, s32);
void func_80103328(Actor*);
s32 func_8010347C(ActorMarker*);
void func_80103930(Actor*);
void* func_80103964(ActorMarker*);
s32 func_801039E4(ActorMarker*);
unkStruct80103CB8* func_80103CB8(Actor*, s32);
void func_80103DFC(Actor*, f32*);
f32 func_80103EAC(Actor*);
f32 func_80103EF4(Actor*);
f32 func_80103FB8(Actor*);
s32 func_801040A8(Actor*);
#endif
