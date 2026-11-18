/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001A4750_0;

typedef union {
    unk_func_001A4750_0 unk_00;
    u32 unk_00_words[3];
} unk_func_001A4750_5;

typedef struct {
    u8 pad_00[0x10];
    s16 unk_10;
    s16 unk_12;
    u8 pad_14[0xC];
} unk_func_001A4750_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001A4750_2;

typedef struct {
    u8 pad_00[4];
    unk_func_001A4750_0 unk_04;
    unk_func_001A4750_0 unk_10;
    u8 pad_1C[4];
    s32 unk_20;
    s32 unk_24;
} unk_func_001A4750_3;

typedef struct {
    u8 pad_00[0x60];
} unk_func_001A4750_4;

unk_func_001A4750_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B84B0(s32);
u8 *func_00138760(s32);
s32 func_00162090(s32);
s32 func_0015CA30(unk_func_001A4750_2 *);
s32 func_00133AB0(s32);
void func_001687E0(s32, s32, f32 *, s32 *);
unk_func_001A4750_4 *func_001979C0(s32);
void func_00154B00(unk_func_001A4750_4 *, unk_func_001A4750_4 *);
void func_001559E0(unk_func_001A4750_0 *, unk_func_001A4750_4 *, unk_func_001A4750_0 *);
void func_00155810(unk_func_001A4750_0 *, unk_func_001A4750_4 *, unk_func_001A4750_0 *);
void func_001E4E80(unk_func_001A4750_0 *, unk_func_001A4750_0 *, unk_func_001A4750_0 *,
                  s32, s32, s16 *, unk_func_001A4750_1 *);
s32 func_00193C80(s32, s16, s16, unk_func_001A4750_0 *, s32);

void func_001A4750(s32 arg0, unk_func_001A4750_0 *arg1, s32 arg2, s32 arg3) {
    unk_func_001A4750_3 *temp0;
    u8 *temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    unk_func_001A4750_2 *temp6;
    s32 temp7;
    s32 temp8;
    s16 sp1FE;
    f32 sp1F4;
    s32 sp1F8;
    unk_func_001A4750_4 spA0;
    unk_func_001A4750_1 sp100;
    unk_func_001A4750_4 sp120;
    unk_func_001A4750_0 sp188;
    unk_func_001A4750_0 sp198;
    unk_func_001A4750_5 sp1A8;
    unk_func_001A4750_0 sp1B8;
    unk_func_001A4750_5 sp1C8;
    unk_func_001A4750_5 sp1D8;
    unk_func_001A4750_0 sp1E8;

    arg1->unk_08 = arg1->unk_04 = arg1->unk_00 = 0.0f;
    temp3 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (temp3 == 0) {
        return;
    }
    if ((temp4 = func_001B84B0(temp3)) == 0) {
        return;
    }
    temp1 = func_00138760(temp4);
    if (temp1 == NULL) {
        return;
    }
    switch (arg2) {
    default:
        temp0 = (unk_func_001A4750_3 *)(temp1 + 8);
        break;
    case 1:
        temp0 = (unk_func_001A4750_3 *)(temp1 + 0x30);
        break;
    case 2:
        temp0 = (unk_func_001A4750_3 *)(temp1 + 0x58);
        break;
    case 3:
        temp0 = (unk_func_001A4750_3 *)(temp1 + 0x80);
        break;
    case 4:
        temp0 = (unk_func_001A4750_3 *)(temp1 + 0xA8);
        break;
    case 5:
        temp0 = (unk_func_001A4750_3 *)(temp1 + 0xD0);
        break;
    }
    temp5 = temp0->unk_20;
    if (func_00162090(temp5) == 0) {
        return;
    }
    temp2 = temp0->unk_24;
    temp6 = HIE_fn_hGetSuperObjectObject(temp2);
    temp7 = func_0015CA30(temp6);
    temp8 = func_00133AB0(temp7);
    func_001687E0(temp8, 0, &sp1F4, &sp1F8);
    func_00154B00(&sp120, func_001979C0(temp2));
    func_001559E0(&sp1A8.unk_00, &sp120, &temp0->unk_10);
    func_00155810(&sp1B8, &sp120, &temp0->unk_04);
    ((u32 (*)[3])&sp1C8)[0][0] = ((u32 (*)[3])&sp1A8)[0][0];
    ((u32 (*)[3])&sp1C8)[0][1] = ((u32 (*)[3])&sp1A8)[0][1];
    ((u32 (*)[3])&sp1C8)[0][2] = ((u32 (*)[3])&sp1A8)[0][2];
    ((u32 (*)[3])&sp1D8)[0][0] = ((u32 (*)[3])&sp1A8)[0][0];
    ((u32 (*)[3])&sp1D8)[0][1] = ((u32 (*)[3])&sp1A8)[0][1];
    ((u32 (*)[3])&sp1D8)[0][2] = ((u32 (*)[3])&sp1A8)[0][2];
    sp1C8.unk_00.unk_00 += sp1B8.unk_00;
    sp1C8.unk_00.unk_04 += sp1B8.unk_04;
    sp1C8.unk_00.unk_08 += sp1B8.unk_08;
    sp1D8.unk_00.unk_00 -= sp1B8.unk_00;
    sp1D8.unk_00.unk_04 -= sp1B8.unk_04;
    sp1D8.unk_00.unk_08 -= sp1B8.unk_08;
    sp1E8.unk_00 = sp1D8.unk_00.unk_00 - sp1C8.unk_00.unk_00;
    sp1E8.unk_04 = sp1D8.unk_00.unk_04 - sp1C8.unk_00.unk_04;
    sp1E8.unk_08 = sp1D8.unk_00.unk_08 - sp1C8.unk_00.unk_08;
    func_001E4E80(&sp1C8.unk_00, &sp1D8.unk_00, &sp1E8, sp1F8, 1, &sp1FE, &sp100);
    if (sp1FE) {
        if (func_00193C80(sp1F8, sp100.unk_10, sp100.unk_12, &sp188, arg3) != 0) {
            func_00155810(&sp198, func_001979C0(temp2), &sp188);
            func_00154B00(&spA0, func_001979C0(arg0));
            func_00155810(arg1, &spA0, &sp198);
        }
    }
}
