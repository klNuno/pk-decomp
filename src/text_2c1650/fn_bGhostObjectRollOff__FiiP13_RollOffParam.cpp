#include "common.h"

struct _RollOffParam {
    s32 unk_00;
    s32 unk_04;
};

s32 fn_bGhostObjectRollOff(s32 arg0, s32 arg1, _RollOffParam *arg2) {
    s32 temp = 0;
    if (arg2 != 0) {
        arg2->unk_04 = 0;
        temp = 1;
        arg2->unk_00 = 0;
    }
    return temp;
}
