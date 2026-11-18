#include "common.h"

typedef struct unk_func_002D49B0_1 {
    u8 pad_00[0x4];
    struct unk_func_002D49B0_1 *unk_04;
    s32 unk_08;
} unk_func_002D49B0_1;

typedef struct unk_func_002D49B0_0 {
    unk_func_002D49B0_1 *unk_00[1];
} unk_func_002D49B0_0;

extern "C" {

unk_func_002D49B0_1 *func_002CF800(void *);
void func_002CF7F0(unk_func_002D49B0_0 *, unk_func_002D49B0_1 *);
void func_002CF7E0(unk_func_002D49B0_0 *, unk_func_002D49B0_1 *);
s32 func_002D4B70(s32);
void func_002D4AB0(unk_func_002D49B0_0 *, unk_func_002D49B0_0 *);
void func_002D2940(unk_func_002D49B0_0 *, void *, unk_func_002D49B0_0 *);
void func_002D4C70(s32, s32);

s32 func_002D49B0(void *arg0) {
    unk_func_002D49B0_0 temp0;
    unk_func_002D49B0_0 temp1;
    unk_func_002D49B0_0 temp2;
    unk_func_002D49B0_0 temp3;
    unk_func_002D49B0_0 temp4;
    unk_func_002D49B0_0 temp5;
    unk_func_002D49B0_0 temp6;
    unk_func_002D49B0_0 temp7;
    unk_func_002D49B0_0 temp8;
    s32 temp9;

    func_002CF7F0(&temp4, func_002CF800(arg0)->unk_04);
    temp1.unk_00[0] = temp4.unk_00[0];
    temp0 = temp1;
    while (func_002CF7E0(&temp8, func_002CF800(arg0)), temp0.unk_00[0] != temp8.unk_00[0]) {
        temp9 = temp0.unk_00[0]->unk_08;
        if (!func_002D4B70(temp9)) {
            temp3.unk_00[0] = temp0.unk_00[0];
            func_002D4AB0(&temp5, &temp3);
            temp6.unk_00[0] = temp5.unk_00[0];
            func_002D2940(&temp7, arg0, &temp6);
            temp2.unk_00[0] = temp7.unk_00[0];
            temp0 = temp2;
            func_002D4C70(temp9, 1);
        }
        temp0.unk_00[0] = temp0.unk_00[0]->unk_04;
    }
    return 1;
}

}
