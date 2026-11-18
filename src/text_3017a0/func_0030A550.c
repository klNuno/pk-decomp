#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_0030A550_1;

typedef struct {
    unk_func_0030A550_1 *unk_00;
    void *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x30];
    s32 unk_48;
    u8 unk_4C[4];
} unk_func_0030A550_0;

void func_002D2BB0();
void func_002F8C20();
void func_00307A00();
void func_00307A60();
void func_00308B80();
void func_00308BE0();
void func_00308C80();
void func_0030C380();
extern u8 D_0035F020[];
extern u8 D_0035F03C[];
extern u8 D_0035F0B0[];
extern u8 D_0035F0D4[];

unk_func_0030A550_0 *func_0030A550(unk_func_0030A550_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035F0B0;
        arg0->unk_00->unk_00 = D_0035F0D4;
        arg0->unk_00->unk_04 = arg0->unk_4C - (u8 *)arg0->unk_00;
        if (arg0->unk_10 != -1) {
            if (arg0->unk_48 != 0) {
                func_00308BE0(arg0->unk_48, -1);
            }
            if (arg0->unk_10 != -1) {
                func_00307A00(arg0->unk_14, 1);
                func_00307A60(arg0->unk_10);
                arg0->unk_10 = -1;
            }
            if (arg0->unk_48 != 0) {
                func_00308B80(arg0->unk_48);
            }
        }
        if (&arg0->unk_48 != NULL) {
            if (arg0->unk_48 != 0) {
                func_00308C80(arg0->unk_48);
            }
        }
        if (arg0 != NULL) {
            arg0->unk_04 = D_0035F020;
            arg0->unk_00->unk_00 = D_0035F03C;
            arg0->unk_00->unk_04 = arg0->unk_0C - (u8 *)arg0->unk_00;
            func_002F8C20(arg0, 0);
        }
        if (arg1 != 0) {
            func_0030C380(arg0->unk_4C, 0);
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
