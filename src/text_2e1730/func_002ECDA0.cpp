/* profile: opt_300_noexc */
#include "common.h"

struct unk_002ECDA0_0 {
    s32 unk_00;
    u8 pad_04[0x14];
    unk_002ECDA0_0 *unk_18;
    void *unk_1C;
    u8 pad_20[4];
    s32 unk_24;
};

struct unk_002ECDA0_1 {
    u8 pad_00[0x10];
    u8 unk_10[0x18];
    unk_002ECDA0_0 *unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
    u8 pad_3C[0x10];
    s32 unk_4C;
};

class unk_002ECDA0_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);
};

class unk_002ECDA0_3 {
public:
    virtual void unk_vf08();
    virtual s32 **unk_vf0C();
};

class unk_002ECDA0_4 {
public:
    virtual void unk_vf08(s32, unk_002ECDA0_2 *);
};

extern "C" {
void __register_global_object(s32 **, void (*)(void *, s32), u8 *);
void func_002CD2A0(void *, s32);
void func_002CDB60(s32 **, const char *, s32 *);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(s32 **, s32, s32, s32, s32);
void func_002EFA50(s32, unk_002ECDA0_0 *, s32);
void func_002F08A0(unk_002ECDA0_0 *, unk_002ECDA0_2 *, unk_002ECDA0_0 *);
unk_002ECDA0_3 *func_002F2390(unk_002ECDA0_2 *);
u8 func_002F4AD0(s32 **, s32);
s32 func_002FBB80();
unk_002ECDA0_0 *func_00304540(s32);
s32 func_00304590();
void func_00308B80(s32);
void func_00308BE0(s32);
extern s32 *D_0035BD20[];
extern char D_0035BD30[];
extern unk_002ECDA0_4 *D_00360634;
extern s8 D_00360648;
extern s8 D_0036064C;
extern s32 D_00360650;
extern u8 D_007BECB8[];
}

class unk_002ECDA0_5 {
public:
    s32 *unk_00;
    unk_002ECDA0_5(s32 *arg0) : unk_00(arg0) {
        if (*unk_00) {
            func_00308BE0(*unk_00);
        }
    }
    ~unk_002ECDA0_5() {
        if (*unk_00) {
            func_00308B80(*unk_00);
        }
    }
};

extern "C" {
bool func_002ECDA0(unk_002ECDA0_1 *arg0, unk_002ECDA0_2 *arg1, s32 arg2, bool arg3) {
    unk_002ECDA0_0 *temp0;
    unk_002ECDA0_0 *temp1;
    s32 **temp7;
    s32 temp2;
    u8 temp3;
    bool temp4;
    s32 temp6;
    s32 temp5;

    for (temp0 = arg0->unk_28; temp0 != NULL; temp0 = temp0->unk_18) {
        if (temp0->unk_00 == arg2) {
            break;
        }
    }
    if (temp0 == NULL) {
        return false;
    }
    if (!D_00360648) {
        func_002CDB60(D_0035BD20, D_0035BD30, &temp5);
        __register_global_object(D_0035BD20, func_002CD2A0, D_007BECB8);
        D_00360648 = 1;
    }
    if (!D_0036064C) {
        D_00360650 = func_002FBB80();
        D_0036064C = 1;
    }
    temp7 = func_002F2390(arg1)->unk_vf0C();
    temp4 = false;
    temp2 = **D_0035BD20;
    if (**temp7 == temp2) {
        if (func_002CEAF0(temp7, 0, **temp7, func_002CEA20(*D_0035BD20), temp2) == 0) {
            temp4 = true;
        }
    }
    temp3 = func_002F4AD0(func_002F2390(arg1)->unk_vf0C(), D_00360650);
    {
        unk_002ECDA0_5 temp8(&arg0->unk_4C);
        temp1 = func_00304540(func_00304590());
        func_002F08A0(temp1, arg1, temp0);
        temp1->unk_1C = arg0->unk_10;
        temp1->unk_18 = arg0->unk_28;
        arg0->unk_28 = temp1;
        if (temp1->unk_18) {
            temp1->unk_18->unk_1C = temp1;
        }
    }
    if (arg3) {
        ++temp1->unk_24;
    }
    if (D_00360634) {
        D_00360634->unk_vf08(arg0->unk_38, arg1);
    }
    if (temp4) {
        arg1->unk_vf0C(0x3E8, arg0);
        arg1->unk_vf0C(0x3E9, arg0);
    } else if (temp3) {
        arg1->unk_vf0C(8, &temp6);
        arg1->unk_vf0C(8, &temp6);
        arg1->unk_vf0C(0xE, &temp6);
        arg1->unk_vf0C(0xE, &temp6);
    }
    func_002EFA50(arg0->unk_38, temp1, 1);
    return true;
}
}
