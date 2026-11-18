#include "common.h"

typedef struct unk_func_002F0900_0 {
    u8 pad_00[0x10];
    s8 *unk_10;
    s32 unk_14;
} unk_func_002F0900_0;

s8 *func_002F0900(unk_func_002F0900_0 *arg0) {
    if (arg0->unk_14 <= 0) {
        return 0;
    }
    if (arg0->unk_10[arg0->unk_14 - 1] != 0) {
        return 0;
    }
    return arg0->unk_10;
}
