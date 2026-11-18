#include "common.h"

typedef struct unk_func_0015C750_0 {
    s8 unk_00;
    u8 pad_01[0x103];
} unk_func_0015C750_0;

extern unk_func_0015C750_0 D_00367AF2[];
extern unk_func_0015C750_0 D_00367AF3[];

void func_0015C750(u8 arg0, s8 *arg1, s8 *arg2) {
    *arg1 = D_00367AF2[arg0].unk_00;
    *arg2 = D_00367AF3[arg0].unk_00;
}
