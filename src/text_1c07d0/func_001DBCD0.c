#include "common.h"

typedef struct unk_func_001DBCD0_0 {
    u8 pad_00[0x10];
    s32 **unk_10;
} unk_func_001DBCD0_0;

void func_001DBCD0(unk_func_001DBCD0_0 *arg0, s16 arg1, s32 *arg2) {
    *arg2 = *arg0->unk_10[arg1];
}
