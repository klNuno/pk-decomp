#include "common.h"

typedef struct unk_func_0015C8F0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xF0];
} unk_func_0015C8F0_0;

extern unk_func_0015C8F0_0 D_00367B08[];

void func_0015C8F0(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_00367B08[arg0].unk_00 = arg3;
    D_00367B08[arg0].unk_04 = arg4;
    D_00367B08[arg0].unk_08 = arg1;
    D_00367B08[arg0].unk_0C = arg2;
    D_00367B08[arg0].unk_10 = arg5;
}
