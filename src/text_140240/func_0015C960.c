#include "common.h"

typedef struct unk_func_0015C960_0 {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C960_0;

extern unk_func_0015C960_0 D_00367AF8[];
extern unk_func_0015C960_0 D_00367AFC[];

void func_0015C960(u8 arg0, s32 arg1, s32 arg2) {
    D_00367AF8[arg0].unk_00 = arg1;
    D_00367AFC[arg0].unk_00 = arg2;
}
