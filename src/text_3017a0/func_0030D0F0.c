/* profile: opt_300 */
#include "common.h"

typedef struct unk_0030D0F0_0 {
    s32 unk_00;
    u8 pad_04[0x40];
    s32 unk_44;
    u32 unk_48;
    u32 unk_4C;
    u32 unk_50;
    s32 unk_54;
    struct unk_0030D0F0_0 *unk_58;
    struct unk_0030D0F0_0 *unk_5C;
} unk_0030D0F0_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_0030D0F0_1;

void func_00308B80(s32);
void func_00308BE0(s32);
s32 func_0031A320(unk_0030D0F0_1 *);
void func_0031A330(s32);
void func_0031A340(s32);
void func_0031A360(s32);
extern s32 D_0035F7BC;
extern unk_0030D0F0_0 *D_00360860;
extern unk_0030D0F0_0 *D_00360864;
extern s32 D_00360870;
extern u32 D_00360878;
extern s8 D_0036087C;
extern u32 D_007DE190[];

u32 func_0030D0F0(s32 arg0, unk_0030D0F0_0 *arg1, u32 arg2, s32 arg3,
                  u32 arg4, s32 arg5, u32 arg6) {
    s32 temp0;
    unk_0030D0F0_1 temp1;
    s32 temp2;
    u32 temp3;
    s32 temp4;

    if (arg2 >= 64) {
        goto end;
    }
    if (arg4 >= 64) {
        goto end;
    }
    temp0 = -1;
    if (arg5 != 0) {
        temp1.unk_04 = 1;
        temp1.unk_08 = 0;
        temp0 = func_0031A320(&temp1);
    }
    if (D_00360870 != 0) {
        func_00308BE0(D_00360870);
    }
    temp4 = arg0 == 0x30;
    if (!temp4) { temp4 = arg0 == 0x14; }
    if (!temp4) { temp4 = arg0 == 0x41; }
    if (!temp4) { temp4 = arg0 == 0x44; }
    if (!temp4) { temp4 = arg0 == 0x51; }
    if (!temp4) { temp4 = arg0 == 0x54; }
    if (temp4) {
        if (D_0036087C == 0) {
            D_00360878 = 0;
            D_0036087C = 1;
        }
        D_00360878++;
        temp2 = 0;
        if (D_00360878 < 0x400001U && D_00360878 != 0) {
            goto begin_scan;
        }
        D_00360878 = 1;
        goto begin_scan;

advance:
        ++temp2;
scan:
        if (temp2 < 0x400 && D_007DE190[temp2] != 0) {
            goto advance;
        }
        temp3 = (D_00360878 << 10) & ~0x3FFU;
        D_007DE190[temp2] = temp3;
        arg6 = (temp2 & 0x3FF) | temp3;
    } else {
        s32 temp5 = arg0 == 0x31;
        if (!temp5) { temp5 = arg0 == 0x15; }
        if (!temp5) { temp5 = arg0 == 0x45; }
        if (!temp5) { temp5 = arg0 == 0x42; }
        if (!temp5) { temp5 = arg0 == 0x55; }
        if (!temp5) { temp5 = arg0 == 0x52; }
        if (temp5) {
            s32 temp8 = arg6 != 0 && (arg6 & ~0x3FFU) == (D_007DE190[arg6 & 0x3FF] & ~0x3FFU);
            if (temp8) {
                D_007DE190[arg6 & 0x3FF] |= 1;
            }
        }
    }
    if (arg1 != 0) {
        arg1->unk_00 = arg0;
        arg1->unk_44 = arg3;
        arg1->unk_48 = arg2;
        arg1->unk_4C = arg4;
        arg1->unk_54 = temp0;
        arg1->unk_50 = arg6;
        arg1->unk_58 = D_00360860;
        arg1->unk_5C = 0;
        if (D_00360860 != 0) {
            D_00360860->unk_5C = arg1;
        } else {
            D_00360864 = arg1;
        }
        D_00360860 = arg1;
    }
    if (D_00360870 != 0) {
        func_00308B80(D_00360870);
    }
    func_0031A340(D_0035F7BC);
    if (arg5 != 0) {
        func_0031A360(temp0);
        func_0031A330(temp0);
    }
end:
    return arg6;

begin_scan:
    goto scan;
}
