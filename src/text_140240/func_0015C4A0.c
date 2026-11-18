#include "common.h"

typedef struct unk_func_0015C4A0_0 {
    s16 unk_00;
    u8 pad_02[0x102];
} unk_func_0015C4A0_0;

extern unk_func_0015C4A0_0 D_00367BAE[];

void func_0015C4A0(u8 arg0, s16 arg1) {
    D_00367BAE[arg0].unk_00 = arg1;
}
