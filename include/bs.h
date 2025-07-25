#ifndef __BS_H__
#define __BS_H__

#include "overlays/ba/playerstate.h"

typedef enum {
    BS_SCRIPT_TYPE_0,
    BS_SCRIPT_TYPE_1_INIT,
    BS_SCRIPT_TYPE_2_UPDATE,
    BS_SCRIPT_TYPE_3
} BsScriptType;

typedef void (*BsScript)(PlayerState *);

BsScript bsbanbflip_entrypoint_3(BsScriptType type);
BsScript bsbbarge_entrypoint_0(BsScriptType type);
BsScript bsbbuster_entrypoint_0(BsScriptType type);
BsScript bstwirl_entrypoint_0(BsScriptType type);

#endif // __BS_H__
