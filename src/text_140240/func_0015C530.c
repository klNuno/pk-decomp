#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0015C530_0;

typedef struct {
    unk_func_0015C530_0 unk_00;
    u8 pad_0C[0xF8];
} unk_func_0015C530_1;

extern unk_func_0015C530_1 D_00367BA0[];

void func_0015C530(u8 arg0, unk_func_0015C530_0 *arg1) {
    *arg1 = D_00367BA0[arg0].unk_00;
}
