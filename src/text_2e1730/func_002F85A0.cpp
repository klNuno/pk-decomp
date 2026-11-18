#include "common.h"

class unk_func_002F85A0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32);
    virtual void unk_vf10(s32);
    virtual void unk_vf14(s32);
};

typedef struct unk_func_002F85A0_1 {
    s32 unk_00;
} unk_func_002F85A0_1;

class unk_func_002F85A0_2 : public unk_func_002F85A0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32);
    virtual void unk_vf10(s32);
};

typedef struct unk_func_002F85A0_3 {
    s32 unk_00;
} unk_func_002F85A0_3;

typedef struct unk_func_002F85A0_4 {
    void *unk_00;
    u8 pad_04[0x18];
    s32 unk_1C;
    unk_func_002F85A0_0 *unk_20;
    u8 pad_24[0x40];
    void *unk_64;
    void *unk_68;
    u8 pad_6C[0x4];
    unk_func_002F85A0_2 *unk_70;
    unk_func_002F85A0_0 *unk_74;
    s32 unk_78;
    u8 pad_7C[0x4];
    unk_func_002F85A0_0 *unk_80;
    u8 pad_84[0x4];
    unk_func_002F85A0_0 *unk_88;
    u8 pad_8C[0x4];
    unk_func_002F85A0_3 unk_90;
} unk_func_002F85A0_4;

extern "C" {
void func_002D2BB0(...);
void func_002FCA90(...);
void func_00308B80(...);
void func_00308BE0(...);
void func_00308C80(...);
void func_0030F400(...);
extern u8 D_0035E8E0[];
extern u8 D_0035E8F8[];

unk_func_002F85A0_4 *func_002F85A0(unk_func_002F85A0_4 *arg0, s16 arg1) {
    if (arg0 != 0) {
        arg0->unk_00 = D_0035E8E0;
        arg0->unk_64 = D_0035E8F8;
        if (arg0->unk_90.unk_00 != 0) {
            func_00308BE0(arg0->unk_90.unk_00);
        }
        if (arg0->unk_1C != 0) {
            arg0->unk_20->unk_vf14(arg0->unk_1C);
            arg0->unk_1C = 0;
        }
        if (arg0->unk_80 != 0) {
            arg0->unk_80->unk_vf08();
            arg0->unk_80 = 0;
        }
        if (arg0->unk_20 != 0) {
            if (arg0->unk_20 != 0) {
                arg0->unk_20->unk_vf0C(1);
            }
            arg0->unk_20 = 0;
        }
        if (arg0->unk_70 != 0) {
            if (arg0->unk_70 != 0) {
                arg0->unk_70->unk_vf10(1);
            }
            arg0->unk_70 = 0;
        }
        if (arg0->unk_68 != 0) {
            func_002D2BB0(arg0->unk_68);
            arg0->unk_68 = 0;
        }
        if (arg0->unk_74 != 0) {
            if (arg0->unk_74 != 0) {
                arg0->unk_74->unk_vf0C(1);
            }
            arg0->unk_74 = 0;
        }
        if (arg0->unk_78 != 0) {
            func_0030F400(arg0->unk_78, 1);
            arg0->unk_78 = 0;
        }
        if (arg0->unk_88 != 0) {
            if (arg0->unk_88 != 0) {
                arg0->unk_88->unk_vf10(1);
            }
            arg0->unk_88 = 0;
        }
        if (arg0->unk_90.unk_00 != 0) {
            func_00308B80(arg0->unk_90.unk_00);
        }
        {
            unk_func_002F85A0_3 *m = &arg0->unk_90;
            if (m != 0) {
                if (arg0->unk_90.unk_00 != 0) {
                    func_00308C80(arg0->unk_90.unk_00);
                }
            }
        }
        func_002FCA90(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
