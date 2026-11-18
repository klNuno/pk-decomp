/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001C73F0_0 {
    u8 pad_00[0x76];
    u8 unk_76;
} unk_func_001C73F0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001C6C30(s32);
unk_func_001C73F0_0 *func_001C4820(s32);
s32 func_001ABC30(unk_func_001C73F0_0 *, s32);
s32 func_001ABCE0(unk_func_001C73F0_0 *, s32);

s32 func_001C73F0(s32 arg0, s32 arg1) {
    s32 temp;
    s32 temp2;

    temp = *HIE_fn_hGetSuperObjectObject(arg0);
    if (arg1 == func_001C6C30(temp)) {
        return 1;
    }
    temp2 = func_001ABC30(func_001C4820(temp), arg1);
    if (temp2 == 0) {
        if (func_001ABCE0(func_001C4820(temp), arg1) != 0) {
            return 0;
        }
        if (func_001C4820(temp)->unk_76 == 1) {
            return 0;
        }
    }
    return 1;
}
