#include "common.h"

typedef struct unk_func_002EC750_0 {
    u8 pad_00[0xE];
    u8 unk_0E;
} unk_func_002EC750_0;

typedef struct unk_func_002EC750_1 {
    u8 pad_00[0x28];
    unk_func_002EC750_0 *unk_28;
} unk_func_002EC750_1;

s32 func_002EC750(unk_func_002EC750_1 *arg0) {
    return arg0->unk_28 && !arg0->unk_28->unk_0E;
}
