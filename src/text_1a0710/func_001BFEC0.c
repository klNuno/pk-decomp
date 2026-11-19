/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFEC0_0 {
    u8 pad_00[0x4];
    u8 *unk_04;
} unk_func_001BFEC0_0;

unk_func_001BFEC0_0 *HIE_fn_hGetSuperObjectObject();

void func_001BFEC0(s32 arg0, s64 arg1, s32 arg2) {
    if (arg1 < 2 && arg1 >= 0) {
        ((s32 *)((u8 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_04 + (s32)arg1 * 4))[17] = arg2;
    }
}
