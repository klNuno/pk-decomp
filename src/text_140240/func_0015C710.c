#include "common.h"

typedef struct {
    s8 unk_00;
    s8 unk_01;
    u8 pad_02[0x102];
} unk_func_0015C710_0;

extern unk_func_0015C710_0 D_00367AF4[];

void func_0015C710(u8 arg0, s8 *arg1, s8 *arg2) {
    *arg1 = D_00367AF4[arg0].unk_00;
    *arg2 = D_00367AF4[arg0].unk_01;
}
