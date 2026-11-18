#include "common.h"

typedef struct unk_func_0016DF30_0 {
    u8 pad_00[0x40];
    f32 unk_40;
    u8 pad_44[0x1C];
} __attribute__((aligned(16))) unk_func_0016DF30_0;

typedef struct unk_func_0016DF30_1 {
    u8 pad_00[0x10];
    unk_func_0016DF30_0 unk_10;
} unk_func_0016DF30_1;

extern s8 D_0035FD2C;

void func_0016DF30(unk_func_0016DF30_1 *arg0, unk_func_0016DF30_0 *arg1) {
    arg0->unk_10 = *arg1;
    if (D_0035FD2C == 2) {
        arg0->unk_10.unk_40 += 0.4f;
    }
}
