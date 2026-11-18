#include "common.h"

typedef struct unk_func_00196000_1 {
    u8 pad_00[0x34];
    u8 unk_34;
} unk_func_00196000_1;

typedef struct unk_func_00196000_0 {
    u8 pad_00[0x10];
    unk_func_00196000_1 **unk_10;
} unk_func_00196000_0;

void func_00196000(unk_func_00196000_0 *arg0, s16 arg1, u8 arg2) {
    arg0->unk_10[arg1]->unk_34 = arg2;
}
