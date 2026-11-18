#include "common.h"

typedef struct unk_func_001DBB40_0 {
    f32 unk_00;
    u8 pad_04[8];
} unk_func_001DBB40_0;

typedef struct unk_func_001DBB40_1 {
    u8 pad_00[0x10];
    unk_func_001DBB40_0 ***unk_10;
} unk_func_001DBB40_1;

void func_001DBB40(unk_func_001DBB40_1 *arg0, s16 arg1, s16 arg2, f32 arg3) {
    (*arg0->unk_10[arg1])[arg2].unk_00 = arg3;
}
