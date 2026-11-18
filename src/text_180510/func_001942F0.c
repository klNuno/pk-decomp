#include "common.h"

typedef struct unk_func_001942F0_0 {
    u8 pad_00[0x8];
    s32 unk_08;
    s16 *unk_0C;
    u8 pad_10[0x8];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[0x6];
    s16 unk_26;
    u8 pad_28[0x4C];
    s32 unk_74;
    s32 unk_78;
    u8 pad_7C[0x4];
    s32 unk_80;
    s32 unk_84;
} unk_func_001942F0_0;

void func_001942F0(unk_func_001942F0_0 *arg0, s32 arg1, s16 arg2) {
    s16 i;

    for (i = 0; i < arg2; i++) {
        arg0->unk_0C[i] = 0;
    }
    arg0->unk_26 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_08 = 0;
    arg0->unk_74 = 1;
    arg0->unk_78 = 1;
    arg0->unk_80 = 0;
    arg0->unk_84 = 0;
}
