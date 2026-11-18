#include "common.h"

typedef struct unk_func_00308EC0_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00308EC0_0;

typedef struct unk_func_00308EC0_1 {
    unk_func_00308EC0_0 *unk_00;
    void *unk_04;
} unk_func_00308EC0_1;

typedef struct unk_func_00308EC0_2 {
    unk_func_00308EC0_0 *unk_00;
    void *unk_04;
    s32 unk_08;
    u8 unk_0C[0x8];
    unk_func_00308EC0_1 unk_14;
    u8 unk_1C[0x4];
} unk_func_00308EC0_2;

extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035EFA0[];
extern u8 D_0035EFBC[];
extern u8 D_0035EFD0[];

void func_002D2920();
void func_002D2BB0();
void func_0030C380();

unk_func_00308EC0_2 *func_00308EC0(unk_func_00308EC0_2 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035EFA0;
        arg0->unk_00->unk_04 = (s32)D_0035EFD0;
        ((unk_func_00308EC0_0 *)arg0->unk_00->unk_00)->unk_00 = D_0035EFBC;
        ((unk_func_00308EC0_0 *)arg0->unk_00->unk_00)->unk_04 = (u8 *)arg0->unk_0C - (u8 *)arg0->unk_00->unk_00;
        arg0->unk_00->unk_08 = (u8 *)&arg0->unk_14 - (u8 *)arg0->unk_00;
        if (arg0->unk_08 != 0) {
            func_002D2920(arg0->unk_08);
            arg0->unk_08 = 0;
        }
        if (arg1 != 0) {
            if (&arg0->unk_14 != NULL) {
                arg0->unk_14.unk_04 = D_0035E9A0;
                arg0->unk_14.unk_00->unk_00 = D_0035E9B4;
                arg0->unk_14.unk_00->unk_04 = (u8 *)arg0->unk_1C - (u8 *)arg0->unk_14.unk_00;
            }
            func_0030C380(arg0->unk_0C, 0);
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
