#include "common.h"

typedef struct unk_func_0015C570_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0015C570_1;

typedef struct unk_func_0015C570_0 {
    unk_func_0015C570_1 unk_00;
    u8 pad_0C[0xF8];
} unk_func_0015C570_0;

extern unk_func_0015C570_0 D_00367BA0[];

void func_0015C570(u8 arg0, unk_func_0015C570_1 *arg1) {
    D_00367BA0[arg0].unk_00 = *arg1;
}
