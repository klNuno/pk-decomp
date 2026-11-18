/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EB910_0;

typedef s32 (*unk_func_001EB910_1)(s32, s32);

u8 func_001EB8C0();
unk_func_001EB910_1 func_00208AA0();

s32 func_001EB910(s32 arg0, s32 arg1, s32 arg2, unk_func_001EB910_0 *arg3) {
    unk_func_001EB910_1 fn;

    fn = func_00208AA0(arg2);
    arg1 = fn(arg0, arg1);
    arg3->unk_00 = func_001EB8C0(arg0, arg2);
    arg3->unk_0C = 0x14;
    return arg1;
}
