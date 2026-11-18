/* profile: opt_300_noexc */
#include "common.h"

struct unk_002ED5A0_0 {
    u8 pad_00[0x44];
    s32 *unk_44;
};

class unk_002ED5A0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);
    unk_002ED5A0_0 *unk_04;
};

struct unk_002ED5A0_2 {
    unk_002ED5A0_1 *unk_00;
    u8 pad_04[0xA];
    u8 unk_0E;
    u8 pad_0F[9];
    unk_002ED5A0_2 *unk_18;
    u8 pad_1C[8];
    s32 unk_24;
};

struct unk_002ED5A0_3 {
    void *unk_00;
    u8 pad_04[8];
    void *unk_0C;
    u8 unk_10[0x18];
    unk_002ED5A0_2 *unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
    u8 unk_3C[0x10];
    s32 unk_4C;
};

class unk_002ED5A0_4 {
public:
    virtual void unk_vf08(s32);
};

struct unk_002ED5A0_5 {
    u8 pad_00[0x10];
    unk_002ED5A0_4 *unk_10;
};

class unk_002ED5A0_6 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(s32);
};

extern "C" {
void __register_global_object(s32 **, void (*)(void *, s32), u8 *);
void func_002CD2A0(void *, s32);
void func_002CDB60(s32 **, const char *, s32 *);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(s32 **, s32, s32, s32, s32);
void func_002CFEF0(unk_002ED5A0_5 **);
void func_002D2BB0(void *);
unk_002ED5A0_5 *func_002EC810(void *);
unk_002ED5A0_5 **func_002EC820(void *);
void func_002ED8A0(void *, s16);
void func_002F0A20(unk_002ED5A0_2 *);
void func_002F0AC0(unk_002ED5A0_2 *);
void func_002F0F70(void *, s16);
void func_00304530(void *, unk_002ED5A0_2 *);
void *func_00304590();
void func_00308C80(s32);
extern s32 *D_0035BD10[];
extern char D_0035BD30[];
extern u8 D_0035E6D0[];
extern u8 D_0035E704[];
extern unk_002ED5A0_6 *D_00360634;
extern s8 D_00360638;
extern u8 D_007BEC98[];

unk_002ED5A0_3 *func_002ED5A0(unk_002ED5A0_3 *arg0, s16 arg1) {
    unk_002ED5A0_2 *temp0;
    s32 **temp1;
    bool temp2;
    s32 temp3;
    s32 temp4;
    s32 temp9;
    unk_002ED5A0_2 *temp10;
    unk_002ED5A0_2 *temp5;
    unk_002ED5A0_5 *temp7;
    unk_002ED5A0_5 *temp12;
    s32 temp6;

    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E6D0;
        arg0->unk_0C = D_0035E704;
        if (!D_00360638) {
            func_002CDB60(D_0035BD10, D_0035BD30, &temp6);
            __register_global_object(D_0035BD10, func_002CD2A0, D_007BEC98);
            D_00360638 = 1;
        }
        for (temp0 = arg0->unk_28; temp0 != NULL; temp0 = temp0->unk_18) {
            unk_002ED5A0_0 *temp8 = temp0->unk_00->unk_04;
            temp3 = **D_0035BD10;
            temp1 = &temp8->unk_44;
            temp2 = false;
            if (*temp8->unk_44 == temp3) {
                if (func_002CEAF0(temp1, 0, **temp1, func_002CEA20(*D_0035BD10), temp3) == 0) {
                    temp2 = true;
                }
            }
            if (temp2) {
                temp0->unk_00->unk_vf0C(0x3F0, 0);
                if (temp0->unk_0E) {
                    --temp0->unk_24;
                }
            }
        }
        temp4 = 10000;
        while ((temp5 = arg0->unk_28) != NULL) {
            temp9 = 0;
            while (temp5 != NULL) {
                temp10 = temp5;
                temp5 = temp5->unk_18;
                if (temp10->unk_24 == 0) {
                    func_002F0A20(temp10);
                    func_002F0AC0(temp10);
                    func_00304530(func_00304590(), temp10);
                } else {
                    ++temp9;
                }
            }
            if (temp9 == temp4) {
                for (unk_002ED5A0_2 *temp11 = arg0->unk_28; temp11; temp11 = temp11->unk_18) {
                    while (temp11->unk_24) {
                        --temp11->unk_24;
                    }
                }
            }
            temp4 = temp9;
        }
        temp7 = *func_002EC820(arg0->unk_3C);
        while (temp12 = func_002EC810(arg0->unk_3C), temp7 != temp12) {
            if (temp7->unk_10) {
                temp7->unk_10->unk_vf08(1);
            }
            func_002CFEF0(&temp7);
        }
        if (D_00360634) {
            D_00360634->unk_vf1C(arg0->unk_38);
        }
        if (&arg0->unk_4C != NULL) {
            if (arg0->unk_4C) {
                func_00308C80(arg0->unk_4C);
            }
        }
        if (arg0->unk_3C != NULL) {
            if (arg0->unk_3C != NULL) {
                if (arg0->unk_3C != NULL) {
                    func_002ED8A0(arg0->unk_3C, -1);
                }
            }
        }
        func_002F0F70(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
