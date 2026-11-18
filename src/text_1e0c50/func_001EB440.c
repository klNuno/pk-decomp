/* profile: o0_301 */
#include "common.h"

typedef void (*unk_func_001EB440_0)();

typedef struct unk_func_001EB440_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001EB440_1;

unk_func_001EB440_0 func_00208D20();

void func_001EB440(s32 arg0, unk_func_001EB440_1 *arg1, s32 arg2) {
    s32 temp;
    unk_func_001EB440_0 temp2;

    temp = (arg1++)->unk_00;
    temp2 = func_00208D20(temp);
    temp2(arg0, arg1, arg2);
}
