/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08, unk_0C;
} unk_func_00271610_0;

typedef struct {
    s8 *unk_00;
    f32 unk_04, unk_08;
    u8 pad_0C[8];
    union {
        u32 unk_14;
        u8 unk_14_bytes[4];
    } unk_14;
    u8 unk_18;
} unk_func_00271610_1;

extern void TXT_vDrawAStringOnLine(s8 *, unk_func_00271610_1 *, f32, f32);
extern s8 *func_0011DB00(s8 *, char *);
extern void func_00166C80(void *, f32 *);
extern void func_00167A70(f32);
extern f32 func_00271B20(s8 *);
extern char D_0034EB70[];
extern f32 D_0035F5D0, D_003602E4, D_003602F0;
extern s32 D_003602D4, D_003603C4;
extern void *D_003602D8;
extern unk_func_00271610_0 *D_003602E8;
extern u8 D_003602F4, D_003602F8;
extern f32 D_007A5DD0[], D_007A5DD4[], D_007A5DD8[], D_007A5DDC[];
extern s8 D_007A5DE0[];
extern f32 D_007A7E54[], D_007A7E5C[];

void func_00271610(unk_func_00271610_0 *arg0, unk_func_00271610_1 *arg1) {
    s8 *temp0;
    u8 temp1;
    s8 *temp2, *temp3;
    f32 temp4, temp5, temp11, temp14, temp16;

    D_003602E8 = arg0;
    if (D_003603C4 != 0) {
        D_003602F4 = 0;
        D_003602F0 = 0.6f;
    } else {
        D_003602F4 = 0;
        D_003602F0 = 1.0f;
    }
    D_0035F5D0 = 0.75f * ((f32)arg0->unk_0C / (f32)arg0->unk_08);
    temp11 = (f32)((arg1->unk_14.unk_14 >> 16) & 0xFF);
    temp11 *= 0.003921569f;
    D_007A5DD0[0] = temp11;
    temp11 = (f32)((arg1->unk_14.unk_14 >> 8) & 0xFF);
    temp14 = 0.003921569f;
    temp16 = temp11 * temp14;
    D_007A5DD4[0] = temp16;
    temp11 = (f32)(u32)arg1->unk_14.unk_14_bytes[0];
    temp14 = 0.003921569f;
    temp16 = temp11 * temp14;
    D_007A5DDC[0] = 1.0f;
    D_007A5DD8[0] = temp16;
    func_00166C80(D_003602D8, D_007A5DD0);
    func_00167A70((f32)(u32)arg1->unk_18);
    temp3 = arg1->unk_00;
    if (temp3 != NULL) {
        temp4 = arg1->unk_08 * (f32)arg0->unk_08 / 1000.0f;
        if (D_003602D4 != 0) {
            if (temp4 < D_007A7E54[0]) {
                D_007A7E54[0] = temp4;
            }
            if (!(temp4 <= D_007A7E5C[0])) {
                D_007A7E5C[0] = temp4;
            }
        }
        temp1 = 1;
        D_003602F8 = 0x32;
        do {
            u16 temp6;
            s8 *temp8;
            s32 temp12;
            u32 temp7;

            D_003602E4 = 0.0f;
            temp0 = func_0011DB00(temp3, D_0034EB70);
            if (temp0 != NULL) {
                temp6 = temp0 - temp3;
                temp0 += 2;
            } else {
                s32 temp9;
                s8 *temp10;

                temp10 = temp3;
                temp9 = 0;
                while (*temp10++ != 0) {
                    temp9++;
                }
                temp6 = temp9;
            }
            temp8 = D_007A5DE0;
            temp7 = temp6;
            temp12 = temp7 - 1;
            if (temp7 != 0) {
                do {
                    *temp8++ = *temp3++;
                } while (temp12-- != 0);
            }
            temp2 = D_007A5DE0;
            temp2[temp7] = 0;
            temp3 = temp0;
            temp5 = arg1->unk_04 * (f32)arg0->unk_0C / 1000.0f;

            if ((u8)D_007A5DE0[0] == 0x5C) {
                switch ((u8)D_007A5DE0[1]) {
                case 0x6A:
                    switch ((u8)D_007A5DE0[2]) {
                    case 0x63:
                        temp1 = 3;
                        break;
                    case 0x6C:
                        temp1 = 1;
                        break;
                    case 0x72:
                        temp1 = 2;
                        break;
                    }
                    temp2 += 3;
                    break;
                }
            }
            switch (temp1) {
            case 3:
                temp5 -= 0.5f * func_00271B20(temp2);
                break;
            case 1:
                break;
            case 2:
                temp5 -= func_00271B20(temp2);
                break;
            }
            TXT_vDrawAStringOnLine(temp2, arg1, temp5, temp4);
            temp4 += 4.0f + D_003602E4;
        } while (temp0 != NULL);
    }
    D_0035F5D0 = 1.0f;
}
