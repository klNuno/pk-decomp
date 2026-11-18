#include "common.h"

typedef struct unk_func_001930E0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001930E0_0;

typedef struct unk_func_001930E0_1 {
    u8 pad_00[0x78];
    f32 unk_78;
    u8 pad_7C[0x28];
    unk_func_001930E0_0 unk_A4;
    f32 unk_B0;
    unk_func_001930E0_0 unk_B4;
    f32 unk_C0;
    unk_func_001930E0_0 unk_C4;
    f32 unk_D0;
    unk_func_001930E0_0 unk_D4;
    f32 unk_E0;
} unk_func_001930E0_1;

typedef struct unk_func_001930E0_2 {
    u8 pad_00[0x68];
    unk_func_001930E0_1 **unk_68;
} unk_func_001930E0_2;

void func_001559E0(unk_func_001930E0_0 *, f32 *, s32);
s32 func_00155FF0(f32 *);
f32 func_00156150(f32 *);
extern f32 D_0035F4FC;
extern f32 D_0035F500;
extern f32 D_0035F504;
extern f32 D_0035FEB0;

#define TEST(FLAG, VEC, VALUE) \
    if (!(arg5 & (FLAG))) { \
        f32 dot = pos.unk_00 * (VEC).unk_00 + pos.unk_04 * (VEC).unk_04 + pos.unk_08 * (VEC).unk_08; \
        if (dot > arg2 + (VALUE)) { \
            return 0; \
        } \
        if (dot < (VALUE) - arg2) { \
            arg5 |= (FLAG); \
        } \
    }

s32 func_001930E0(unk_func_001930E0_2 *arg0, s32 arg1, f32 arg2, f32 *arg3, s32 arg4, s32 arg5)
{
    unk_func_001930E0_0 pos;
    unk_func_001930E0_1 *temp;
    f32 low = 0.0f;

    if (func_00155FF0(arg3) != 0) {
        arg2 *= func_00156150(arg3);
    }
    temp = *arg0->unk_68;
    func_001559E0(&pos, arg3, arg1);
    arg5 |= 0x40;
    if (!(arg5 & 0x10)) {
        if (pos.unk_08 + arg2 < temp->unk_78) {
            return 0;
        }
        low = pos.unk_08 - arg2;
        if (low > temp->unk_78) {
            arg5 |= 0x10;
        }
    }
    if (!(arg5 & 0x20)) {
        if (0.0f != D_0035FEB0) {
            if (low > D_0035FEB0) {
                D_0035F504 = 0.0f;
                return 0;
            }
            if (low > D_0035FEB0 - D_0035F4FC) {
                D_0035F504 = 1.0f - D_0035F500 * (D_0035F4FC + ((pos.unk_08 - arg2) - D_0035FEB0));
            } else {
                arg5 |= 0x20;
                D_0035F504 = 1.0f;
            }
        } else {
            arg5 |= 0x20;
            D_0035F504 = 1.0f;
        }
    } else {
        D_0035F504 = 1.0f;
    }

    TEST(1, temp->unk_B4, temp->unk_B0)
    TEST(2, temp->unk_A4, temp->unk_C0)
    TEST(4, temp->unk_C4, temp->unk_D0)
    TEST(8, temp->unk_D4, temp->unk_E0)
    return arg5;
}
