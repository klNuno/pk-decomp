#include "common.h"

typedef struct unk_func_0015BF00_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xF4];
} unk_func_0015BF00_0;

extern unk_func_0015BF00_0 D_00367AF8[];

void func_0015BF00(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_00367AF8[arg0].unk_00 = arg1;
    D_00367AF8[arg0].unk_04 = arg2;
    D_00367AF8[arg0].unk_08 = arg3;
    D_00367AF8[arg0].unk_0C = arg4;
}
