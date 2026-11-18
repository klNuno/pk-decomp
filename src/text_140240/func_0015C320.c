#include "common.h"

typedef struct unk_func_0015C320_0 {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C320_0;

extern unk_func_0015C320_0 D_00367BBC[];

void func_0015C320(u8 arg0, s32 arg1) {
    D_00367BBC[arg0].unk_00 = arg1;
}
