/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01[7];
} unk_func_002399C0_0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002399C0_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_002399C0_2;

typedef struct {
    u8 pad_00[4];
    unk_func_002399C0_2 *unk_04;
} unk_func_002399C0_3;

typedef struct {
    unk_func_002399C0_3 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_func_002399C0_4;

typedef struct {
    u8 pad_00[0xC];
    unk_func_002399C0_4 *unk_0C;
} unk_func_002399C0_5;

typedef struct {
    s32 unk_00;
    u8 unk_04;
} unk_func_002399C0_6;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002399C0_7;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002399C0_8;

typedef union {
    s8 unk_00;
    u8 unk_00_u8;
} unk_func_002399C0_9;

typedef struct {
    u8 pad_00[2];
    unk_func_002399C0_9 unk_02;
    u8 unk_03;
} unk_func_002399C0_10;

unk_func_002399C0_1 *HIE_fn_hGetSuperObjectObject(s32);
void *fn_h_StandardGameGetSuperObject(s32);
unk_func_002399C0_5 *fn_p_stBrainGetMind(s32);
u8 fn_ucGetDsgVar(u8, u8, unk_func_002399C0_5 *, void **);
void *func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001D0E40(s32, void **, void *);
void func_001D1540(void *, unk_func_002399C0_8 *);
void func_001D1650(void *, unk_func_002399C0_8 *);
void func_001D1EF0(void *, unk_func_002399C0_8 *);
s32 func_001F09A0(void *);
void *func_001F09C0(void *, s32, s32 *);
extern unk_func_002399C0_8 D_003370A8;

unk_func_002399C0_0 *func_002399C0(s32 arg0, unk_func_002399C0_0 *arg1, void **arg2,
                                   unk_func_002399C0_8 *arg3, void *arg4, u8 arg5)
{
    void *temp0[1023];
    unk_func_002399C0_6 *volatile temp1;
    volatile u32 temp2;
    volatile s32 temp3;
    s32 temp4;
    unk_func_002399C0_10 temp5;
    s32 temp7;
    void *temp8;
    void *temp9;
    s32 temp10;
    s32 temp11;
    void *temp12;
    void *temp13;
    void *temp14;
    u32 temp15;

    temp11 = 0;
    temp0[temp11++] = arg4;
    for (temp5.unk_03 = 0; temp5.unk_03 < arg5; ++temp5.unk_03) {
        temp5.unk_02.unk_00 = (arg1++)->unk_00;
        temp1 = (unk_func_002399C0_6 *)(fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_0C->unk_08
            + (*fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_0C->unk_00)->unk_04[temp5.unk_02.unk_00_u8].unk_00);
        temp2 = temp1->unk_04;
        temp3 = temp1->unk_00;
        for (temp15 = 0; temp15 < temp2; ++temp15) {
            if (fn_ucGetDsgVar(temp5.unk_02.unk_00_u8, temp15,
                    fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), arg2) == 1) {
                switch (temp3) {
                case 22:
                    temp13 = *arg2;
                    if (temp13 != NULL && func_001D0E40(temp11, temp0, temp13) == 0) {
                        temp0[temp11++] = temp13;
                        func_001D1540(temp13, arg3);
                    }
                    break;
                case 19:
                    temp14 = *arg2;
                    if (temp14 != NULL && func_001D0E40(temp11, temp0, temp14) == 0) {
                        temp0[temp11++] = temp14;
                        func_001D1650(temp14, arg3);
                    }
                    break;
                case 20:
                    temp9 = *arg2;
                    if (temp9 != NULL && func_001D0E40(temp11, temp0, temp9) == 0) {
                        temp0[temp11++] = temp9;
                        temp10 = func_001F09A0(temp9);
                        for (temp7 = 0; temp7 < temp10; ++temp7) {
                            temp8 = func_001F09C0(temp9, temp7, &temp4);
                            if (temp8 != NULL) {
                                func_001D1650(temp8, arg3);
                            }
                        }
                    }
                    break;
                case 18:
                    temp12 = fn_h_StandardGameGetSuperObject(((unk_func_002399C0_7 *)*arg2)->unk_04);
                    if (temp12 != NULL && func_001D0E40(temp11, temp0, temp12) == 0) {
                        temp0[temp11++] = temp12;
                        if (temp12 == func_001A7D60(func_001A7D80())) {
                            D_003370A8 = *arg3;
                        } else {
                            func_001D1EF0(temp12, arg3);
                        }
                    }
                    break;
                }
            }
        }
    }
    return arg1;
}
