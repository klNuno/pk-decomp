#include "common.h"

typedef struct unk_func_00169250_0 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_00169250_0;

typedef struct unk_func_00169250_1 {
    u8 pad_00[0x60];
    unk_func_00169250_0 *unk_60[16];
} unk_func_00169250_1;

extern unk_func_00169250_1 *D_0036A450[];

s32 func_00169250(s32 arg0, s16 arg1, s32 arg2) {
    D_0036A450[(s16)(arg1 / 16)]->unk_60[(s16)(arg1 % 16)]->unk_68 = arg2;
    return 1;
}
