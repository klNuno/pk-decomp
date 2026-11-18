#include "common.h"

typedef struct {
    u8 pad_00[0x68];
    s32 *unk_68;
    u8 pad_6C[0x4];
} unk_func_0016DD90_0;

s32 func_00169790();

void func_0016DD90(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_0016DD90_0 temp;

    if (func_00169790(arg0, arg1, &temp) != 0) {
        *arg2 = *temp.unk_68;
    }
}
