/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B3350_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_001B3350_0;

unk_func_001B3350_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B7740(u8, s32, s16);

s32 func_001B3350(u8 arg0, s32 arg1, s16 arg2) {
    s32 temp = HIE_fn_hGetSuperObjectObject(arg1)->unk_14;

    if (temp != 0) {
        return func_001B7740(arg0, temp, arg2);
    }
    return 3;
}
