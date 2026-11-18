/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001EA530_0 {
    u8 pad_00[0x4];
    u8 unk_04;
} unk_func_001EA530_0;

typedef struct unk_func_001EA530_1 {
    u8 pad_00[0x10];
    unk_func_001EA530_0 *unk_10;
} unk_func_001EA530_1;

typedef struct unk_func_001EA530_2 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001EA530_2;

typedef struct unk_func_001EA530_3 {
    u8 pad_00[0x7];
    u8 unk_07;
} unk_func_001EA530_3;

typedef struct unk_func_001EA530_4 {
    unk_func_001EA530_3 **unk_00;
    unk_func_001EA530_3 **unk_04;
} unk_func_001EA530_4;

u8 func_001E6FA0(unk_func_001EA530_1 *, u8);
unk_func_001EA530_3 *func_001E7850(unk_func_001EA530_1 *, u8);
void func_001EBD30(s32, unk_func_001EA530_3 *, unk_func_001EA530_2 *);
void func_001E7490(unk_func_001EA530_1 *);
void func_001E73E0(unk_func_001EA530_1 *, u8, s32 *);
extern u8 D_0036012C;
extern s32 *D_00360130;
extern u8 D_0036013C;
extern unk_func_001EA530_1 *D_00360140;

s32 *func_001EA530(s32 arg0, s32 *arg1, unk_func_001EA530_2 *arg2, unk_func_001EA530_4 *arg3) {
    u8 idx;
    s32 *saved;
    unk_func_001EA530_3 *r2;
    u8 flags;
    unk_func_001EA530_3 *x;
    unk_func_001EA530_3 *r1;

    saved = D_00360130;
    D_00360130 = arg1;
    D_0036012C++;
    idx = func_001E6FA0(D_00360140, D_0036013C);
    if (idx >= D_00360140->unk_10->unk_04) {
        *arg3->unk_04 = *arg3->unk_00;
    } else {
        r1 = func_001E7850(D_00360140, idx);
        if (r1 != (unk_func_001EA530_3 *)D_00360130) {
            *arg3->unk_04 = *arg3->unk_00;
        }
    }
    x = *arg3->unk_04;
    func_001EBD30(arg0, x, arg2);
    flags = *(s8 *)&arg2->unk_00;
    D_0036012C--;
    if ((flags & 0x10) == 0x10) {
        *arg3->unk_04 = *arg3->unk_00;
        arg2->unk_00 = 0;
        arg2->unk_0C = 0x14;
        D_00360130 = saved;
        return arg1 += 2;
    }
    if ((flags & 0x8) == 0x8) {
        *arg3->unk_04 = *arg3->unk_00;
        D_00360130 = saved;
        return arg1 += 2;
    }
    idx = func_001E6FA0(D_00360140, D_0036013C);
    if (idx < D_00360140->unk_10->unk_04) {
        r2 = func_001E7850(D_00360140, idx);
        if (r2->unk_07 != 0x29) {
            *arg3->unk_04 = r2;
            func_001E7490(D_00360140);
            func_001E73E0(D_00360140, D_0036013C, D_00360130);
        }
        D_00360130 = saved;
    }
    return arg1;
}
