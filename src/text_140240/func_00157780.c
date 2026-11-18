#include "common.h"

typedef struct unk_func_00157780_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00157780_0;

typedef struct unk_func_00157780_1 {
    u8 pad_00[4];
    unk_func_00157780_0 *unk_04;
} unk_func_00157780_1;

s32 func_00157780(unk_func_00157780_1 *arg0, s16 arg1) {
    return arg0->unk_04[arg1].unk_08;
}
