/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C, unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20, unk_24, unk_28, unk_2C;
} unk_func_00266600_0;

extern unk_func_00266600_0 D_00630D20[];
extern s32 D_0035F5B0;
extern s32 D_0035FD60;
extern s32 D_0035FD70;
extern u8 D_0035FF20;

f32 func_00114D70(f32);
f32 func_00115110(f32);
void func_00167A70(f32);
s32 func_0016BE80(s32);
void func_0017AAD0(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_0017C9A0(void);
void func_00191070(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_001D2820(s32);
void func_001D28B0(s32);
f32 func_001E60E0(f32);

void func_00266600(s32 arg0) {
    s32 i = 0xC7;

    do {
        unk_func_00266600_0 *temp0;
        if (i == D_0035F5B0) {
            func_001D2820(arg0);
        }

        temp0 = &D_00630D20[i];
        if (temp0->unk_18 > 0 && D_0035FF20 == temp0->unk_1C) {
            s32 *temp14;
            func_00167A70((f32)temp0->unk_18);
            D_0035FD60 = 1;
            temp14 = &temp0->unk_14;
            D_0035FD70 = func_0016BE80(temp0->unk_14);

            if (i < 0x96) {
                func_00191070(arg0, *temp14, temp0->unk_00, temp0->unk_04, temp0->unk_08,
                              temp0->unk_0C, temp0->unk_20, temp0->unk_28, temp0->unk_24, temp0->unk_2C);
            } else if (i == 0xC7) {
                func_00191070(arg0, *temp14, temp0->unk_00, temp0->unk_04, temp0->unk_08,
                              temp0->unk_0C, temp0->unk_20, temp0->unk_28, temp0->unk_24, temp0->unk_2C);
            } else {
                f32 *temp17;
                f32 *temp16;
                f32 *temp15;
                f32 temp2;
                f32 temp1;
                f32 temp3;

                temp16 = &temp0->unk_0C;
                temp15 = &temp0->unk_04;
                temp17 = &temp0->unk_08;
                temp2 = *temp16 - *temp15;
                temp1 = *temp17 - temp0->unk_00;
                temp3 = func_001E60E0(temp2 * temp2 + temp1 * temp1) / 2.0f;
                {
                    f32 *temp18 = &temp0->unk_10;
                    f32 temp4 = temp3 * func_00114D70(0.7853982f + temp0->unk_10);
                    f32 temp5 = temp3 * func_00115110(0.7853982f + *temp18);
                    f32 temp6 = temp3 * func_00114D70(2.3561945f + *temp18);
                    f32 temp7 = temp3 * func_00115110(2.3561945f + *temp18);
                    f32 temp8 = (temp0->unk_00 + *temp17) / 2.0f;
                    f32 temp9 = (*temp15 + *temp16) / 2.0f;
                    f32 temp10 = temp8 + temp4;
                    f32 temp12 = temp9 + temp5;
                    f32 temp11 = temp8 - temp4;
                    f32 temp13 = temp9 - temp5;

                    func_0017AAD0(arg0, *temp14, temp10, temp12, temp8 + temp6, temp9 + temp7,
                                  temp11, temp13, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f);
                    func_0017AAD0(arg0, *temp14, temp11, temp13, temp8 - temp6, temp9 - temp7,
                                  temp10, temp12, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                }
            }
        }
        if (i == D_0035F5B0) {
            func_001D28B0(arg0);
        }
        i--;
    } while (i >= 0);

    func_0017C9A0();
    D_0035FD60 = 0;
    D_0035FD70 = 0;
}
