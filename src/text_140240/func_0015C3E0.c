#include "common.h"

typedef struct unk_func_0015C3E0_0 {
    f32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C3E0_0;

extern unk_func_0015C3E0_0 D_00367BB4[];

void func_0015C3E0(u8 arg0, f32 arg1) {
    D_00367BB4[arg0].unk_00 = arg1;
}
