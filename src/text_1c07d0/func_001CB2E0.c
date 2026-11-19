/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001CB2E0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[2];
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1A;
    u16 unk_1C;
    u16 unk_1E;
    u16 unk_20;
} unk_func_001CB2E0_1;

typedef struct {
    u8 pad_00[4];
    u16 unk_04;
} unk_func_001CB2E0_2;

typedef struct {
    s16 unk_00[4];
} unk_func_001CB2E0_3;

typedef struct {
    u8 unk_00[0x60];
} unk_func_001CB2E0_4;

void func_00151370(unk_func_001CB2E0_4 *, f32 *);
void func_001513B0(unk_func_001CB2E0_4 *, unk_func_001CB2E0_0 *, f32 *);
void func_00153920(unk_func_001CB2E0_4 *, unk_func_001CB2E0_4 *, unk_func_001CB2E0_4 *);
void func_00155810(unk_func_001CB2E0_0 *, unk_func_001CB2E0_4 *, unk_func_001CB2E0_0 *);
void func_00155C70(unk_func_001CB2E0_4 *);
void func_00155D20(unk_func_001CB2E0_4 *, unk_func_001CB2E0_0 *, unk_func_001CB2E0_0 *);
void func_00155E80(unk_func_001CB2E0_4 *, unk_func_001CB2E0_0 *);
void func_00156DC0(unk_func_001CB2E0_4 *, unk_func_001CB2E0_0 *);
void func_00157000(unk_func_001CB2E0_4 *, f32);
s32 func_0019D550(f32);
void func_001CAC50(f32 *, s16 *);
void func_001CAF10(f32 *, const f32 *, const f32 *, f32, s16);
extern f32 D_0035F570;
extern unk_func_001CB2E0_3 *D_0036005C;
extern unk_func_001CB2E0_0 *D_00360060;
extern s16 D_005E0370[];

