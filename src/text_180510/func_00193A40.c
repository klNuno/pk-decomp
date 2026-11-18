#include "common.h"

typedef struct unk_func_00193A40_0 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    u8 **unk_10;
} unk_func_00193A40_0;

s16 func_00193A40(unk_func_00193A40_0 *arg0, s16 arg1) {
    switch (arg0->unk_0C[arg1]) {
    case 1:
        return *(s16 *)(arg0->unk_10[arg1] + 0x2A);
    case 2:
        return *(s16 *)(arg0->unk_10[arg1] + 0xC);
    case 3:
        return *(s16 *)(arg0->unk_10[arg1] + 0x6);
    case 4:
        return *(s16 *)(arg0->unk_10[arg1] + 0x18);
    case 5:
        return *(s16 *)(arg0->unk_10[arg1] + 0xE);
    case 6:
        return *(s16 *)(arg0->unk_10[arg1] + 0x12);
    case 7:
        return *(s16 *)(arg0->unk_10[arg1] + 0x6);
    case 8:
        return *(s16 *)(arg0->unk_10[arg1] + 0x6);
    case 9:
        return *(s16 *)(arg0->unk_10[arg1] + 0x6);
    default:
        return -1;
    }
}
