/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001A0710_0;

typedef struct {
    unk_001A0710_0 *unk_00;
    u8 pad_04[0x1C];
    s16 unk_20;
    u8 pad_22[0xA];
    unk_001A0710_0 unk_2C;
} unk_001A0710_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} unk_001A0710_2;

unk_001A0710_2 *HIE_fn_hGetSuperObjectObject(s32);
void func_0011CBB0(void *, const char *);
void func_00155EC0(s32, unk_001A0710_0 *);
void func_00164F50(void *, s32, s32);
void func_001653B0(void);
void func_00167450(s32, unk_001A0710_1 *, void *);
s32 func_001979C0(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_00199130(s32);
s32 func_0019FB80(s32);
unk_001A0710_1 *func_001A0700(void);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001BE470(s32);
extern char D_0034A0E0[];
extern char D_0034A0F8[];
extern unsigned char D_0035FF3C;
extern unk_001A0710_1 *D_0035FF44;
extern unk_001A0710_1 *D_0035FF48;

void func_001A0710(s32 arg0, s32 arg1) {
    u8 temp[0x108];
    unk_001A0710_0 temp2;
    s32 temp13;
    s16 temp5;
    s32 temp6;
    s32 temp7;
    s32 temp8;
    void *temp9;
    s32 temp10;
    s32 temp11;
    char *temp12;
    s32 temp3;
    s32 temp4;

    if (!D_0035FF3C) {
        D_0035FF48 = func_001A0700();
        D_0035FF44 = func_001A0700();
        D_0035FF3C = 1;
        func_001653B0();
    }
    func_0011CBB0(temp, D_0034A0E0);
    func_00164F50(temp, 0x1C2, 0x1B3);
    temp3 = func_001A7D60(func_001A7D80());
    temp13 = func_001BE470(HIE_fn_hGetSuperObjectObject(temp3)->unk_20);
    temp11 = 0;
    temp4 = temp6 = func_00198540(temp13);
    while (temp6 != 0) {
        temp7 = func_00198500(temp6);
        temp8 = func_0019FB80(func_00199130(HIE_fn_hGetSuperObjectObject(temp7)->unk_00));
        temp9 = HIE_fn_hGetSuperObjectObject(temp7)->unk_0C;
        if (temp9 != NULL) {
            temp12 = D_0034A0F8;
        }
        if (temp8 == 0) {
            func_00155EC0(func_001979C0(temp7), &temp2);
            for (temp5 = 0; temp5 < D_0035FF44->unk_20; temp5++) {
                D_0035FF44->unk_00[temp5].unk_00 = temp2.unk_00 + D_0035FF48->unk_00[temp5].unk_00;
                D_0035FF44->unk_00[temp5].unk_04 = temp2.unk_04 + D_0035FF48->unk_00[temp5].unk_04;
                D_0035FF44->unk_00[temp5].unk_08 = temp2.unk_08 + D_0035FF48->unk_00[temp5].unk_08;
            }
            D_0035FF44->unk_2C.unk_00 = D_0035FF48->unk_2C.unk_00 + temp2.unk_00;
            D_0035FF44->unk_2C.unk_04 = D_0035FF48->unk_2C.unk_04 + temp2.unk_04;
            D_0035FF44->unk_2C.unk_08 = D_0035FF48->unk_2C.unk_08 + temp2.unk_08;
            func_00167450(arg0, D_0035FF44, (void *)arg1);
        }
        temp11++;
        temp10 = temp6 = func_00198520(temp6);
        (void)temp10;
    }
}
