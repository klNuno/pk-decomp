/* profile: opt_300 */
#include "common.h"

typedef struct unk_002702F0_0 unk_002702F0_0;

struct unk_002702F0_0 {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[4];
    void *unk_0C;
    u8 pad_10[4];
    void (*unk_14)(unk_002702F0_0 *);
    u8 pad_18[0x14];
    s32 unk_2C;
    f32 unk_30;
    u8 pad_34[0x9C];
};

typedef struct {
    u8 pad_00[4];
    void (*unk_04)(s32);
    u8 pad_08[4];
    void (*unk_0C)(s32);
    u8 pad_10[0xC];
} unk_002702F0_1;

void func_0011B418(const char *);
f32 func_00167A50(void);
void func_00167A70(f32);
void func_00170090(s32, s32);
void func_0017D910(void);
s32 func_00267EB0(s32);
void func_00268140(void);

extern char D_0034EB50[];
extern f32 D_003602B0;
extern u32 D_003602C0;
extern u32 D_003602C4;
extern s32 D_003602C8;
extern s32 D_0075B450[];
extern u8 D_0075B480[];
extern unk_002702F0_1 D_0075B4C0[];
extern unk_002702F0_0 D_0075BA40[];

void func_002702F0(s32 arg0)
{
    f32 temp0;
    u32 i;

    D_003602C8 = arg0;
    temp0 = func_00167A50();
    for (i = 0; i < 0x32; i++) {
        D_0075B480[i] = 0;
    }
    for (i = 0; i < D_003602C0; i++) {
        D_0075BA40[i].unk_2C = 0;
    }
    func_0017D910();
    {
        u32 j;

        for (j = 0; j < D_003602C4; j++) {
            s32 temp1 = func_00267EB0(D_0075B450[j]);

            if (temp1 == 0) {
                func_0011B418(D_0034EB50);
            } else {
                func_00170090(D_003602C8, temp1);
            }
        }
    }
    func_00268140();
    {
        s32 temp1;
        u32 temp2;
        u32 temp3;

        do {
            temp1 = 0;
            for (temp3 = 0; temp3 < D_003602C0 && D_0075B480[D_0075BA40[temp3].unk_04] == 1; temp3++) {
            }
            if (temp3 < D_003602C0) {
                u32 j;
                unk_002702F0_0 *temp9;
                u32 temp4;
                s32 temp10;
                s32 temp7;
                u32 temp6;
                void *temp8;
                u32 temp5;

                temp1 = 1;
                temp2 = temp3 * sizeof(unk_002702F0_0);
                temp4 = ((unk_002702F0_0 *)((u8 *)D_0075BA40 + temp2))->unk_04;
                D_0075B480[temp4] = temp1;
                do {
                    j = temp3;
                    temp5 = D_003602C0;
                    temp8 = NULL;
                    temp6 = temp2;
                    temp7 = 0;
                    for (; j < D_003602C0; temp6 += sizeof(unk_002702F0_0), j++) {
                        temp9 = (unk_002702F0_0 *)((u8 *)D_0075BA40 + temp6);

                        if (temp9->unk_04 == temp4 && temp9->unk_2C == 0) {
                            temp10 = 0;

                            if (temp7 == 0) {
                                if (D_0075B4C0[temp4].unk_04 != NULL) {
                                    D_0075B4C0[temp4].unk_04(arg0);
                                }
                                temp8 = temp9->unk_0C;
                                temp7 = 1;
                            } else if (temp9->unk_0C != temp8) {
                                temp5 = j;
                                temp10 = 1;
                            }
                            D_003602B0 = temp9->unk_30;
                            if (temp10 == 0) {
                                if (temp9->unk_14 != NULL) {
                                    temp9->unk_14(temp9);
                                }
                                temp9->unk_2C = 1;
                            }
                        }
                    }
                    if (temp7 != 0 && D_0075B4C0[temp4].unk_0C != NULL) {
                        D_0075B4C0[temp4].unk_0C(arg0);
                    }
                } while (temp5 != D_003602C0);
            }
        } while (temp1 != 0);
    }
    func_0017D910();
    D_003602B0 = 1.0f;
    func_00167A70(temp0);
}
