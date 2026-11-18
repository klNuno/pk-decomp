#include "common.h"

typedef struct unk_func_002BD0B0_0 {
    u8 unk_00;
    u8 pad_01[3];
    f32 unk_04;
    u8 pad_08[0x14];
} unk_func_002BD0B0_0;

typedef struct unk_func_002BD0B0_1 {
    u8 pad_000[0x398];
    unk_func_002BD0B0_0 unk_398[0x200];
} unk_func_002BD0B0_1;

extern unk_func_002BD0B0_1 D_007B2370;

void func_002BD0B0(s32 arg0, u32 *arg1, f32 *arg2) {
    s32 i;
    u32 temp;
    f32 temp2;

    for (i = 0; i < arg0; i++) {
        temp = *arg1++;
        temp2 = *arg2++;
        if (temp < 0x200) {
            if (D_007B2370.unk_398[temp].unk_00 != 0) {
                D_007B2370.unk_398[temp].unk_04 = temp2;
            }
        }
    }
}
