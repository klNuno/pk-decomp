/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 *unk_04;
    u8 pad_08[0x28];
    s32 unk_30;
    u8 pad_34[0x14];
    f32 unk_48;
    u8 pad_4C[0x4];
    s32 unk_50;
} unk_Q_0;

f32 func_00167A50(void);
f32 func_00193410(void);
void func_00167A70(f32);
s32 func_00133AB0(s32 *);
s32 func_00168590(s32, u8);
void func_00168600(s32, s32, s32, s32, s32, s32);
s32 func_00168520(s32, u8, u8, s32, f32);
void func_00157810(s32);
void func_001685C0(s32, s32, s32, s32);
s32 func_0015CA20(s32 *);
s32 *func_0015CA30(s32 *);
void func_001686C0(s32, s32, s32, s32, s32);
void func_00162340(s32);
void func_00167450(s32, s32 *, s32);
extern s64 D_0035F8B0;
extern u8 D_0035F8B8;
extern u8 D_0035F8BC;
extern u8 D_0035F8C0;
extern s32 D_0035F8C4;
extern f32 D_0035F8C8;
extern u8 D_0035F90C;
extern unk_Q_0 *D_0035FE28;

void func_0012E390(s32 arg0, unk_Q_0 *arg1, s32 arg2) {
    f32 saved;
    s32 temp_s0;
    s32 temp_s4;
    s32 type;

    D_0035F8B0 = 0;
    saved = func_00167A50();
    {
        f32 t = func_00193410();
        func_00167A70(t * arg1->unk_48);
    }
    D_0035FE28 = arg1;
    type = arg1->unk_00;
    if (type == 8) {
        temp_s0 = func_00133AB0(arg1->unk_04);
        if (D_0035F8B8 == 0) {
            func_00168600(arg0, temp_s0, 0, arg2, func_00168590(temp_s0, 0), arg1->unk_30);
        } else if (D_0035F8B8 == 1) {
            func_00168600(arg0, temp_s0, 0, arg2, func_00168590(temp_s0, D_0035F8BC), arg1->unk_30);
        } else if (D_0035F8B8 == 2) {
            temp_s4 = func_00168520(temp_s0, D_0035F8BC, D_0035F8C0, 0, D_0035F8C8);
            if (temp_s4 != 0) {
                func_00168600(arg0, temp_s0, 0, arg2, temp_s4, arg1->unk_30);
                func_00157810(temp_s4);
            } else {
                func_001685C0(arg0, temp_s0, 0, arg2);
            }
        } else {
            func_001685C0(arg0, temp_s0, 0, arg2);
        }
    } else if (type == 0x20) {
        {
            s32 *p = arg1->unk_04;
            D_0035F8B0 = arg1->unk_50;
            temp_s0 = func_0015CA20(p);
        }
        func_001686C0(arg0, func_00133AB0(func_0015CA30(arg1->unk_04)), 0, arg2, temp_s0);
    } else if (type == 0x40) {
        if (D_0035F90C != 0) {
            temp_s0 = func_0015CA20(arg1->unk_04);
            func_00162340(1);
            func_001686C0(arg0, func_00133AB0(func_0015CA30(arg1->unk_04)), 0, arg2, temp_s0);
            func_00162340(0);
        }
    } else if (type & 0x480) {
        func_00167450(arg0, arg1->unk_04, arg2);
    } else if (type & 0x80000) {
        D_0035F8C4 = 1;
        func_00167450(arg0, (s32 *)*arg1->unk_04, arg2);
        D_0035F8C4 = 0;
    }
    func_00167A70(saved);
}
