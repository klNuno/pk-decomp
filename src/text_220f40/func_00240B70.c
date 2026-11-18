/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00240B70_0 {
    f32 unk_00;
    f32 unk_04;
} unk_func_00240B70_0;

typedef struct unk_func_00240B70_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_00240B70_1;

typedef struct unk_func_00240B70_2 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00240B70_2;

typedef union unk_func_00240B70_3 {
    u8 unk_00;
    unk_func_00240B70_0 unk_00_vec;
    unk_func_00240B70_2 *unk_00_ptr;
    u8 pad_00[0x18];
} unk_func_00240B70_3;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00240B70_3 *);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 func_001273A8(f32);
void func_001A95E0(u8, u8);
void func_001A96C0(u8, s32);
void func_001A9810(u8);
void func_001A9870(u8, u8);
void func_001A9920(void);
void func_001AA0A0(u8, unk_func_00240B70_1 *, unk_func_00240B70_1 *);

extern s8 D_0035FF24;
extern u8 D_0035FF38;
extern u8 D_0035FF39;
extern u8 D_0035FF3A;
extern u8 D_0035FF3B;

s32 *func_00240B70(s32 arg0, s32 *arg1) {
    unk_func_00240B70_0 *temp0;
    u8 temp1;
    u8 temp2;
    u8 temp3;
    unk_func_00240B70_2 *temp4;

    s32 temp5;
    unk_func_00240B70_3 sp70;
    unk_func_00240B70_1 sp88;
    unk_func_00240B70_1 sp90;
    u8 sp98[8];

    switch (temp5 = arg1[-2]) {
    case 0x29A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp1 = sp70.unk_00;
        func_001A9810(temp1);
        return arg1;

    case 0x2A6:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        sp98[4] = sp70.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        sp98[5] = sp70.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        sp98[6] = sp70.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        sp98[7] = sp70.unk_00;
        if (sp98[4] >= 4 || sp98[5] >= 4 || sp98[6] >= 4 || sp98[7] >= 4) {
            D_0035FF38 = 0;
            D_0035FF39 = 1;
            D_0035FF3A = 2;
            D_0035FF3B = 3;
            D_0035FF24 = 0;
        } else {
            D_0035FF38 = sp98[4];
            D_0035FF39 = sp98[5];
            D_0035FF3A = sp98[6];
            D_0035FF3B = sp98[7];
            D_0035FF24 = 1;
        }
        return arg1;

    case 0x2A5:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp3 = sp70.unk_00;
        temp3--;
        if (temp3 >= 4) {
            temp3 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp0 = &sp70.unk_00_vec;
        sp88.unk_00 = func_001273A8(temp0->unk_00);
        sp88.unk_04 = func_001273A8(temp0->unk_04);
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp0 = &sp70.unk_00_vec;
        sp90.unk_00 = func_001273A8(temp0->unk_00);
        sp90.unk_04 = func_001273A8(temp0->unk_04);
        func_001AA0A0(temp3, &sp88, &sp90);
        return arg1;

    case 0x29B:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp1 = sp70.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp2 = sp70.unk_00;
        func_001A95E0(temp1, temp2);
        func_001A9920();
        return arg1;

    case 0x29C:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp2 = sp70.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp4 = sp70.unk_00_ptr;
        func_001A96C0(temp2, fn_h_StandardGameGetSuperObject(temp4->unk_04));
        return arg1;

    case 0x29D:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp1 = sp70.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
        temp2 = sp70.unk_00;
        func_001A9870(temp1, temp2);
        return arg1;
    }
    return arg1;
}
