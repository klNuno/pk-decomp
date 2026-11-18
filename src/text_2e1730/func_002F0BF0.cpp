/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 *unk_10;
    u8 pad_14[0x30];
    s32 *unk_44;
} unk_func_002F0BF0_1;

class unk_func_002F0BF0_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);

    unk_func_002F0BF0_1 *unk_04;
};

typedef struct {
    unk_func_002F0BF0_2 *unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0A;
    u8 unk_0B;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[0x12];
    unk_func_002F0BF0_2 *unk_20;
} unk_func_002F0BF0_3;

typedef struct {
    u8 pad_00[0x10];
} unk_func_002F0BF0_4;

typedef struct {
    s32 *unk_00;
    unk_func_002F0BF0_4 *unk_04;
} unk_func_002F0BF0_5;

extern "C" {
extern s32 *D_0035BE28[];
extern u8 D_0035BE30[];
extern u8 D_0035BE40[];
extern u8 D_0035BE48[];
extern u8 D_0035BE50[];
extern s8 D_00360670;
extern s32 *D_00360674;
extern s8 D_00360678;
extern s32 *D_0036067C;
extern s8 D_00360680;
extern s32 *D_00360684;
extern s8 D_00360688;
extern u8 D_007BEED8[];
extern u8 D_007BEEE8[];
extern u8 D_007BEEF8[];
extern u8 D_007BEF08[];

void func_002CD2A0(void *);
void __register_global_object(void *, void *, void *);
void func_002CDB60(s32 **, const u8 *, s32 *);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(s32 **, void *, s32, s32, s32);
s32 func_002F1100(unk_func_002F0BF0_4 *);
void func_002F11A0(unk_func_002F0BF0_4 *);
s32 func_002F12B0(s32 **, s32 **);
}

extern "C" void func_002F0BF0(unk_func_002F0BF0_3 *arg0) {
    unk_func_002F0BF0_4 temp;
    unk_func_002F0BF0_4 temp2;
    unk_func_002F0BF0_5 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    s32 temp8;

    s32 **temp9 = &arg0->unk_00->unk_04->unk_10;
    if (D_00360670 == 0) {
        func_002CDB60(&D_00360674, D_0035BE30, &temp5);
        __register_global_object(&D_00360674, (void *)func_002CD2A0, D_007BEED8);
        D_00360670 = 1;
    }
    if (D_00360678 == 0) {
        func_002CDB60(&D_0036067C, D_0035BE40, &temp6);
        __register_global_object(&D_0036067C, (void *)func_002CD2A0, D_007BEEE8);
        D_00360678 = 1;
    }
    if (D_00360680 == 0) {
        func_002CDB60(&D_00360684, D_0035BE48, &temp7);
        __register_global_object(&D_00360684, (void *)func_002CD2A0, D_007BEEF8);
        D_00360680 = 1;
    }

    arg0->unk_08 = func_002F12B0(temp9, &D_00360674) != 0;
    arg0->unk_09 = func_002F12B0(temp9, &D_0036067C) != 0;
    func_002F11A0(&temp);
    arg0->unk_00->unk_vf0C(0x1F, &temp);
    arg0->unk_0A = func_002F1100(&temp);
    arg0->unk_00->unk_vf0C(0x1E, &temp);
    if (func_002F1100(&temp) != 0) {
        arg0->unk_0B = 1;
        func_002F12B0(temp9, &D_00360684);
    } else {
        arg0->unk_0B = 0;
    }

    if (D_00360688 == 0) {
        func_002CDB60(D_0035BE28, D_0035BE50, &temp8);
        __register_global_object(D_0035BE28, (void *)func_002CD2A0, D_007BEF08);
        D_00360688 = 1;
    }
    if (arg0->unk_20 != 0) {
        s32 **temp10 = &arg0->unk_20->unk_04->unk_44;
        s32 temp11 = *D_0035BE28[0];
        bool temp12 = false;

        if (**temp10 == temp11) {
            s32 temp13 = func_002CEA20(D_0035BE28[0]);
            if (func_002CEAF0(temp10, 0, **temp10, temp13, temp11) == 0) {
                temp12 = true;
            }
        }
        arg0->unk_0D = temp12;
        if (arg0->unk_0D != 0) {
            func_002F11A0(&temp2);
            temp3.unk_00 = &temp4;
            temp3.unk_04 = &temp2;
            arg0->unk_0C = 1;
            temp4 = 6;
            arg0->unk_20->unk_vf0C(0x3EA, &temp3);
            if ((u8)func_002F1100(&temp2) == 1) {
                arg0->unk_0C = 0;
            }
            if (arg0->unk_0C != 0) {
                temp4 = 0xC;
                arg0->unk_20->unk_vf0C(0x3EA, &temp3);
                if ((u8)func_002F1100(&temp2) == 1) {
                    arg0->unk_0C = 0;
                }
            }
            if (arg0->unk_0C != 0) {
                temp4 = 0x12;
                arg0->unk_20->unk_vf0C(0x3EA, &temp3);
                if ((u8)func_002F1100(&temp2) == 1) {
                    arg0->unk_0C = 0;
                }
            }
            if (arg0->unk_0C != 0) {
                temp4 = 0x16;
                arg0->unk_20->unk_vf0C(0x3EA, &temp3);
                if ((u8)func_002F1100(&temp2) == 1) {
                    arg0->unk_0C = 0;
                }
            }
        }
    }
}
