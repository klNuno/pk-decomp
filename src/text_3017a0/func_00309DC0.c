#include "common.h"

typedef struct unk_func_00309DC0_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_00309DC0_1;

typedef struct unk_func_00309DC0_0 {
    unk_func_00309DC0_1 *unk_00;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    u8 unk_20;
    u8 pad_21[3];
    void *unk_24;
} unk_func_00309DC0_0;

extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F080[];
extern u8 D_0035F09C[];
extern u8 D_0035F120[];

unk_func_00309DC0_0 *func_00309DC0(unk_func_00309DC0_0 *arg0, s16 arg1) {
    if (arg1 != 0) {
        arg0->unk_00 = (unk_func_00309DC0_1 *)&arg0->unk_24;
        arg0->unk_24 = D_0035F120;
    }
    arg0->unk_04 = D_0035E9A0;
    arg0->unk_00->unk_00 = D_0035E9B4;
    arg0->unk_00->unk_04 = (u8 *)&arg0->unk_08 - (u8 *)arg0->unk_00;
    arg0->unk_04 = D_0035F080;
    arg0->unk_00->unk_00 = D_0035F09C;
    arg0->unk_00->unk_04 = (u8 *)&arg0->unk_24 - (u8 *)arg0->unk_00;
    arg0->unk_08 = -1;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_20 = 0;
    return arg0;
}
