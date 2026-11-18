/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_00312EB0_0 {
    u32 unk_00;
    u32 unk_04;
} unk_func_00312EB0_0;

typedef struct unk_func_00312EB0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00312EB0_1;

void func_00313110();
void func_003130D0();
void func_00313090();

void func_00312EB0(unk_func_00312EB0_0 *arg0, u32 arg1, u32 arg2, s32 arg3, unk_func_00312EB0_1 *arg4, void *arg5, void *arg6) {
    if (arg2 != 0) {
        s32 m1 = -1;
        if (arg2 < arg0->unk_04 + m1) {
            func_00313110(&arg4[arg3 - 1], &arg4[arg3], &arg4[arg3 + 1], arg5);
        } else {
            func_003130D0(&arg4[arg3 - 1], &arg4[arg3], arg5);
        }
    } else {
        func_00313090(&arg4[arg3], &arg4[arg3 + 1], arg5);
    }
    if (arg1 != 0) {
        if (arg1 < arg0->unk_00 - 1) {
            func_00313110(&arg4[arg3 - arg0->unk_04], &arg4[arg3], &arg4[arg3 + arg0->unk_04], arg6);
        } else {
            func_003130D0(&arg4[arg3 - arg0->unk_04], &arg4[arg3], arg6);
        }
    } else {
        func_00313090(&arg4[arg3], &arg4[arg3 + arg0->unk_04], arg6);
    }
}
