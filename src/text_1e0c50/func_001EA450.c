/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001EA450_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001EA450_0;

typedef s32 (*unk_func_001EA450_1)(s32, unk_func_001EA450_0 *);
typedef void (*unk_func_001EA450_2)(unk_func_001EA450_0 *);

s32 func_00208C00(s32);
unk_func_001EA450_1 func_00208C40(s32);
unk_func_001EA450_2 func_00208B80(s32);
void *memset(void *, s32, u32);

u8 func_001EA450(s32 arg0, s32 arg1, unk_func_001EA450_0 *arg2) {
    s32 a;
    unk_func_001EA450_1 f;
    unk_func_001EA450_2 g;
    s8 r;

    a = func_00208C00(arg0);
    f = func_00208C40(arg0);
    g = func_00208B80(a);
    r = 0;
    memset(arg2, 0, 0xC);
    arg2->unk_0C = 0;
    r = f(arg1, arg2);
    if (r == 1) {
        g(arg2);
    }
    return r;
}
