#include "common.h"

typedef struct unk_func_00270230_0 {
    u32 unk_00;
    s32 unk_04;
    u8 pad_08[0xC8];
} unk_func_00270230_0;

extern u32 D_003602C0;
extern unk_func_00270230_0 D_0075BA40[];

void func_00270230(s32 arg0) {
    u32 i;

    for (i = 0; i < D_003602C0; i++) {
        if (arg0 == D_0075BA40[i].unk_04) {
            D_0075BA40[i].unk_00 |= 1;
        }
    }
}
