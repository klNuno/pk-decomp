/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u16 unk_00;
    u16 unk_02;
} unk_0027D860_0;

extern unk_0027D860_0 D_0033FD60[];
extern u16 D_0033FD70[];
extern char D_0034F3E0[], D_0034F400[], D_0034F430[];
void func_0011B418(const char *, ...);

void func_0027D860(s8 *arg0, u16 arg1, s8 *arg2, u16 *arg3)
{
    s32 temp0;
    s32 temp1, temp2;
    u8 temp3, temp4;
    u16 temp5, temp6;
    s8 *temp7;

    temp7 = arg0;
    for (temp5 = 0; temp5 < arg1; temp5++) {
        *(u8 *)temp7++ = 0x81;
        *temp7++ = 0x40;
    }
    *arg3 = 0;

    for (temp5 = 0; *arg2 && temp5 < arg1;) {
        temp4 = 0x30;
        temp3 = 0;
        temp0 = *arg2++;
        if (temp0 == 0xA) {
            if (*arg3) {
                temp1 = 1;
                func_0011B418(D_0034F3E0, 0x3B3);
                func_0011B418(D_0034F400);
                do {
                } while (temp1);
            }
            *arg3 = (s16)temp5 * 2;
            continue;
        }
        if (temp0 >= 0x20 && temp0 < 0x30) {
            temp3 = 1;
        } else if (temp0 >= 0x30 && temp0 < 0x3A) {
            temp4 = 0;
        } else if (temp0 >= 0x3A && temp0 < 0x41) {
            temp3 = 0xB;
        } else if (temp0 >= 0x41 && temp0 < 0x5B) {
            temp4 = 1;
        } else if (temp0 >= 0x5B && temp0 < 0x61) {
            temp3 = 0x25;
        } else if (temp0 >= 0x61 && temp0 < 0x7B) {
            temp4 = 2;
        } else if (temp0 >= 0x7B && temp0 < 0x7F) {
            temp3 = 0x3F;
        } else {
            temp2 = 1;
            func_0011B418(D_0034F3E0, 0x3CC);
            func_0011B418(D_0034F430);
            do {
            } while (temp2);
            break;
        }
        if (temp3) {
            temp6 = D_0033FD70[(temp0 - 0x20) - (temp3 - 1)];
        } else {
            temp6 = (u16)(temp0 + (s16)D_0033FD60[temp4].unk_00 - (s16)D_0033FD60[temp4].unk_02);
        }
        *arg0++ = (s8)((temp6 & 0xFF00) >> 8);
        *(u8 *)arg0++ = (u8)(s8)temp6;
        temp5++;
    }
    *arg0++ = 0;
    *arg0++ = 0;
}
