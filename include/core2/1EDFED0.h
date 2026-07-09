#ifndef __CORE2_1EDFED0_H__
#define __CORE2_1EDFED0_H__

#include "common.h"
#include "freelist.h"
#include "vector.h"

//Create new Actor Array
void func_801065E0(void);
//Free Actor Array
void func_80106608(void);
//Defrag Actors
void func_80106630();
//Allocate New Actor
void* func_80106668(s32*);
//Erase an actor at index
void func_801066C0(u32);
//Get Number of Active Actors
s32 func_80106730(void);
//Get Actor at index
Actor* func_80106768(s32);
Actor* func_80106790(Unk80132ED0 *);
//Get the last actor in list
Actor* func_801067C4(s32*);
//Get the next actor in the list
Actor* func_8010682C(s32* currentIndex);
Actor* func_801068A8(s32* index);
#endif
