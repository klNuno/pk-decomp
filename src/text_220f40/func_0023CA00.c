/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0023CA00_0 {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_func_0023CA00_0;

typedef struct unk_func_0023CA00_1 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_func_0023CA00_1;

typedef struct unk_func_0023CA00_2 {
    u8 pad_00[4];
    unk_func_0023CA00_1 *unk_04;
} unk_func_0023CA00_2;

typedef struct unk_func_0023CA00_3 {
    unk_func_0023CA00_2 **unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_0023CA00_3;

typedef struct unk_func_0023CA00_4 {
    u8 unk_00[8];
} unk_func_0023CA00_4;

typedef struct unk_func_0023CA00_5 {
    unk_func_0023CA00_4 *unk_00;
    u8 unk_04;
} unk_func_0023CA00_5;

typedef struct unk_func_0023CA00_6 {
    u8 pad_00[0xC];
    unk_func_0023CA00_5 *unk_0C;
} unk_func_0023CA00_6;

typedef struct unk_func_0023CA00_7 {
    unk_func_0023CA00_6 *unk_00;
    u8 pad_04[8];
    unk_func_0023CA00_3 *unk_0C;
} unk_func_0023CA00_7;

typedef struct unk_func_0023CA00_8 {
    u8 pad_00[0x1C];
} unk_func_0023CA00_8;

typedef struct unk_func_0023CA00_9 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_0023CA00_9;

unk_func_0023CA00_9 *HIE_fn_hGetSuperObjectObject();
unk_func_0023CA00_7 *fn_p_stBrainGetMind();
unk_func_0023CA00_0 *fn_p_stOperatorGetPerso();
void func_001E91C0(s32 *, u8, unk_func_0023CA00_8 *);
unk_func_0023CA00_0 *func_001EA530();

unk_func_0023CA00_0 *func_0023CA00(s32 arg0, unk_func_0023CA00_0 *arg1) {
    unk_func_0023CA00_8 sp80;
    s32 sp9C;
    s32 s6;
    s32 *s5;
    u8 s4;
    unk_func_0023CA00_7 *s3;
    unk_func_0023CA00_4 *s2;
    unk_func_0023CA00_5 *s1;
    u8 s0;

    switch (arg1->unk_07) {
    case 0xB:
        if (arg1->unk_07 == 2) {
            arg1 += 1;
            arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp9C);
        } else {
            sp9C = arg0;
        }
        s3 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(sp9C)->unk_0C);
        s4 = arg1->unk_00;
        arg1 += 1;
        s6 = (*s3->unk_0C->unk_00)->unk_04[s4].unk_04;
        if (s6 == 0xA) {
            s5 = (s32 *)(s3->unk_0C->unk_08 + (*s3->unk_0C->unk_00)->unk_04[s4].unk_00);
            func_001E91C0(s5, s4, &sp80);
            s2 = (unk_func_0023CA00_4 *)*s5;
            s1 = s3->unk_00->unk_0C;
            for (s0 = 0; s0 < s1->unk_04; s0++) {
                if (&s1->unk_00[s0] == s2) {
                    arg1 -= 1;
                    return func_001EA530(arg0, arg1, &sp80, s2);
                }
            }
            arg1 += 1; return arg1;
        }
        arg1 += 1; return arg1;
    }
    arg1 += 1; return arg1;
}
