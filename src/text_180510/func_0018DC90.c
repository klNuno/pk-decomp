#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_0018DC90_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_0018DC90_0 *unk_0C;
} unk_func_0018DC90_1;

void func_00180740(s32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_0018EDB0(unk_func_0018DC90_0 *, s32);
void func_0018F050(s32);
void func_00285D00(s32, s32, s32, s32);
void func_00285E30(f32, f32, f32, f32);
void func_00285E40(s32);
extern f32 D_0035F4F4;
extern f32 D_0035FE08;
extern f32 D_0035FE0C;
extern u32 D_0035FE2C;
extern u32 D_0035FE30;
extern u32 D_0035FE34;
extern u32 D_0035FE38;
extern u32 D_0035FE3C;
extern s8 D_0035FE40;
extern f32 D_0035FE44;
extern f32 D_0035FE48;
extern f32 D_0035FE4C;
extern f32 D_005050D0[];
extern f32 D_005050D4[];
extern f32 D_005050D8[];
extern f32 D_005050E0[];
extern f32 D_005050E4[];
extern f32 D_005050E8[];
extern unk_func_0018DC90_1 *D_00508860[];
extern unk_func_0018DC90_1 *D_00509860[];
extern unk_func_0018DC90_1 *D_00509864[];
extern unk_func_0018DC90_1 *D_00509868[];
extern unk_func_0018DC90_1 *D_0050986C[];
extern unk_func_0018DC90_1 *D_00509890[];
extern unk_func_0018DC90_1 *D_005098E0[];

#define UNK_LOOP(array, first, limit) \
    for (temp = (first); temp < (limit); temp++) { \
        unk_func_0018DC90_1 *temp2 = (array)[temp]; \
        if (temp2 != 0 && arg0 == temp2->unk_0C->unk_24) { \
            func_0018EDB0(temp2->unk_0C, 0); \
        } \
    }

#define UNK_ONE(array) { \
    unk_func_0018DC90_1 *temp2 = (array)[0]; \
    if (temp2 != 0 && temp2->unk_0C->unk_24 == arg0) { \
        func_0018EDB0(temp2->unk_0C, 0); \
    } \
}

void func_0018DC90(s32 arg0) {
    u32 temp3;
    u32 temp;

    func_00285D00(1, 1, 1, 0);
    func_0018F050(1);
    temp = D_0035FE3C;
    for (temp3 = temp * sizeof(void *); temp < D_0035FE2C; temp3 += sizeof(void *), temp++) {
        unk_func_0018DC90_1 *temp2 = *(unk_func_0018DC90_1 **)((u8 *)D_00508860 + temp3);
        if (temp2 != 0 && arg0 == temp2->unk_0C->unk_24) {
            func_0018EDB0(temp2->unk_0C, 0);
        }
    }
    func_0018F050(0);
    func_00285D00(0, 0, 0, 1);
    func_00285E30(0.0f, 0.0f, 0.0f, 0.0f);
    func_00285E40(0x4000);

    func_00285D00(1, 1, 1, 1);
    func_0018F050(1);
    UNK_LOOP(D_005098E0, 0, D_0035FE38)
    func_0018F050(0);
    if (D_0035FE38 != 0) {
        func_00180740(1, 0.1f, D_0035FE44, D_0035FE48, D_0035FE4C, D_005050E0[0], D_005050E4[0], D_005050E8[0], D_0035FE0C);
    }
    func_00285D00(0, 0, 0, 1);
    func_00285E30(0.0f, 0.0f, 0.0f, 0.0f);
    func_00285E40(0x4000);

    switch (D_0035FE40) {
    case 0:
        func_00285D00(1, 1, 1, 1);
        break;
    case 1:
        func_00285D00(0, 0, 0, 1);
        break;
    case 2:
        func_00285D00(1, 1, 1, 0);
        break;
    }
    func_0018F050(1);
    UNK_LOOP(D_00509890, 0, D_0035FE34)

    if (D_0035FE30 > 3) {
        UNK_ONE(D_0050986C)
    }
    if (D_0035FE30 > 2) {
        UNK_ONE(D_00509860)
        UNK_ONE(D_00509864)
        func_0018F050(0);
        func_00285D00(0, 0, 0, 0);
        func_0018F050(1);
        UNK_ONE(D_00509868)
    }
    func_0018F050(0);

    if (arg0 == 0) {
        func_00180740(1, D_0035F4F4, 0.0f, 0.0f, 0.0f, D_005050D0[0], D_005050D4[0], D_005050D8[0], D_0035FE08);
    }
    func_00285D00(1, 1, 1, 0);
    if (arg0 != 0) {
        D_0035FE3C = D_0035FE2C;
    }
}
