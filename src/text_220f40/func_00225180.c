/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00225180_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_00225180_0;

typedef struct unk_func_00225180_1 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00225180_1;

unk_func_00225180_0 *fn_p_stEvalTree(void *, unk_func_00225180_0 *, unk_func_00225180_1 *);
void func_001ECD90(s32, s32, s32);
void func_001ECF00(s32, s32, s32);
void func_001ED000(s32, s32, s32);
void func_001ED110(s32, s32);

unk_func_00225180_0 *func_00225180(void *arg0, unk_func_00225180_0 *arg1) {
    unk_func_00225180_1 sp50;
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;

    temp3 = (arg1 - 1)->unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp0 = sp50.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp1 = sp50.unk_00;
    if (temp3 == 0x2B) {
        func_001ED110(temp0, temp1);
    } else {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
        temp2 = sp50.unk_00;
        switch (temp3) {
        case 0x28:
            func_001ECD90(temp0, temp1, temp2);
            return arg1;
        case 0x29:
            func_001ECF00(temp0, temp1, temp2);
            return arg1;
        case 0x2A:
            func_001ED000(temp0, temp1, temp2);
            return arg1;
        }
    }
    return arg1;
}
