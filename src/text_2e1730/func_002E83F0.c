#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C[4];
} unk_func_002E83F0_1;

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04[0x10];
} unk_func_002E83F0_2;

typedef struct {
    void *unk_00;
    u8 pad_04[0x8];
    unk_func_002E83F0_2 unk_0C;
    s32 unk_20;
    u8 unk_24[0x18];
    u8 unk_3C;
    u8 pad_3D[0x3];
    s32 unk_40;
} unk_func_002E83F0_0;

void func_002D2BB0(void *);
void func_002E0AF0(void *, s32);
void func_002E7790(unk_func_002E83F0_0 *, s32, void *);
void func_002E84E0(void *, s32);
unk_func_002E83F0_1 *func_002F2390(unk_func_002E83F0_0 *);
void func_002F23A0(void *, s32);
void func_00308C80(s32);
extern u8 D_0035E640[];

unk_func_002E83F0_0 *func_002E83F0(unk_func_002E83F0_0 *arg0, s32 arg1) {
    unk_func_002E83F0_1 *p;

    if (arg0 != 0) {
        arg0->unk_00 = D_0035E640;
        if (arg0->unk_3C != 0 && (p = func_002F2390(arg0)) != 0) {
            func_002E7790(arg0, arg0->unk_40, p->unk_1C);
        }
        func_002E0AF0(arg0->unk_24, -1);
        if (&arg0->unk_20 != 0) {
            if (arg0->unk_20 != 0) {
                func_00308C80(arg0->unk_20);
            }
        }
        if (&arg0->unk_0C != 0) {
            if (arg0->unk_0C.unk_04 != 0) {
                if (arg0->unk_0C.unk_04 != 0) {
                    func_002E84E0(arg0->unk_0C.unk_04, 0);
                }
            }
        }
        func_002F23A0(arg0, 0);
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
