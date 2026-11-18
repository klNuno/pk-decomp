#include "common.h"

extern s32 D_00341400[];
extern s32 D_00341480[];
extern void *(*D_0035F644)(u32);
extern void (*D_0035F64C)(void *);

void *memcpy(void *, const void *, u32);
void *memset(void *, s32, u32);
void func_002BE0E0(u8 *, u8 *);

s32 func_002BD9E0(s32 arg0, s32 arg1, const u8 *arg2, u8 *arg3)
{
    s32 *temp0;
    u32 *temp1;
    s32 temp17;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp9;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    s32 temp8;
    s32 temp18;
    s32 temp10;
    u8 temp11[0x100];
    u8 temp12[0x100];

    temp0 = D_0035F644(0x80);
    temp1 = D_0035F644(0x80);
    for (temp17 = 0, temp2 = 0; temp2 < 4; temp2++, temp17 += 8) {
        for (temp3 = 0; temp3 < 8; temp3++) {
            temp4 = D_00341480[temp17 + temp3];
            temp0[temp4] = temp3;
            temp1[temp4] = (u32)temp2;
        }
    }
    temp5 = arg0 / 16;
    temp6 = arg1 / 16;
    memset(temp11, 0, sizeof(temp11));
    memset(temp12, 0, sizeof(temp12));
    if ((temp7 = 0) < temp6) {
        temp18 = 0;
        do {
            for (temp8 = 0; temp8 < temp5; temp8++) {
                u8 *temp13 = temp11;
                const u8 *temp14 = arg2 + ((u32)temp18 << 7) + temp8 * 16;
                const u8 *temp16;
                u8 *temp15;
                temp9 = D_00341400[temp8 + temp7 * temp5];
                for (temp10 = 0; temp10 < 16; temp10++) {
                    memcpy(temp13, temp14, 0x10);
                    temp13 += 0x10;
                    temp14 += 0x80;
                }
                func_002BE0E0(temp11, temp12);
                temp16 = temp12;
                temp15 = arg3 + temp1[temp9] * 2048 + temp0[temp9] * 32;
                for (temp10 = 0; temp10 < 8; temp10++) {
                    memcpy(temp15, temp16, 0x20);
                    temp16 += 0x20;
                    temp15 += 0x100;
                }
            }
            temp7++;
            temp18 += 16;
        } while (temp7 < temp6);
    }
    D_0035F64C(temp0);
    D_0035F64C(temp1);
    return 0;
}
