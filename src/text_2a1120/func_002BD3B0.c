#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0x1B];
} unk_func_002BD3B0_1;

typedef struct {
    u8 pad_000[0x398];
    unk_func_002BD3B0_1 unk_398[0x200];
} unk_func_002BD3B0_0;

extern unk_func_002BD3B0_0 D_007B2370;

void func_002BD3B0(s32 arg0, u32 *arg1) {
    u32 i;

    for (i = 0; i < 0x200 && arg0 > 0; i++) {
        if (D_007B2370.unk_398[i].unk_00 == 0) {
            *arg1++ = i;
            arg0--;
            D_007B2370.unk_398[i].unk_00 = 1;
        }
    }
}