void func_001CB2E0(unk_func_001CB2E0_1 *arg0, unk_func_001CB2E0_1 *arg1,
                   unk_func_001CB2E0_2 *arg2, unk_func_001CB2E0_4 *arg3, u16 arg4, f32 arg5) {
    f32 sp60[4];
    f32 sp70[4];
    f32 sp80[4];
    unk_func_001CB2E0_4 sp90;
    unk_func_001CB2E0_4 spF0;
    unk_func_001CB2E0_0 sp150;
    unk_func_001CB2E0_0 sp160;
    f32 sp170;
    f32 sp174;
    f32 sp178;
    f32 sp17C;
    f32 sp180;
    f32 sp184;
    f32 sp188;
    f32 sp18C;
    unk_func_001CB2E0_0 *temp_s0;
    unk_func_001CB2E0_0 *temp_s1;
    s16 temp_s2;
    s16 temp_s3;
    s16 temp_s4;

    if (0.0f == arg5) {
        if (!(arg0->unk_12 & 0x10)) {
            func_001CAC50(sp60, D_0036005C[arg0->unk_14].unk_00);
            func_00151370(arg3, sp60);
        } else {
            func_00155C70(arg3);
        }
    } else {
        func_001CAC50(sp70, D_0036005C[arg0->unk_14].unk_00);
        func_001CAC50(sp80, D_0036005C[arg1->unk_14].unk_00);
        func_001CAF10(sp60, sp70, sp80, arg5, (s16)arg0->unk_1C);
        func_00151370(arg3, sp60);
    }
    if (0.0f != arg5 || !(arg0->unk_12 & 0x40)) {
        sp160.unk_00 = D_00360060[arg0->unk_18].unk_00 +
                       arg5 * (D_00360060[arg1->unk_18].unk_00 - D_00360060[arg0->unk_18].unk_00);
        sp160.unk_04 = D_00360060[arg0->unk_18].unk_04 +
                       arg5 * (D_00360060[arg1->unk_18].unk_04 - D_00360060[arg0->unk_18].unk_04);
        sp160.unk_08 = D_00360060[arg0->unk_18].unk_08 +
                       arg5 * (D_00360060[arg1->unk_18].unk_08 - D_00360060[arg0->unk_18].unk_08);
        if (0.0f == arg5 || (arg0->unk_12 & 2)) {
            if (arg0->unk_12 & 0x20) {
                func_00156DC0(arg3, &sp160);
            } else {
                func_001CAC50(sp60, D_0036005C[arg0->unk_16].unk_00);
                if (sp160.unk_00 - sp160.unk_04 > 0.0f) {
                    sp180 = sp160.unk_00 - sp160.unk_04;
                } else {
                    sp180 = -(sp160.unk_00 - sp160.unk_04);
                }
                if (sp180 < 0.001f) {
                    if (sp160.unk_00 - sp160.unk_08 > 0.0f) {
                        sp184 = sp160.unk_00 - sp160.unk_08;
                    } else {
                        sp184 = -(sp160.unk_00 - sp160.unk_08);
                    }
                    if (sp184 < 0.001f) {
                        func_00157000(arg3, sp160.unk_00);
                        goto block_001CB910;
                    }
                }
                func_001513B0(&sp90, &sp160, sp60);
                func_00153920(arg3, arg3, &sp90);
            }
        } else {
            func_001CAC50(sp70, D_0036005C[arg0->unk_16].unk_00);
            func_001CAC50(sp80, D_0036005C[arg1->unk_16].unk_00);
            func_001CAF10(sp60, sp70, sp80, arg5, (s16)arg0->unk_1E);
            if (sp160.unk_00 - sp160.unk_04 > 0.0f) {
                sp188 = sp160.unk_00 - sp160.unk_04;
            } else {
                sp188 = -(sp160.unk_00 - sp160.unk_04);
            }
            if (sp188 < 0.001f) {
                if (sp160.unk_00 - sp160.unk_08 > 0.0f) {
                    sp18C = sp160.unk_00 - sp160.unk_08;
                } else {
                    sp18C = -(sp160.unk_00 - sp160.unk_08);
                }
                if (sp18C < 0.001f) {
                    func_00157000(arg3, sp160.unk_00);
                    goto block_001CB910;
                }
            }
            func_001513B0(&spF0, &sp160, sp60);
            func_00153920(arg3, arg3, &spF0);
        }
    }
block_001CB910:
    if (0.0f == arg5) {
        temp_s0 = &D_00360060[arg0->unk_1A];
        sp17C = arg0->unk_0C;
        sp150.unk_00 = sp17C * temp_s0->unk_00;
        sp150.unk_04 = sp17C * temp_s0->unk_04;
        sp150.unk_08 = sp17C * temp_s0->unk_08;
        func_00155E80(arg3, &sp150);
    } else if (arg4 == 0) {
        func_00155810(&sp160, arg3, &D_00360060[arg2->unk_04]);
        sp150.unk_00 = arg0->unk_00 + arg5 * (arg1->unk_00 - arg0->unk_00);
        sp150.unk_04 = arg0->unk_04 + arg5 * (arg1->unk_04 - arg0->unk_04);
        sp150.unk_08 = arg0->unk_08 + arg5 * (arg1->unk_08 - arg0->unk_08);
        func_00155D20(arg3, &sp150, &sp160);
    } else if (!(arg0->unk_0C <= D_0035F570) || !(arg1->unk_0C <= D_0035F570)) {
        temp_s0 = &D_00360060[arg0->unk_1A];
        if (arg0->unk_12 & 0x100) {
            sp174 = arg0->unk_0C + arg5 * (arg1->unk_0C - arg0->unk_0C);
            sp150.unk_00 = sp174 * temp_s0->unk_00;
            sp150.unk_04 = sp174 * temp_s0->unk_04;
            sp150.unk_08 = sp174 * temp_s0->unk_08;
            func_00155E80(arg3, &sp150);
        } else {
            temp_s1 = &D_00360060[arg1->unk_1A];
            temp_s2 = (s16)arg0->unk_20;
            temp_s3 = D_005E0370[temp_s2];
            if (temp_s3 != 0) {
                sp170 = 1.0f / (f32)temp_s3;
                temp_s4 = (s16)func_0019D550(arg5 * (f32)temp_s2);
                sp174 = sp170 * (f32)D_005E0370[temp_s2 - temp_s4];
                sp178 = sp170 * (f32)D_005E0370[temp_s4];
            } else {
                sp174 = 1.0f - arg5;
                sp178 = arg5;
            }
            sp170 = arg0->unk_0C + arg5 * (arg1->unk_0C - arg0->unk_0C);
            sp174 *= sp170;
            sp178 *= sp170;
            sp150.unk_00 = sp174 * temp_s0->unk_00 + sp178 * temp_s1->unk_00;
            sp150.unk_04 = sp174 * temp_s0->unk_04 + sp178 * temp_s1->unk_04;
            sp150.unk_08 = sp174 * temp_s0->unk_08 + sp178 * temp_s1->unk_08;
            func_00155E80(arg3, &sp150);
        }
    }
}
