#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u32 unk_14;
    u32 unk_18;
} unk_func_00309BC0_0;

u32 func_00309BC0(unk_func_00309BC0_0 *arg0, s32 arg1, s32 arg2) {
    u32 pos;

    switch (arg2) {
    case 0:
        if (arg1 >= 0 && (u32)arg1 < arg0->unk_18) {
            arg0->unk_14 = arg1;
        }
        break;
    case 1:
        if (arg1 <= 0) {
            arg0->unk_14 = arg0->unk_18 + arg1;
        }
        break;
    case 2:
        pos = arg0->unk_14 + arg1;
        if (pos < arg0->unk_18) {
            arg0->unk_14 = pos;
        }
        break;
    }
    return arg0->unk_14;
}
