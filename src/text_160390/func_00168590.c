#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 *unk_10;
    s32 unk_14;
} unk_func_00168590_0;

s32 func_00168590(unk_func_00168590_0 *arg0, u8 arg1) {
    s32 temp = arg1;
    if (temp < arg0->unk_14) {
        return arg0->unk_10[temp];
    }
    return 0;
}
