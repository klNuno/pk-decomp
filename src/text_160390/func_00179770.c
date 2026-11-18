#include "common.h"

typedef struct unk_func_00179770_0 {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
} unk_func_00179770_0;

typedef struct unk_func_00179770_1 {
    u8 pad_00[0x10];
    u8 unk_10[0x20];
    s32 unk_30;
    u8 pad_34[0xC];
} unk_func_00179770_1;

typedef struct unk_func_00179770_2 {
    u8 pad_00[0x10];
} unk_func_00179770_2;

typedef struct unk_func_00179770_3 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00179770_3;

void func_00179E70(unk_func_00179770_1 *, void *);
void func_0017A2B0(unk_func_00179770_0 *, void *, u32, f32, f32);
void func_00285800(s32, s32, s32, void *);
void func_00285940(s32, s32, s32, void *);
void func_00285A50(s32, s32, void *);
void func_00285CF0(s32, s32, s32, void *);
void func_00285D70(f32, f32, f32, f32);
void func_00287570(s32, s32, s32, s32, s32);
extern s8 D_0035FAD4;
extern s8 D_0035FAD8;
extern unk_func_00179770_3 *D_0035FB04;
extern s32 D_0035FBAC;
extern void *D_0035FBB0;
extern u32 D_0035FC88;
extern s32 D_0035FC8C;
extern u32 D_0035FC90;
extern u32 D_0035FCD0;
extern u32 D_0035FCE0;
extern u32 D_0035FCF0;
extern unk_func_00179770_2 D_0036EFE0[][0x1770];
extern unk_func_00179770_2 D_0039DDE0[][0x1770];
extern unk_func_00179770_2 D_003CCBE0[][0x1770];
extern s32 D_007B2414[];
extern s32 D_007B243C[];
extern s32 D_007B2440[];
extern s32 D_007B8284[];
extern s32 *D_007B8F54[];

void func_00179770(unk_func_00179770_0 *arg0, unk_func_00179770_1 *arg1, u32 arg2) {
    u32 temp = D_0035FC88;
    u32 temp2;
    u32 i;
    s32 temp3 = 0;
    s32 temp4;
    s32 temp5;
    f32 temp6;
    f32 temp7;

    if (arg2 != 0 && (temp2 = temp + arg2 * 6) < 0x1770) {
        temp4 = D_0035FC8C;
        D_0035FC88 = temp2;
        D_0035FCF0 = (u32)&D_003CCBE0[temp4][temp] | 0x30000000;
        D_0035FCE0 = (u32)&D_0039DDE0[temp4][temp] | 0x30000000;
        D_0035FCD0 = (u32)&D_0036EFE0[temp4][temp] | 0x30000000;
        temp6 = 10.0f * arg0->unk_04;
        temp7 = 10.0f * arg0->unk_08;
        if (temp6 <= 0.0f) {
            temp6 = 0.01f;
        }
        if (temp7 <= 0.0f) {
            temp7 = 0.01f;
        }
        func_0017A2B0(arg0, D_0035FBB0, 1, temp6, temp7);
        for (i = 0; i < arg2; i += D_0035FC90) {
            unk_func_00179770_1 *temp8 = &arg1[i];
            temp3++;
            if (temp8->unk_30 != 2) {
                func_00179E70(temp8, temp8->unk_10);
            }
        }
        func_00285D70(0.5f, 0.5f, 0.5f, 1.0f);
        D_0035FB04->unk_0C = D_0035FBAC;
        D_007B2414[0] = 2;
        D_0035FAD4 = 0;
        D_0035FAD8 = 0;
        if (D_007B2440[0] & 0x600) {
            *D_007B8F54[0] &= ~0x200;
            *D_007B8F54[0] &= ~0x100;
        }
        D_007B2440[0] = 0;
        func_00285A50(0x1406, -2, &D_003CCBE0[D_0035FC8C][temp]);
        temp5 = temp3 * 6;
        func_00285940(temp5, 0x1406, -2, &D_0039DDE0[D_0035FC8C][temp]);
        func_00285CF0(temp5, 0x1406, -2, &D_003CCBE0[D_0035FC8C][temp]);
        func_00285800(temp5, 0x1406, -2, &D_0036EFE0[D_0035FC8C][temp]);
        D_007B243C[0] = 1;
        func_00287570(4, 0, temp5, D_007B8284[0], 1);
        D_007B243C[0] = 0;
        D_007B2414[0] = 3;
    }
}
