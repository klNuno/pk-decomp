/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x68];
} unk_func_00239E30_0;

typedef struct {
    s8 unk_00;
    u8 pad_01[7];
} unk_func_00239E30_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00239E30_2;

typedef struct {
    u8 pad_00[4];
    unk_func_00239E30_2 *unk_04;
} unk_func_00239E30_3;

typedef struct {
    unk_func_00239E30_3 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_func_00239E30_4;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00239E30_4 *unk_0C;
} unk_func_00239E30_5;

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} unk_func_00239E30_6;

typedef struct {
    s32 unk_00;
    u8 unk_04;
} unk_func_00239E30_7;

unk_func_00239E30_6 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
unk_func_00239E30_5 *fn_p_stBrainGetMind(void *);
u8 fn_ucGetDsgVar(u8, u8, unk_func_00239E30_5 *, s32 *);
unk_func_00239E30_0 *func_001979C0(s32);
void func_00150ED0(unk_func_00239E30_0 *);
void func_00153920(unk_func_00239E30_0 *, unk_func_00239E30_0 *, unk_func_00239E30_0 *);
void func_00154B00(unk_func_00239E30_0 *, unk_func_00239E30_0 *);
s32 func_001D0E40(s32, s32 *, s32);
void func_001D15D0(s32, unk_func_00239E30_0 *);
void func_001D16D0(s32, unk_func_00239E30_0 *);
void func_001D1F60(s32, unk_func_00239E30_0 *);
s32 func_001F09A0(s32);
s32 func_001F09C0(s32, s32, s32 *);

unk_func_00239E30_1 *func_00239E30(s32 arg0, unk_func_00239E30_1 *arg1, s32 *arg2,
                                   unk_func_00239E30_0 *arg3, s32 arg4, u8 arg5) {
    u8 unk_111E;
    u8 unk_111F;
    unk_func_00239E30_7 *unk_1108;
    u32 unk_110C;
    s32 unk_1110;
    unk_func_00239E30_0 *unk_1114;
    s32 unk_1118;
    s32 unk_00B0[1020];
    unk_func_00239E30_0 unk_10A0;
    s32 unk_00;
    u32 unk_04;

    unk_00 = 0;
    unk_1114 = func_001979C0(arg4);
    func_00150ED0(unk_1114);
    func_00154B00(&unk_10A0, unk_1114);
    func_00153920(&unk_10A0, arg3, &unk_10A0);
    func_00153920(&unk_10A0, unk_1114, &unk_10A0);
    func_00150ED0(&unk_10A0);
    unk_00B0[unk_00++] = arg4;

    for (unk_111F = 0; unk_111F < arg5; unk_111F++) {
        unk_111E = arg1++->unk_00;
        unk_1108 = (unk_func_00239E30_7 *)(
            fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_0C->unk_08 +
            (*fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_0C->unk_00)->unk_04[unk_111E].unk_00);
        unk_110C = unk_1108->unk_04;
        unk_1110 = unk_1108->unk_00;
        for (unk_04 = 0; unk_04 < unk_110C; unk_04++) {
            if (fn_ucGetDsgVar(unk_111E, (u8)unk_04,
                              fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), arg2) == 1) {
                switch (unk_1110) {
                case 22: {
                    s32 temp = *arg2;
                    if (temp != 0 && func_001D0E40(unk_00, unk_00B0, temp) == 0) {
                        unk_00B0[unk_00++] = temp;
                        func_001D15D0(temp, &unk_10A0);
                    }
                    break;
                }
                case 19: {
                    s32 temp = *arg2;
                    if (temp != 0 && func_001D0E40(unk_00, unk_00B0, temp) == 0) {
                        unk_00B0[unk_00++] = temp;
                        func_001D16D0(temp, &unk_10A0);
                    }
                    break;
                }
                case 20: {
                    s32 temp = *arg2;
                    if (temp != 0 && func_001D0E40(unk_00, unk_00B0, temp) == 0) {
                        s32 unk_08;
                        s32 unk_0C;

                        unk_00B0[unk_00++] = temp;
                        unk_08 = func_001F09A0(temp);
                        for (unk_0C = 0; unk_0C < unk_08; unk_0C++) {
                            s32 unk_10 = func_001F09C0(temp, unk_0C, &unk_1118);
                            if (unk_10 != 0) {
                                func_001D16D0(unk_10, &unk_10A0);
                            }
                        }
                    }
                    break;
                }
                case 18: {
                    s32 temp = fn_h_StandardGameGetSuperObject(((s32 *)*arg2)[1]);
                    if (temp != 0 && func_001D0E40(unk_00, unk_00B0, temp) == 0) {
                        unk_00B0[unk_00++] = temp;
                        func_001D1F60(temp, &unk_10A0);
                    }
                    break;
                }
                }
            }
        }
    }
    return arg1;
}
