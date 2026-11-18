#include "common.h"

typedef struct unk_func_002D2F80_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002D2F80_0;

typedef struct unk_func_002D2F80_1 {
    unk_func_002D2F80_0 *unk_00;
} unk_func_002D2F80_1;

void func_002CFEF0(unk_func_002D2F80_1 *);

s32 func_002D2F80(unk_func_002D2F80_1 arg0, unk_func_002D2F80_1 arg1, unk_func_002D2F80_1 arg2) {
    unk_func_002D2F80_0 *temp_s0 = arg1.unk_00;

    for (; arg0.unk_00 != temp_s0; func_002CFEF0(&arg0), func_002CFEF0(&arg2)) {
        if (arg0.unk_00->unk_0C != arg2.unk_00->unk_0C) {
            return 0;
        }
    }
    return 1;
}
