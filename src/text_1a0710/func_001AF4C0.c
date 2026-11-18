/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_001AF4C0_0;

typedef struct {
    unk_001AF4C0_0 unk_00, unk_0C;
    f32 unk_18, unk_1C, unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34;
    u8 pad_38[0x28];
    f32 unk_60, unk_64;
    s32 unk_68;
} unk_001AF4C0_1;

typedef struct {
    u8 pad_00[0xC];
    unk_001AF4C0_1 *unk_0C;
    u8 pad_10[0x65];
    u8 unk_75;
} unk_001AF4C0_2;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    unk_001AF4C0_2 *unk_10;
} unk_001AF4C0_3;

typedef struct {
    u8 pad_00[0xF8];
    unk_001AF4C0_0 unk_F8;
} unk_001AF4C0_4;

unk_001AF4C0_3 *HIE_fn_hGetSuperObjectObject(s32);
void func_0011CBB0(char *, const char *, ...);
f64 func_001274A8(f32);
unk_001AF4C0_4 *func_00138760(s32);
f32 func_00151360(f32);
void func_00155EC0(s32, unk_001AF4C0_0 *);
void func_00164F50(char *, s32, s32);
s32 func_001979C0(s32);
s32 func_001AEC70(s32);
void func_001B5370(unk_001AF4C0_2 *, unk_001AF4C0_0 *, unk_001AF4C0_0 *, unk_001AF4C0_0 *);
void func_001B5980(unk_001AF4C0_2 *, f32, unk_001AF4C0_0 *);
s32 func_001B84B0(s32);
f32 func_001E60E0(f32);

extern char D_0034B4B0[], D_0034B4D0[], D_0034B4F0[], D_0034B520[];
extern char D_0034B540[], D_0034B560[], D_0034B580[], D_0034B5A0[];
extern char D_0034B5C0[], D_0034B5E0[];
extern u32 D_005AB848[];
extern f32 D_005AD8B8[];

void func_001AF4C0(void) {
    f32 temp_f;
    unk_001AF4C0_0 sp1F0, sp200, sp210, sp220, sp230, sp240, sp250;
    char sp180[0x70];
    s32 temp_s0, temp_s2;
    unk_001AF4C0_1 *temp_s1;
    unk_001AF4C0_0 *temp_s3;
    unk_001AF4C0_2 *temp_s5;
    unk_001AF4C0_4 *temp_s4;
    s32 temp_s6, temp_s7, temp_fp;

    temp_s6 = 0;
    temp_s7 = 0;
    temp_s4 = NULL;
    (void)temp_s4;
    temp_fp = func_001AEC70(0);
    temp_s5 = HIE_fn_hGetSuperObjectObject(temp_fp)->unk_10;
    temp_s6 = HIE_fn_hGetSuperObjectObject(temp_fp)->unk_08;
    if (temp_s6 != 0) {
        temp_s7 = func_001B84B0(temp_s6);
    }
    if (temp_s7 != 0) {
        temp_s4 = func_00138760(temp_s7);
    }
    if ((u8)temp_s5->unk_75 & 1) {
        temp_s1 = temp_s5->unk_0C;
        temp_s2 = 0x140;
        temp_s0 = 0;
        temp_s3 = &temp_s1->unk_00;
        func_0011CBB0(sp180, D_0034B4B0, func_001274A8(temp_s3->unk_00),
                      func_001274A8(temp_s3->unk_04), func_001274A8(temp_s3->unk_08));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        temp_s3 = &temp_s1->unk_0C;
        func_0011CBB0(sp180, D_0034B4D0, func_001274A8(temp_s3->unk_00),
                      func_001274A8(temp_s3->unk_04), func_001274A8(temp_s3->unk_08));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        func_0011CBB0(sp180, D_0034B4F0, func_001274A8(temp_s1->unk_18),
                      func_001274A8(temp_s1->unk_1C), func_001274A8(temp_s1->unk_20),
                      func_001274A8(temp_s1->unk_24));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        func_0011CBB0(sp180, D_0034B520, func_001274A8(temp_s1->unk_28),
                      func_001274A8(temp_s1->unk_2C));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        func_0011CBB0(sp180, D_0034B540, func_001274A8(temp_s1->unk_30),
                      func_001274A8(temp_s1->unk_34));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        func_0011CBB0(sp180, D_0034B560, func_001274A8(temp_s1->unk_60),
                      func_001274A8(temp_s1->unk_64));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        if (temp_s1->unk_68 != 0) {
            func_001B5370(temp_s5, &sp200, &sp210, &sp220);
            func_0011CBB0(sp180, D_0034B580, func_001274A8(sp200.unk_00),
                          func_001274A8(sp200.unk_04), func_001274A8(sp200.unk_08));
            func_00164F50(sp180, temp_s2, temp_s0);
            temp_s0 += 0x10;
        }
        func_0011CBB0(sp180, D_0034B5A0, func_001274A8((f32)D_005AB848[0] / 1000.0f));
        func_00164F50(sp180, temp_s2, temp_s0);
        temp_s0 += 0x10;
        if (temp_s4 != NULL) {
            ((s32 *)&sp1F0)[0] = ((s32 *)&temp_s4->unk_F8)[0];
            ((s32 *)&sp1F0)[1] = ((s32 *)&temp_s4->unk_F8)[1];
            ((s32 *)&sp1F0)[2] = ((s32 *)&temp_s4->unk_F8)[2];
            temp_f = func_001E60E0(func_00151360(sp1F0.unk_08) +
                                  (func_00151360(sp1F0.unk_00) + func_00151360(sp1F0.unk_04)));
            func_0011CBB0(sp180, D_0034B5C0, func_001274A8(temp_f));
            func_00164F50(sp180, temp_s2, temp_s0);
            temp_s0 += 0x10;
        }
        if (temp_s1->unk_68 != 0) {
            if (temp_s1->unk_68 != 0) {
                func_00155EC0(func_001979C0(temp_fp), &sp240);
                func_001B5980(temp_s5, D_005AD8B8[0], &sp230);
                func_00155EC0(func_001979C0(temp_s1->unk_68), &sp250);
                sp230.unk_00 -= sp240.unk_00;
                sp230.unk_04 -= sp240.unk_04;
                sp230.unk_08 -= sp240.unk_08;
                sp250.unk_00 -= sp240.unk_00;
                sp250.unk_04 -= sp240.unk_04;
                sp250.unk_08 -= sp240.unk_08;
                func_0011CBB0(sp180, D_0034B5E0,
                    func_001274A8(func_001E60E0(func_00151360(sp230.unk_08) +
                                  (func_00151360(sp230.unk_00) + func_00151360(sp230.unk_04)))),
                    func_001274A8(func_001E60E0(func_00151360(sp250.unk_08) +
                                  (func_00151360(sp250.unk_00) + func_00151360(sp250.unk_04)))));
            }
            func_00164F50(sp180, temp_s2, temp_s0);
            temp_s0 += 0x10;
        }
    }
}
