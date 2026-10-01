#ifndef __CORE2_1ED8C80_H__
#define __CORE2_1ED8C80_H__

#include "common.h"
#include "ch/bounce.h"	
#include "su/baddiefade.h"	
#include "su/baddiezone.h"	


#include "core1/1E32FE0.h"
#include "core2/1EB45C0.h"
#include "core2/1EB57A0.h"
#include "core2/1EDB4D0.h"
#include "core2/1EDC7B0.h"
#include "core2/1EDDA60.h"
#include "core2/1EDDC40.h"
#include "core2/1EDED00.h"
#include "core2/1EDFED0.h"
#include "core2/1EE06E0.h"
#include "core2/1EE5DF0.h"
#include "core2/1EE73D0.h"

void func_800FF62C(void);
void func_800FFA88(Unk80132ED0*);
void func_800FFAB0(Actor*);
void func_800FFC14();
u32* func_80100074(Actor*, u32, u32);
void* func_80100094(Actor*, u32);
s32 func_801000D8(Actor*, s32, s32);
void func_80100120(Actor*);

//Get ActorData for given actor
ActorData* func_80100368(Actor*);
s32 func_8010038C(Actor*, f32*);

#endif
