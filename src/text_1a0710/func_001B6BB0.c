/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B6BB0_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_001B6BB0_0;

unk_func_001B6BB0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B6C50(u8, s32);

s32 func_001B6BB0(u8 arg0, s32 arg1) {
    s32 temp;

    temp = arg1 ? HIE_fn_hGetSuperObjectObject(arg1)->unk_14 : 0;
    return temp ? func_001B6C50(arg0, temp) : 0;
}
