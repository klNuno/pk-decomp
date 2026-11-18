#include "common.h"

typedef struct unk_func_001668B0_1 {
    u8 pad_00[0x8];
    struct unk_func_001668B0_1 *unk_08;
} unk_func_001668B0_1;

typedef struct unk_func_001668B0_0 {
    u8 pad_00[0x68];
    unk_func_001668B0_1 *unk_68;
    unk_func_001668B0_1 *unk_6C;
} unk_func_001668B0_0;

void func_001668B0(unk_func_001668B0_0 *arg0, s32 arg1) {
    unk_func_001668B0_1 *temp;
    s32 i;

    for (temp = arg0->unk_68, i = 1; temp != 0 && i != arg1; i++) {
        temp = temp->unk_08;
    }
    arg0->unk_6C = temp != 0 ? temp : arg0->unk_68;
}
