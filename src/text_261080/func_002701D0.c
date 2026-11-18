#include "common.h"

typedef struct {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    u8 pad_C[0xC4];
} unk_func_002701D0_0;

extern unk_func_002701D0_0 D_0075BA40[];
extern u32 D_003602C0;

void func_002701D0(s32 arg0, s32 arg1) {
    u32 i;

    for (i = 0; i < D_003602C0; i++) {
        if (arg0 == D_0075BA40[i].unk_4 && arg1 == D_0075BA40[i].unk_8) {
            D_0075BA40[i].unk_0 |= 1;
        }
    }
}
