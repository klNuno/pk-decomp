/* profile: opt_300 */
#include "common.h"

class unk_func_002FB5D0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

typedef struct {
    u8 pad_00[0xC];
    s8 unk_0C[4];
    s32 unk_10;
    s32 unk_14;
} unk_func_002FB5D0_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002FB5D0_3;

typedef struct {
    u32 unk_00;
    unk_func_002FB5D0_3 unk_04;
} unk_func_002FB5D0_4;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 unk_24;
    unk_func_002FB5D0_3 unk_28;
    u8 unk_30;
    u8 pad_31[3];
    u8 unk_34[0x10];
    u8 unk_44;
    u8 unk_45;
} unk_func_002FB5D0_5;

extern "C" {
extern char D_0035C8B0[];
extern char D_0035C8F0[];
extern char D_0035C910[];
extern char D_0035C920[];

void c4sdk_malloc(s32 *, s32);
void func_0011B418(const char *, ...);
void func_002CFEF0(unk_func_002FB5D0_1 **);
void func_002D0DA0(s32 *, s32 *);
void func_002F20D0(unk_func_002FB5D0_5 *, unk_func_002FB5D0_0 *);
void func_002F5220(unk_func_002FB5D0_3 *, unk_func_002FB5D0_0 *);
void func_002F52C0(unk_func_002FB5D0_3 *, unk_func_002FB5D0_3 *);
void func_002F52E0(unk_func_002FB5D0_3 *);
unk_func_002FB5D0_1 *func_002FB5A0(void *);
unk_func_002FB5D0_1 **func_002FB5B0(void *);
void func_002FBD10(...);
void func_002FBF70(void *);
void func_002FC070(...);
u32 func_002FD190(s32);
s32 func_002FD1B0(void);
void func_003044A0(unk_func_002FB5D0_0 *, s32 *);

void func_002FB5D0(unk_func_002FB5D0_5 *arg0, unk_func_002FB5D0_0 *arg1) {
    unk_func_002FB5D0_3 temp0;
    unk_func_002FB5D0_3 temp1;
    unk_func_002FB5D0_4 temp2;
    s32 temp3;
    u32 temp4;
    u32 temp5;
    u32 temp6;
    unk_func_002FB5D0_1 *temp7;
    unk_func_002FB5D0_1 *temp8;
    s32 temp9;
    u32 temp10;
    u32 temp11;
    u32 temp12;
    u32 temp13;
    u32 temp14;
    u32 temp15;
    u32 temp16;
    u32 temp17;
    u32 temp18;

    func_002F20D0(arg0, arg1);
    if (arg0->unk_10 > 1) {
        func_002D0DA0(&temp3, &temp9);
        func_003044A0(arg1, &temp3);
        c4sdk_malloc(&temp3, 0);
    }
    arg1->unk_vf0C(&arg0->unk_18, 4, 1);
    arg1->unk_vf0C(&arg0->unk_20, 4, 1);
    arg1->unk_vf0C(&arg0->unk_1C, 4, 1);
    arg1->unk_vf0C(&temp10, 4, 1);
    arg0->unk_24 = temp10 != 0;
    if (arg0->unk_10 > 1) {
        arg1->unk_vf0C(&temp11, 4, 1);
        arg0->unk_45 = temp11 != 0;
        arg1->unk_vf0C(&temp12, 4, 1);
        arg0->unk_44 = temp12 != 0;
    } else {
        arg1->unk_vf0C(&temp13, 4, 1);
        arg1->unk_vf0C(&temp14, 4, 1);
        arg1->unk_vf0C(&temp15, 4, 1);
        arg1->unk_vf0C(&temp16, 4, 1);
        arg1->unk_vf0C(&temp17, 4, 1);
    }

    func_002F5220(&arg0->unk_28, arg1);
    arg1->unk_vf0C(&temp18, 4, 1);
    arg0->unk_30 = temp18 != 0;
    if (arg0->unk_30 != 0) {
        u32 temp19;
        unk_func_002FB5D0_1 *temp20;

        func_002FBF70(arg0->unk_34);
        arg1->unk_vf0C(&temp4, 4, 1);
        for (temp19 = 0; temp19 < temp4; temp19++) {
            func_002F52E0(&temp0);
            arg1->unk_vf0C(&temp5, 4, 1);
            func_002F5220(&temp0, arg1);
            temp2.unk_00 = temp5;
            func_002F52C0(&temp2.unk_04, &temp0);
            func_002FC070(&temp1, arg0->unk_34, &temp2);
        }

        temp6 = func_002FD190(func_002FD1B0());
        func_002FBD10(&temp8, arg0->unk_34, &temp6);
        temp20 = temp8;
        if (temp20 == func_002FB5A0(arg0->unk_34)) {
            func_0011B418(D_0035C8B0, ((s8 *)&temp6)[3], ((s8 *)&temp6)[2],
                          ((s8 *)&temp6)[1], ((s8 *)&temp6)[0], arg0->unk_04, arg0->unk_08);
            func_0011B418(D_0035C8F0);
            temp7 = *func_002FB5B0(arg0->unk_34);
            unk_func_002FB5D0_1 *temp21;
            unk_func_002FB5D0_1 *temp22;
            while ((temp21 = func_002FB5A0(arg0->unk_34), temp22 = temp7, temp22 != temp21)) {
                func_0011B418(D_0035C910, temp22->unk_0C[3], temp22->unk_0C[2], temp22->unk_0C[1], temp22->unk_0C[0]);
                func_002CFEF0(&temp7);
            }
            func_0011B418(D_0035C920);
            temp20 = *func_002FB5B0(arg0->unk_34);
        }
        arg0->unk_28.unk_00 = temp20->unk_10;
        arg0->unk_28.unk_04 = temp20->unk_14;
    }
}
}
