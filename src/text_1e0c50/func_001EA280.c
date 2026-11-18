/* profile: o0_301 */
#include "common.h"

typedef void (*unk_func_001EA280_0)(s32);
typedef void (*unk_func_001EA280_1)(s32, s32);

s32 func_00208C00();
unk_func_001EA280_1 func_00208C80();
unk_func_001EA280_0 func_00208BC0();

void func_001EA280(s32 arg0, s32 arg1, s32 arg2) {
    s32 a;
    unk_func_001EA280_1 b;
    unk_func_001EA280_0 c;

    a = func_00208C00(arg0);
    b = func_00208C80(arg0);
    c = func_00208BC0(a);
    c(arg2);
    b(arg1, arg2);
}
