#include "common.h"

typedef struct unk_func_002DFB00_0 {
    u8 pad_00[0x4];
    s32 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34[0x8];
    s32 unk_3C;
} unk_func_002DFB00_0;

typedef struct unk_func_002DFB00_1 {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
} unk_func_002DFB00_1;

void func_00304670(s32, s32);
s32 func_003047A0();

s32 func_002DFB00(unk_func_002DFB00_0 *arg0, unk_func_002DFB00_1 *arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 h = arg0->unk_18;

    if (h != 0) {
        func_00304670(func_003047A0(), h);
        arg0->unk_18 = 0;
    }
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    arg0->unk_30 = 0;
    arg0->unk_2C = 0;
    arg0->unk_28 = 0;
    arg0->unk_24 = 0;
    arg0->unk_20 = 0;
    arg0->unk_1C = 0;
    arg0->unk_18 = 0;
    if (arg2 == 0) {
        return 0;
    }
    arg0->unk_3C = arg4;
    arg0->unk_04 = arg3 + 2;
    arg0->unk_20 = arg3[0];
    arg0->unk_08 = arg3[1];
    if (arg1->unk_24 != 0) {
        arg0->unk_1C = arg2 + arg1->unk_20;
    }
    arg0->unk_28 = arg2;
    return 1;
}
