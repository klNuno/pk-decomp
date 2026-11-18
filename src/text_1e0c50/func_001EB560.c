/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001EB560_0;

typedef void (*unk_func_001EB560_1)(s32, unk_func_001EB560_0 *, s32);
unk_func_001EB560_1 func_00208CF0();

void func_001EB560(s32 arg0, unk_func_001EB560_0 *arg1, s32 arg2) {
    s32 temp;
    unk_func_001EB560_1 fp;

    temp = (arg1++)->unk_00;
    fp = func_00208CF0(temp);
    fp(arg0, arg1, arg2);
}
