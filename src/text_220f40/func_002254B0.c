/* profile: o0_301_p */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_002254B0_0;

typedef struct {
    u8 pad_00[0x3C];
} unk_002254B0_1;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_002254B0_0 *);
s8 *fn_szGetStringFromTextOrStringParam(unk_002254B0_0 *);
s32 func_0011F0D0(s32);
s32 func_0019D550(f32);
void *func_001A7060(s32);
void func_001AB680(void *, void *, u16, u16);
u16 func_001AB730(void *);
void func_001AC830(unk_002254B0_1 *, s32, s8 *, s32, s32, f32, s32, s32);

s32 *func_002254B0(s32 arg0, s32 *arg1)
{
    unk_002254B0_0 res;
    unk_002254B0_1 spB0;
    s32 op;
    f32 spF0;
    s32 spF4;
    s16 i, temp, temp1, temp2;
    s8 *p;
    void *p1, *p0;
    s32 temp3;

    op = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    switch (op) {
    case 0x6F:
        p = fn_szGetStringFromTextOrStringParam(&res);
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        spF0 = res.unk_0C == 8 ? res.unk_00.f : (f32)res.unk_00.i;
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        temp3 = res.unk_0C == 8 ? func_0019D550(res.unk_00.f) : res.unk_00.i;
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        spF4 = res.unk_0C == 8 ? func_0019D550(res.unk_00.f) : res.unk_00.i;
        if (temp3 < 0) {
            temp3 = 0;
        }
        func_001AC830(&spB0, arg0, p, temp3, spF4, spF0, 0, -1);
        return arg1;
    case 0x6E:
        temp1 = 0;
        temp2 = 0;
        i = 0;
        p1 = (void *)res.unk_00.i;
        p0 = func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0));
        temp1 = (s16)func_001AB730(p0);
        temp2 = (s16)func_001AB730(p1);
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        p = fn_szGetStringFromTextOrStringParam(&res);
        while (*p && i < temp1) {
            temp = (s16)(func_0011F0D0(*p) - 0x20);
            if (temp < 0 || temp >= temp2) {
                temp = 0;
            }
            func_001AB680(p0, p1, i, temp);
            p++;
            i++;
        }
        while (i < temp1) {
            func_001AB680(p0, p1, i, 0);
            i++;
        }
        return arg1;
    default:
        return arg1;
    }
}
