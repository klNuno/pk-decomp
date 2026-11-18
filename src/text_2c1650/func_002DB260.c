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
} unk_func_002DB260_0;

typedef struct {
    s32 unk_00;
} unk_func_002DB260_1;

void c4sdk_malloc(unk_func_002DB260_1 *, s32);
void func_002CDB60(unk_func_002DB260_1 *, char *, unk_func_002DB260_1 *);
void func_002DCF60(unk_func_002DB260_0 *, unk_func_002DB260_1 *);
void func_002DD020(unk_func_002DB260_0 *, unk_func_002DB260_1 *);
extern char D_0035B380[];
extern char D_0035B3A0[];
extern char D_0035B3D0[];

void func_002DB260(unk_func_002DB260_0 *arg0, s32 *arg1) {
    unk_func_002DB260_1 sp38;
    unk_func_002DB260_1 sp3C;
    unk_func_002DB260_1 sp40;
    unk_func_002DB260_1 sp44;
    unk_func_002DB260_1 sp48;
    unk_func_002DB260_1 sp4C;
    s32 pc;

    pc = arg0->unk_10;
    if (pc & 3) {
        arg0->unk_10 = pc + (4 - (pc & 3));
    }
    switch (*(s32 *)(arg0->unk_24 + arg0->unk_10)) {
    case 0xE:
    case 0xD:
        *arg1 = *(s32 *)(arg0->unk_18 + (arg0->unk_0C - *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4))));
        if (*arg1 == 0) {
            func_002CDB60(&sp38, D_0035B380, &sp44);
            func_002DCF60(arg0, &sp38);
            c4sdk_malloc(&sp38, 0);
        }
        arg0->unk_10 += 8;
        break;
    case 0x8:
    case 0x7:
        *arg1 = **(s32 **)(arg0->unk_20 + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        if (*arg1 == 0) {
            func_002CDB60(&sp3C, D_0035B3A0, &sp48);
            func_002DCF60(arg0, &sp3C);
            c4sdk_malloc(&sp3C, 0);
        }
        arg0->unk_10 += 8;
        break;
    case 0x10:
        *arg1 = **(s32 **)(arg0->unk_3C + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    default:
        func_002CDB60(&sp40, D_0035B3D0, &sp4C);
        func_002DD020(arg0, &sp40);
        arg0->unk_10 += 8;
        *arg1 = 0;
        c4sdk_malloc(&sp40, 0);
        break;
    }
}
