#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0xFC];
} unk_func_0015C880_0;

extern unk_func_0015C880_0 D_00367AF8[];

void func_0015C880(u8 arg0, s32 *arg1, s32 *arg2) {
    *arg1 = D_00367AF8[arg0].unk_00;
    *arg2 = D_00367AF8[arg0].unk_04;
}
