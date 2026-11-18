/* profile: o0_301 */
#include "common.h"

typedef s32 *(*unk_func_001EB670_0)(s32, s32 *);

void func_001EB640(s32);
u8 func_001EB660(void);
unk_func_001EB670_0 func_00208DB0(s32);

s32 *func_001EB670(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 id = *arg1;
    unk_func_001EB670_0 fn = func_00208DB0(id);

    func_001EB640(0);
    arg1 = fn(arg0, arg1 += 2);
    arg2[0] = func_001EB660() & ~4;
    arg2[3] = 0x14;
    return arg1;
}
