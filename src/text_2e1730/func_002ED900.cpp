#include "common.h"

typedef struct unk_func_002ED900_0 {
    void *unk_00;
    u8 pad_04[8];
    void *unk_0C;
    u8 unk_10[0x28];
    s32 unk_38;
    u8 unk_3C[0x10];
    s32 unk_4C;
} unk_func_002ED900_0;

typedef struct unk_func_002ED900_1 {
    u8 unk_00;
} unk_func_002ED900_1;

typedef struct unk_func_002ED900_2 {
    u8 unk_00[4];
} unk_func_002ED900_2;

class unk_func_002ED900_3 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18(s32);
};

namespace usnd {
class CGlobalVarAccess {
public:
    static void *fs_roGetInst();
};
}

extern "C" {
extern u8 D_0035E6D0[];
extern u8 D_0035E704[];
extern u8 D_0035E720[];
extern unk_func_002ED900_3 *D_00360634;

void func_002E5110(unk_func_002ED900_0 *, void *, void *);
void func_002E5120(unk_func_002ED900_0 *);
void func_002EDA00(unk_func_002ED900_2 *, s32);
void func_002EDE00(void *, unk_func_002ED900_1 *, unk_func_002ED900_2 *);
void func_002F0FE0(...);
s32 func_00308CA0();

unk_func_002ED900_0 *func_002ED900(unk_func_002ED900_0 *volatile arg0, s32 arg1) {
    unk_func_002ED900_1 sp24;
    unk_func_002ED900_2 sp28;

    func_002E5120(arg0);
    arg0->unk_0C = D_0035E720;
    arg0->unk_00 = D_0035E6D0;
    arg0->unk_0C = D_0035E704;
    func_002F0FE0(arg0->unk_10);
    arg0->unk_38 = arg1;
    {
        unk_func_002ED900_1 sp2C = sp24;
        func_002EDE00(arg0->unk_3C, &sp2C, &sp28);
    }
    func_002EDA00(&sp28, -1);
    arg0->unk_4C = func_00308CA0();
    {
        u8 *base = (u8 *)arg0;
        if (base != 0) {
            base += 0xC;
        }
        func_002E5110(arg0, usnd::CGlobalVarAccess::fs_roGetInst(), base);
    }
    if (D_00360634 != 0) {
        D_00360634->unk_vf18(arg0->unk_38);
    }
    return arg0;
}
}
