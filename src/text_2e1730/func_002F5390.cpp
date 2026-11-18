/* profile: opt_noprop */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002F5390_0;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    unk_func_002F5390_0 *unk_0C;
} unk_func_002F5390_1;

typedef struct {
    u8 pad_00[0xC];
    unk_func_002F5390_1 unk_0C;
} unk_func_002F5390_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_002F5390_1 unk_10;
} unk_func_002F5390_3;

typedef struct {
    u8 pad_00[0x14];
    unk_func_002F5390_1 unk_14;
} unk_func_002F5390_4;

class unk_func_002F5390_5 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32 *);
    u32 unk_04[2];
};

typedef struct {
    s32 unk_00;
    u32 unk_04[3];
    unk_func_002F5390_5 *unk_10;
} unk_func_002F5390_6;

extern "C" {

void c4sdk_malloc(void *, s32);
void func_002CD690(void *, void *, s32, s32);
void func_002CDB60(void *, s32, void *);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(void *, s32, s32, s32, s32);
void func_002CFEF0(void *);
void func_002D0DA0(void *, void *);
void func_002EA670(void *, s32);
void func_002EA6F0(void *, s32, void *, s32, s32);
unk_func_002F5390_5 *func_002F4230(void *, void *);
void *func_002F42C0();
void func_002F52C0(void *, void *);
unk_func_002F5390_3 *func_002F56B0(void *);
unk_func_002F5390_3 **func_002F56C0(void *);
unk_func_002F5390_2 *func_002F56D0(void *);
unk_func_002F5390_4 *func_002F5750(void *);
void *func_002F5760(void *);
void func_002F5770(void *, unk_func_002F5390_2 *);
unk_func_002F5390_2 **func_002F5780(void *);
void func_002F5790(void *, s32);
void func_002F57F0(void *, s32);
void func_002F5C20(void *, void *, void *);
void func_002F5CE0(void *, void *, void *);
void func_002F5ED0(void *, void *, void *);
void func_002F6370(void *, void *, void *);
void func_002F6400(void *, void *, void *);
void func_003043C0(void *, void *);
void func_003044A0(void *, void *);
void func_00309650(void *);
s32 func_00309700(void *, s32, s32);
void func_00309BC0(void *, s32, s32);
void func_0030A140(void *, s32);
extern s32 *D_003606E8;
extern s32 D_007BEFD0[];

void func_002F5390(u8 *arg0, void *arg1) {
    u32 sp50[4];
    u32 sp60[4];
    unk_func_002F5390_1 sp70;
    unk_func_002F5390_6 sp80;
    u32 sp98[2];
    struct {
        u32 unk_00[2];
        unk_func_002F5390_5 *unk_08;
    } spA0;
    unk_func_002F5390_2 *spAC;
    unk_func_002F5390_3 *spB0;
    unk_func_002F5390_0 *spB4;
    void *spB8;
    unk_func_002F5390_4 *spBC;
    u32 spC0;
    u32 spC4;
    u32 spC8;
    u32 spCC;
    unk_func_002F5390_2 *spD0;
    unk_func_002F5390_2 *spD4;
    u32 spD8;
    u32 spDC;
    unk_func_002F5390_1 *temp0;
    s32 *temp7;
    unk_func_002F5390_5 *temp1;
    s32 *temp2;
    unk_func_002F5390_1 *temp5;
    bool temp4;
    s32 temp3;
    unk_func_002F5390_3 *temp8;
    u32 *temp6;

    func_002F6400(sp50, &spDC, &spD8);
    func_002F57F0(&spD8, -1);
    func_002F5770(&spD0, *func_002F5780(arg1));
    spAC = spD0;
    while (func_002F5770(&spD4, func_002F56D0(arg1)), spAC != spD4) {
        func_002F5C20(&spB8, arg0, &spAC->unk_0C);
        if (spB8 == func_002F5760(arg0)) {
            func_002F5CE0(&spBC, arg0 + 0x10, &spAC->unk_0C);
            if (spBC != func_002F5750(arg0 + 0x10)) {
                temp0 = &spBC->unk_14;
                func_003043C0(&sp70, temp0);
                sp80.unk_00 = temp0->unk_0C->unk_0C;
                temp6 = sp80.unk_04;
                func_003043C0(temp6, &sp70);
                func_002F6370(&spC0, sp50, &sp80);
                if (temp6 != 0 && temp6 + 3 != 0) {
                    c4sdk_malloc(temp6 + 3, 0);
                }
                if (&sp70.unk_0C != 0) {
                    c4sdk_malloc(&sp70.unk_0C, 0);
                }
            }
        }
        func_002CFEF0(&spAC);
    }
    spB0 = *func_002F56C0(sp50);
    while (temp8 = func_002F56B0(sp50), spB0 != temp8) {
        temp2 = (s32 *)spB0->unk_10.unk_0C;
        temp5 = &spB0->unk_10;
        temp3 = *temp2;
        temp4 = false;
        if (*D_003606E8 == temp3) {
            if (func_002CEAF0(&D_003606E8, 0, *D_003606E8, func_002CEA20(temp2), temp3) == 0) {
                temp4 = true;
            }
        }
        if (!temp4) {
            func_00309650(D_007BEFD0);
            func_0030A140(D_007BEFD0, 1);
            if (func_00309700(D_007BEFD0, temp5->unk_0C->unk_0C, 0) == 0) {
                func_002F5790(sp50, -1);
                return;
            }
            func_002CD690(&D_003606E8, &temp5->unk_0C, 0, -1);
        }
        func_00309BC0(D_007BEFD0, temp5->unk_08, 0);
        temp7 = D_007BEFD0;
        func_002EA6F0(sp60, 0, &D_003606E8, D_007BEFD0[0], 0);
        func_002D0DA0(&spB4, &spC8);
        func_003044A0(temp7, &spB4);
        func_002CDB60(&spC4, spB4->unk_0C, &spCC);
        temp1 = func_002F4230(func_002F42C0(), &spC4);
        c4sdk_malloc(&spC4, 0);
        temp1->unk_vf10(temp7);
        func_002F52C0(&spA0, temp1->unk_04);
        spA0.unk_08 = temp1;
        func_002F5ED0(sp98, arg0, &spA0);
        c4sdk_malloc(&spB4, 0);
        func_002EA670(sp60, -1);
        func_002CFEF0(&spB0);
    }
    func_002F5790(sp50, -1);
}

}
