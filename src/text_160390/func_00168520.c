#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 *unk_10;
    s32 unk_14;
} unk_func_00168520_0;

s32 func_001578D0();

s32 func_00168520(unk_func_00168520_0 *arg0, u8 arg1, u8 arg2, s32 arg3) {
    s32 r;

    if (arg1 < arg0->unk_14) {
        if (arg2 < arg0->unk_14) {
            r = func_001578D0(arg0->unk_10[arg1], arg0->unk_10[arg2], arg3);
        } else {
            r = 0;
        }
    } else {
        r = 0;
    }
    return r;
}
