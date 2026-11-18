/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0012F5D0_0 unk_func_0012F5D0_0;
typedef struct unk_func_0012F5D0_1 unk_func_0012F5D0_1;

struct unk_func_0012F5D0_0 {
    u8 pad_00[4];
    unk_func_0012F5D0_1 *unk_04;
};

typedef struct unk_func_0012F5D0_2 {
    u8 pad_00[2];
    s8 unk_02;
    u8 pad_03;
    unk_func_0012F5D0_0 *unk_04;
} unk_func_0012F5D0_2;

struct unk_func_0012F5D0_1 {
    u8 pad_00[0x20];
    unk_func_0012F5D0_2 *unk_20;
    s32 unk_24;
    unk_func_0012F5D0_0 **unk_28;
    s32 unk_2C;
    u8 pad_30[0x144];
    s32 unk_174;
    s32 unk_178;
    s32 unk_17C;
    s32 unk_180;
};

s32 func_0012C370(void);
void func_0012C3E0(s32);
void func_0012FA10(unk_func_0012F5D0_1 *, unk_func_0012F5D0_1 *);
void func_0012FB40(s32, s32, unk_func_0012F5D0_0 *, s32, s32);
s32 func_0012FD70(s32, s32, unk_func_0012F5D0_0 *, s32);
void func_001304F0(s32, unk_func_0012F5D0_1 *, s32);
void func_00165C50(s32);
void func_0016B490(s32);
void func_0016B4E0(s32);
void func_0016FF20(s32, s32);
void func_00176420(unk_func_0012F5D0_1 *);
void func_0018F050(s32);
extern s8 D_0035F390;
extern s8 D_0035F394;
extern s8 D_0035F398;
extern unk_func_0012F5D0_1 *D_0035F8F8;
extern unk_func_0012F5D0_1 *D_0035F8FC;
extern u8 D_003601AC;
extern s8 D_005ACAD2[];

void func_0012F5D0(s32 arg0, s32 arg1, unk_func_0012F5D0_0 *arg2, s32 arg3) {
    unk_func_0012F5D0_1 *temp_s1 = arg2->unk_04;
    unk_func_0012F5D0_1 *temp_s4;
    s32 *temp_s5;
    unk_func_0012F5D0_2 *temp;
    s16 i;

    if (D_0035F390) {
        D_0035F8F8 = D_0035F8FC;
        D_0035F8FC = temp_s1;
        if (D_0035F8F8 != NULL && D_0035F8F8 != temp_s1) {
            func_0012FA10(D_0035F8F8, temp_s1);
        }
    }
    func_0016FF20(temp_s1->unk_174, temp_s1->unk_178);
    temp_s5 = __alloca((temp_s1->unk_24 + 1) * sizeof(*temp_s5));
    temp_s4 = arg2->unk_04;
    func_001304F0(arg1, temp_s4, 0);
    {
        s16 temp_i;
        unk_func_0012F5D0_2 *temp_p = temp_s4->unk_20;
        for (temp_i = 0; temp_i < temp_s4->unk_24; temp_i++, temp_p++) {
            func_001304F0(arg1, temp_p->unk_04->unk_04, 0);
        }
    }
    func_0012C3E0(arg1);
    if (D_0035F394) {
        if (D_003601AC == 0) {
            func_0018F050(1);
            func_00176420(temp_s1);
            if (temp_s1->unk_17C) {
                func_0016B4E0(temp_s1->unk_17C);
            }
            if (temp_s1->unk_180) {
                func_0016B490(temp_s1->unk_180);
            }
            temp = temp_s1->unk_20;
            for (i = 0; i < temp_s1->unk_24; i++, temp++) {
                if (D_005ACAD2[0] == 1 || temp->unk_02 != 2) {
                    unk_func_0012F5D0_1 *temp_s3 = temp->unk_04->unk_04;
                    if (temp_s3 != NULL) {
                        func_00176420(temp_s3);
                        if (temp_s3->unk_17C) {
                            func_0016B4E0(temp_s3->unk_17C);
                        }
                        if (temp_s3->unk_180) {
                            func_0016B490(temp_s3->unk_180);
                        }
                    }
                }
            }
            func_0018F050(0);
            temp_s5[0] = func_0012FD70(arg0, arg1, arg2, arg3);
        }
    } else {
        temp_s5[0] = 0x40;
    }
    if (D_003601AC == 0) {
        if (func_0012C370() == 0) {
            s32 j = 0;
            temp = temp_s1->unk_20;
            for (i = 0; i < temp_s1->unk_24; j++, temp++, i++) {
                if ((D_005ACAD2[0] == 1 || temp->unk_02 != 2) && D_0035F394) {
                    temp_s5[j + 1] = func_0012FD70(arg0, arg1, temp->unk_04, arg3);
                }
            }
        } else {
            s32 j = 0;
            unk_func_0012F5D0_0 **temp2 = temp_s1->unk_28;
            for (i = 0; i < temp_s1->unk_2C; j++, temp2++, i++) {
                if (D_0035F394) {
                    temp_s5[j + 1] = func_0012FD70(arg0, arg1, *temp2, arg3);
                }
            }
        }
    }
    if (D_0035F398) {
        func_0012FB40(arg0, arg1, arg2, arg3, temp_s5[0]);
    }
    {
        s32 j = 0;
        temp = temp_s1->unk_20;
        for (i = 0; i < temp_s1->unk_24; j++, temp++, i++) {
            if ((D_003601AC || D_005ACAD2[0] == 1 || temp->unk_02 != 2) && D_0035F398) {
                func_0012FB40(arg0, arg1, temp->unk_04, arg3, temp_s5[j + 1]);
            }
        }
    }
    func_00165C50(arg1);
}
