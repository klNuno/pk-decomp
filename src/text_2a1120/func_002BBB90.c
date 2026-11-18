#include "common.h"

typedef struct unk_func_002BBB90_0 {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    u32 unk_10 : 15;
    u32 unk_11 : 1;
    u32 unk_12 : 16;
    u32 unk_14 : 26;
    u32 unk_17 : 2;
    u32 unk_18 : 4;
    u8 pad_18[8];
    s16 unk_20;
    u8 unk_22;
    u8 unk_23;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} unk_func_002BBB90_0;

void func_002C1E50();
extern u8 D_007B25C0[];
extern unk_func_002BBB90_0 *D_007B8EF4[];

void func_002BBB90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_002BBB90_0 *p;
    u8 half;
    s32 size;
    s32 qwc;
    s32 n;

    func_002C1E50(D_007B25C0, 5);
    p = D_007B8EF4[0];
    if (arg3 < 0) {
        arg3 = -arg3;
        half = 1;
    } else {
        half = 0;
    }
    size = arg3 * (arg1 * arg2);
    if (half) {
        size >>= 1;
    }
    while (size > 0) {
        if (size < 0x7FFF0) {
            n = size;
        } else {
            n = 0x7FFF0;
        }
        qwc = (n + 0xF) >> 4;
        p->unk_00 = 1;
        p->unk_03 = 0x10;
        p->unk_08 = 0;
        p->unk_0C = 0x50000001;
        size -= n;
        p->unk_17 = 2;
        p->unk_10 = qwc;
        p->unk_11 = 0;
        p->unk_20 = qwc;
        p->unk_23 = 0x30;
        p->unk_24 = arg0;
        p->unk_28 = 0;
        arg0 += n;
        p->unk_2C = qwc | 0x50000000;
        p++;
    }
    p[-1].unk_11 = 1;
    D_007B8EF4[0] = p;
}
