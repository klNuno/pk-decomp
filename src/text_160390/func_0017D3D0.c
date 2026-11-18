#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08; } unk_func_0017D3D0_0;

typedef struct {
    u8 pad_00[4];
    f32 unk_04, unk_08, unk_0C;
} unk_func_0017D3D0_1;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C, unk_10;
    u8 pad_14[0x17C];
    unk_func_0017D3D0_1 *unk_190;
    u8 pad_194[0x4C];
    f32 unk_1E0;
} unk_func_0017D3D0_2;

extern void func_0016BAB0(void);
extern void func_001863F0(unk_func_0017D3D0_1 *, s32);
extern void func_00190CC0(void);
extern void func_00285880(f32, f32, f32);
extern void func_00285A00(f32, f32);
extern void func_00285AC0(s32);
extern void func_00285AF0(void *);
extern void func_00285C30(void);
extern void func_00285D70(f32, f32, f32, f32);
extern void func_00285E80(s32);

extern s8 D_0035FAD0, D_0035FAD4, D_0035FAD8;
extern f32 D_0035FAE0;
extern unk_func_0017D3D0_2 *D_0035FB04;
extern s32 D_0035FCF8, D_0035FCFC, D_0035FD00;
extern f32 D_0035FD04, D_0035FD08, D_0035FD0C;
extern s32 D_0035FD60, D_0035FD70;
extern u8 D_003FBF60[];
extern f32 D_003FBFB0[], D_003FBFB4[], D_003FBFB8[];
extern f32 D_003FBFC0[], D_003FBFC4[], D_003FBFC8[];
extern u32 D_007B24E4[];

s32 func_0017D3D0(unk_func_0017D3D0_0 *arg0, unk_func_0017D3D0_1 *arg1, s32 arg2, u32 arg3,
                  f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9)
{
    s32 temp0;
    s32 temp1;
    f32 temp2, temp3, temp4, temp5, temp6, temp7;

    if (D_0035FB04->unk_1E0 < 0.01f) {
        return 1;
    }
    if (arg1 == NULL || (arg1 != NULL && D_0035FD00 != D_0035FD70) || D_0035FCF8 == 0) {
        temp1 = D_0035FCF8;
        if (temp1 != 0) {
            func_00190CC0();
            if (D_0035FCF8 != 0) {
                func_00285D70(0.5f, 0.5f, 0.5f, 1.0f);
                func_00285C30();
                D_0035FD00 = 0;
                D_0035FCF8 = 0;
                D_0035FCFC = 0;
            }
        }
        D_0035FAD4 = 1;
        D_0035FAE0 = (f32)arg3;
        D_0035FAD0 = 0;
        D_0035FAD8 = 1;
        if (temp1 == 0) {
            func_0016BAB0();
        }
        D_0035FAD4 = 1;
        D_0035FAE0 = (f32)arg3;
        D_0035FAD8 = 1;
        D_0035FAD0 = 0;
        D_0035FB04->unk_190 = arg1;
        temp0 = D_0035FB04->unk_0C;
        D_0035FB04->unk_0C = -0x409;
        D_0035FB04->unk_10 = -0x409;
        D_0035FD60 = 1;
        if (D_0035FD70 != 0) {
            f32 temp = D_0035FB04->unk_1E0;
            D_0035FB04->unk_1E0 = 0.2f;
            D_0035FD60 = 1;
            func_001863F0(arg1, 1);
            D_0035FD60 = 0;
            D_0035FB04->unk_1E0 = temp;
        } else {
            D_0035FB04->unk_1E0 = 1.0f;
            D_0035FD60 = 1;
            func_001863F0(arg1, 1);
            D_0035FD60 = 0;
        }
        if (arg1 != NULL) {
            D_0035FD00 = D_0035FD70;
            D_0035FD0C = D_0035FB04->unk_190->unk_04;
            D_0035FD08 = D_0035FB04->unk_190->unk_08;
            D_0035FD04 = D_0035FB04->unk_190->unk_0C;
        } else {
            D_0035FD00 = 0;
            D_0035FD0C = 1.0f;
            D_0035FD08 = 1.0f;
            D_0035FD04 = 1.0f;
        }
        D_0035FCF8 = 1;
        if (temp1 == 0) {
            func_00285AC0(0x1700);
            func_00285AF0(D_003FBF60);
        }
        D_007B24E4[0] &= ~0x400;
        func_00285E80(4);
    }
    if (arg1 != NULL) {
        D_0035FD0C = 0.5f * arg1->unk_04;
        D_0035FD08 = 0.5f * arg1->unk_08;
        D_0035FD04 = 0.5f * arg1->unk_0C;
    } else {
        D_0035FD0C = 0.5f;
        D_0035FD08 = 0.5f;
        D_0035FD04 = 0.5f;
    }

    temp2 = D_003FBFB0[0] * arg4;
    temp3 = D_003FBFB4[0] * arg4;
    temp4 = D_003FBFB8[0] * arg4;
    temp5 = D_003FBFC0[0] * arg5;
    temp6 = D_003FBFC4[0] * arg5;
    temp7 = D_003FBFC8[0] * arg5;

    func_00285D70(D_0035FD0C, D_0035FD08, D_0035FD04, D_0035FB04->unk_1E0);
    func_00285A00(arg6, arg7);
    func_00285880(arg0->unk_00 - temp2 - temp5, arg0->unk_04 - temp3 - temp6, arg0->unk_08 - temp4 - temp7);
    func_00285A00(arg8, arg7);
    func_00285880(arg0->unk_00 + temp2 - temp5, arg0->unk_04 + temp3 - temp6, arg0->unk_08 + temp4 - temp7);
    func_00285A00(arg8, arg9);
    func_00285880(temp5 + (arg0->unk_00 + temp2), temp6 + (arg0->unk_04 + temp3), temp7 + (arg0->unk_08 + temp4));
    func_00285A00(arg6, arg7);
    func_00285880(arg0->unk_00 - temp2 - temp5, arg0->unk_04 - temp3 - temp6, arg0->unk_08 - temp4 - temp7);
    func_00285A00(arg8, arg9);
    func_00285880(temp5 + (arg0->unk_00 + temp2), temp6 + (arg0->unk_04 + temp3), temp7 + (arg0->unk_08 + temp4));
    func_00285A00(arg6, arg9);
    func_00285880(temp5 + (arg0->unk_00 - temp2), temp6 + (arg0->unk_04 - temp3), temp7 + (arg0->unk_08 - temp4));

    D_0035FCFC += 6;
    D_0035FB04->unk_0C = temp0;
    D_0035FAD4 = 0;
    D_0035FAD8 = 0;
    return 0;
}
