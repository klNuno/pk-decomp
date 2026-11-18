#include "common.h"

typedef struct unk_func_00193510_0 {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[8];
} unk_func_00193510_0;

typedef struct unk_func_00193510_1 {
    u8 pad_00[0x10];
    unk_func_00193510_0 ***unk_10;
} unk_func_00193510_1;

void func_00193510(unk_func_00193510_1 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    (*arg0->unk_10[arg1])[arg2].unk_00 = arg3;
    (*arg0->unk_10[arg1])[arg2].unk_02 = arg4;
}
