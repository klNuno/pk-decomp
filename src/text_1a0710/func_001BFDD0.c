/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFDD0_0 {
    u8 pad_00[0x3C];
    f32 unk_3C[2];
} unk_func_001BFDD0_0;

typedef struct unk_func_001BFDD0_1 {
    s32 unk_00;
    unk_func_001BFDD0_0 *unk_04;
} unk_func_001BFDD0_1;

unk_func_001BFDD0_1 *HIE_fn_hGetSuperObjectObject(s32);

void func_001BFDD0(s32 arg0, s64 arg1, f32 arg2) {
    if (arg1 < 2 && arg1 >= 0) {
        ((f32 *)((u8 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_04 + (s32)arg1 * 4))[15] = arg2;
    }
}
