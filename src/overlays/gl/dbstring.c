#include "gl/dbstring.h"

typedef struct {
    u8 headerSize;
    u8 unk1;
} TextHeader;
typedef struct {
    //This is usually the index of the line in the file + 0x80
    u8 DialogIndex;
    //This is how many bytes until the next DialogLine Starts
    u8 DialogSize;
    //All the actual data of the dialog
    u8 text[];
} DialogLine;

char* gldbstring_entrypoint_0(char* arg0, s32 asset_id) {
    arg0 = asset_load(asset_id);
    func_800D70D0(1);
    func_800D71F4(1);
    return arg0 + 1;
}

//We return the pointer to the text in the given dialog file at the given line
char* gldbstring_entrypoint_1(u8* arg0, s16 desiredLine)
{
    s32 lineIndex;
    s32 numLines;
    DialogLine* dialogLine;
    s32 distanceToNextDialog;
    s32 v0;
    //GLDialog always returns 0
    v0 = _gldialog_entrypoint_0();
    distanceToNextDialog = ((TextHeader*)arg0 + v0)->headerSize;
    distanceToNextDialog += ((TextHeader*)arg0 + v0)->unk1 << 8;
    dialogLine = (u8*)arg0 + distanceToNextDialog;
    numLines = dialogLine[-1].DialogSize;

    for (lineIndex = 0; lineIndex < numLines; lineIndex++)
    {
        //Dialog Length
        distanceToNextDialog = dialogLine->DialogSize;
        //Dialog Id
        v0 = dialogLine->DialogIndex;
        dialogLine++;
        //Does the Dialog line Match the one we are trying to find
        if ((desiredLine + 0x80) == v0)
        {
            return (u8*)dialogLine;
        }
        //Add the length of the dialog so we can get to the header of the next dialogline
        dialogLine = (DialogLine*)((u8*)dialogLine + distanceToNextDialog);
    }

    return NULL;
}

void gldbstring_free(s32 asset_id)
{
    func_800D721C(asset_id, 0);
    func_800D70F8(asset_id, 0);
    func_800D6CEC(asset_id);
}