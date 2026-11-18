#include "common.h"

typedef struct unk_func_001DD310_0 {
    u8 pad_00[0xC];
    s16 *unk_0C;
} unk_func_001DD310_0;

s16 func_001DD310(unk_func_001DD310_0 *arg0, s16 arg1) {
    return arg0->unk_0C[arg1];
}
