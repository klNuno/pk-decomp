/* profile: opt_300 */
#include "common.h"

typedef union {
    s32 unk_00[3];
    f32 unk_04[3];
} unk_func_003157B0_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xC];
    unk_func_003157B0_0 *unk_14;
} unk_func_003157B0_1;

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[6];
    s16 (*unk_0C)[3];
} unk_func_003157B0_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_003157B0_2 *unk_0C;
} unk_func_003157B0_3;

typedef struct {
    unk_func_003157B0_0 *unk_00;
    u8 pad_04[0xC];
    unk_func_003157B0_3 *unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_func_003157B0_4;

typedef struct {
    u8 pad_00[0xC];
    unk_func_003157B0_4 **unk_0C;
} unk_func_003157B0_5;

typedef struct {
    u8 unk_00;
    u8 pad_01[0x1B];
    unk_func_003157B0_1 *unk_1C;
    u8 pad_20[0x24];
    u8 unk_44[0x30];
    unk_func_003157B0_4 *unk_74;
} unk_func_003157B0_6;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u32 unk_14;
    u8 pad_18[0x1C];
    s32 *unk_34;
} unk_func_003157B0_7;

typedef struct {
    u8 pad_00[0x2C];
    unk_func_003157B0_7 *unk_2C;
} unk_func_003157B0_8;

typedef struct {
    u8 pad_00[0x10];
} unk_func_003157B0_9;

unk_func_003157B0_5 **HIE_fn_hGetSuperObjectObject(void *);
s32 func_0019C730(unk_func_003157B0_5 *);
void *func_001ACF40(s32, s32);
void func_00313170(void *, unk_func_003157B0_0 *, unk_func_003157B0_0 *);
void func_00315BC0(unk_func_003157B0_9 *, unk_func_003157B0_0 *);
void func_00315BF0(unk_func_003157B0_6 *, unk_func_003157B0_4 *);
void func_001670A0(unk_func_003157B0_4 *, s32);
void func_00176580(unk_func_003157B0_4 *);
extern s16 D_00360194;
extern unk_func_003157B0_9 *D_003608B0;
extern unk_func_003157B0_4 *D_003608B8;
extern unk_func_003157B0_4 *D_003608BC;
extern unk_func_003157B0_7 *D_003608C8;
extern s8 D_003608CC;
extern s32 D_003608D0;
extern s8 D_003608D4;

s32 func_003157B0(unk_func_003157B0_6 *arg0, void *arg1, unk_func_003157B0_8 *arg2, void *arg3) {
    void *temp_v0 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg3)), 0);
    unk_func_003157B0_0 *temp_s0;
    unk_func_003157B0_0 *temp_v00;
    s32 off0, off1, i;

    if (temp_v0 != NULL) {
        arg0->unk_74 = *(*HIE_fn_hGetSuperObjectObject(temp_v0))->unk_0C;
        if (D_00360194 == 0 && arg0->unk_74->unk_22 > 4) {
            D_003608B8 = arg0->unk_74;
        } else {
            D_003608BC = arg0->unk_74;
        }
    }
    if (arg0->unk_00 == 0) {
        if (arg2->unk_2C->unk_14 > 1) {
            func_00313170(arg0->unk_44, arg0->unk_1C->unk_14, arg0->unk_74->unk_00);
        } else {
            unk_func_003157B0_0 *q;
            unk_func_003157B0_0 *p = arg0->unk_74->unk_00;
            unk_func_003157B0_0 *end = p + arg0->unk_1C->unk_04;
            q = arg0->unk_1C->unk_14;
            if (p < end) {
                do {
                    p->unk_00[0] = q->unk_00[0];
                    p->unk_00[1] = q->unk_00[1];
                    p->unk_00[2] = q->unk_00[2];
                    ++p;
                    ++q;
                } while (p < end);
            }
        }
    }
    if (D_003608CC == 0) {
        D_003608C8 = arg2->unk_2C;
        D_003608CC = 1;
    }
    if (D_003608D4 == 0) {
        s32 temp = D_003608C8->unk_10 * D_003608C8->unk_0C;
        D_003608D4 = 1;
        D_003608D0 = temp;
    }

    temp_s0 = arg0->unk_74->unk_00;
    temp_v00 = arg0->unk_1C->unk_14;
    temp_v00[D_003608D0 + 6].unk_04[0] = temp_v00[D_003608D0 + 4].unk_04[0] + temp_v00[D_003608D0 + 3].unk_04[0];
    temp_v00[D_003608D0 + 6].unk_04[1] = temp_v00[D_003608D0 + 4].unk_04[1] + temp_v00[D_003608D0 + 3].unk_04[1];
    temp_v00[D_003608D0 + 6].unk_04[2] = temp_v00[D_003608D0 + 4].unk_04[2] + temp_v00[D_003608D0 + 3].unk_04[2];
    temp_v00[D_003608D0 + 6].unk_04[0] = 0.5f * temp_v00[D_003608D0 + 6].unk_04[0];
    temp_v00[D_003608D0 + 6].unk_04[1] = 0.5f * temp_v00[D_003608D0 + 6].unk_04[1];
    temp_v00[D_003608D0 + 6].unk_04[2] = 0.5f * temp_v00[D_003608D0 + 6].unk_04[2];

    i = D_003608D0;
    off0 = i * 12;
    off1 = i * 4;
    while (i < D_003608D0 + 7) {
        unk_func_003157B0_0 *p = (unk_func_003157B0_0 *)((u8 *)temp_v00 + off0);
        temp_s0[*(s32 *)((u8 *)D_003608C8->unk_34 + off1)].unk_00[0] = p->unk_00[0];
        temp_s0[*(s32 *)((u8 *)D_003608C8->unk_34 + off1)].unk_00[1] = p->unk_00[1];
        temp_s0[*(s32 *)((u8 *)D_003608C8->unk_34 + off1)].unk_00[2] = p->unk_00[2];
        off0 += 12;
        i++;
        off1 += 4;
    }
    if (D_00360194 == 0 && arg0->unk_74->unk_22 > 4) {
        unk_func_003157B0_2 *temp_fp = arg0->unk_74->unk_10->unk_0C;
        u32 temp_s7 = temp_fp->unk_04;
        u32 j = 0;
        if (j < temp_s7) {
            u32 k;
            s32 off3;
            s32 off = 0;
            s32 off2 = 0;
            do {
                k = 0;
                off3 = 0;
                do {
                    unk_func_003157B0_9 *temp_a0 = &D_003608B0[k + off2];
                    u32 temp = off + (u32)temp_fp->unk_0C;
                    func_00315BC0(temp_a0,
                                 &temp_s0[*(s16 *)(temp + off3)]);
                    k++;
                    off3 += 2;
                } while (k < 3);
                j++;
                off += 6;
                off2 += 3;
            } while (j < temp_s7);
        }
    }
    func_00315BF0(arg0, arg0->unk_74);
    func_001670A0(arg0->unk_74, 1);
    func_00176580(arg0->unk_74);
    return 0;
}
