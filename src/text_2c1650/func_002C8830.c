#include "common.h"

typedef struct {
    u8 pad_00[0x40];
} __attribute__((aligned(16))) unk_func_002C8830_0;

typedef struct unk_func_002C8830_1 {
    unk_func_002C8830_0 *unk_00;
    unk_func_002C8830_0 *unk_04;
    s32 *unk_08;
} unk_func_002C8830_1;

extern unk_func_002C8830_1 D_007B83E4;

void func_002C8830(void) {
    unk_func_002C8830_0 *dst;
    unk_func_002C8830_0 *src;

    src = D_007B83E4.unk_00;
    dst = D_007B83E4.unk_04;
    D_007B83E4.unk_04 = dst + 1;
    *dst = *src;
    (*D_007B83E4.unk_08)++;
}
