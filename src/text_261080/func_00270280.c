#include "common.h"

typedef struct unk_func_00270280_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0xC8];
} unk_func_00270280_0;

extern u32 D_003602C0;
extern unk_func_00270280_0 D_0075BA40[];

unk_func_00270280_0 *func_00270280(s32 arg0) {
    u32 i;

    for (i = 0; i < D_003602C0 && arg0 != D_0075BA40[i].unk_04; i++) {
    }
    if (i == D_003602C0) {
        return NULL;
    }
    return &D_0075BA40[i];
}
