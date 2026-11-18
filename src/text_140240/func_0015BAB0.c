#include "common.h"

typedef struct unk_func_0015BAB0_0 {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
} unk_func_0015BAB0_0;

typedef struct unk_func_0015BAB0_1 {
    s16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xF0];
} unk_func_0015BAB0_1;

typedef struct unk_func_0015BAB0_2 {
    u8 pad_00[0xF4];
    unk_func_0015BAB0_1 unk_F4[18];
} unk_func_0015BAB0_2;

extern unk_func_0015BAB0_2 D_003678B0;
extern u32 D_00368C18[];
extern unk_func_0015BAB0_0 *D_00368C1C[];

void func_0015BAB0(void) {
    u32 i;

    for (i = 0; i < D_00368C18[0]; i++) {
        D_00368C1C[0][i].unk_18 = -2;
        D_00368C1C[0][i].unk_1C = 0;
    }
    for (i = 0; i < 18; i++) {
        D_003678B0.unk_F4[i].unk_00 = 0;
        D_003678B0.unk_F4[i].unk_02 = 0;
        D_003678B0.unk_F4[i].unk_04 = 0;
        D_003678B0.unk_F4[i].unk_0C = 0;
        D_003678B0.unk_F4[i].unk_08 = 0;
        D_003678B0.unk_F4[i].unk_10 = 0;
    }
}
