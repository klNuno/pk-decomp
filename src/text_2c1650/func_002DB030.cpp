/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    u8 *unk_18;
    u8 pad_1C[0x4];
    u8 *unk_20;
    u8 *unk_24;
    u8 pad_28[0x14];
    u8 *unk_3C;
} unk_func_002DB030_0;

typedef struct {
    s32 unk_00;
} unk_func_002DB030_1;

extern "C" {
void c4sdk_malloc(unk_func_002DB030_1 *, s32);
void func_002CDB60(unk_func_002DB030_1 *, char *, unk_func_002DB030_1 *);
void func_002DCF60(unk_func_002DB030_0 *, unk_func_002DB030_1 *);
void func_002DD020(unk_func_002DB030_0 *, unk_func_002DB030_1 *);
extern char D_0035B330[];
extern char D_0035B360[];

void func_002DB030(unk_func_002DB030_0 *arg0, u16 *arg1) {
    unk_func_002DB030_1 sp30;
    unk_func_002DB030_1 sp34;
    unk_func_002DB030_1 sp38;
    unk_func_002DB030_1 sp3C;
    s32 pc;
    s32 off;
    bool err;

    pc = arg0->unk_10;
    if (pc & 3) {
        arg0->unk_10 = pc + (4 - (pc & 3));
    }
    switch (*(s32 *)(arg0->unk_24 + arg0->unk_10)) {
    case 0x5:
        *arg1 = *(u16 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        arg0->unk_10 += 6;
        break;
    case 0xE:
    case 0xD:
        *arg1 = *(u16 *)(arg0->unk_18 + (arg0->unk_0C - *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4))));
        arg0->unk_10 += 8;
        break;
    case 0x8:
    case 0x7:
        *arg1 = *(u16 *)(arg0->unk_20 + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    case 0x10:
        *arg1 = *(u16 *)(arg0->unk_3C + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    case 0x12:
    case 0xF:
        off = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        switch (*(arg0->unk_3C + off)) {
        case 1:
            err = false;
            *arg1 = **(u16 **)(arg0->unk_3C + (off + 4));
            break;
        case 2:
        default:
            err = true;
            break;
        }
        if (err) {
            func_002CDB60(&sp30, D_0035B330, &sp38);
            func_002DCF60(arg0, &sp30);
            *arg1 = 0;
            c4sdk_malloc(&sp30, 0);
        }
        arg0->unk_10 += 8;
        break;
    default:
        func_002CDB60(&sp34, D_0035B360, &sp3C);
        func_002DD020(arg0, &sp34);
        arg0->unk_10 += 8;
        *arg1 = 0;
        c4sdk_malloc(&sp34, 0);
        break;
    }
}
}
