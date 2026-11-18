/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021DFE0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0021DFE0_0;

typedef struct unk_func_0021DFE0_1 {
    union {
        unk_func_0021DFE0_0 *unk_00;
        u32 unk_00_u;
    } u;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021DFE0_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021DFE0_1 *);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_00155C70(void *);
void func_00155E80(void *, void *);
s32 func_001971C0(s32);
s32 func_00199890(s32);
s32 func_00199AA0(unk_func_0021DFE0_0 *);
s32 func_00199B80(s32, s32, s32, s32, u32 *);
u32 func_0019A960(s32);
u32 func_0019B0E0(void);
u32 HIE_fn_hGetSuperObjectObject(s32);
extern s32 D_0035FF70;
extern u8 D_005ACACC[];

typedef struct unk_func_0021DFE0_2 {
    u32 unk_00[0x18];
} unk_func_0021DFE0_2;

s32 *func_0021DFE0(s32 arg0, s32 *arg1, unk_func_0021DFE0_1 *arg2)
{
    unk_func_0021DFE0_0 *temp;
    s32 temp2;
    u32 temp3;
    u32 temp4;
    s32 temp5;
    u32 temp6;
    unk_func_0021DFE0_1 *temp7;
    s32 temp8;
    unk_func_0021DFE0_2 temp9;

    temp5 = arg1[-2];
    switch (temp5) {
        case 0x4D:
            arg2->u.unk_00_u = (func_0019B0E0() & 0xFFFF0000U) >> 16;
            arg2->unk_0C = 6;
            return arg1;
        case 0x4C:
            arg2->u.unk_00_u = (u8)D_005ACACC[0];
            arg2->unk_0C = 6;
            return arg1;
        case 0x4B:
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            temp6 = func_0019A960(fn_h_StandardGameGetSuperObject(arg2->u.unk_00->unk_04));
            arg2->u.unk_00_u = temp6;
            arg2->unk_0C = 6;
            return arg1;
        case 0x11F:
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            arg2->unk_0C = 0x16;
            return arg1;
        case 0x4A:
            temp = NULL;
            temp2 = 0;
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            temp = arg2->u.unk_00;
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            temp7 = arg2;
            if (temp != NULL && func_00199AA0(temp)) {
                temp8 = func_00199890(temp->unk_04);
                func_00155C70(&temp9);
                func_00155E80(&temp9, temp7);
                temp2 = func_00199B80(temp8, D_0035FF70, arg0, 0, &temp9.unk_00[0]);
            }
            if (temp2 == 0) {
                temp3 = 0;
            } else {
                if (func_001971C0(temp2) != 2) {
                    temp4 = 0;
                } else {
                    temp4 = HIE_fn_hGetSuperObjectObject(temp2);
                }
                temp3 = temp4;
            }
            arg2->u.unk_00_u = temp3;
            arg2->unk_0C = 0xB;
            return arg1;
    }
    return arg1;
}
