/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFD60_0 {
    u8 pad_00[0x3C];
    f32 unk_3C[2];
} unk_func_001BFD60_0;

typedef struct unk_func_001BFD60_1 {
    s32 unk_00;
    unk_func_001BFD60_0 *unk_04;
} unk_func_001BFD60_1;

unk_func_001BFD60_1 *HIE_fn_hGetSuperObjectObject(s32);

f32 func_001BFD60(s32 arg0, s64 arg1) {
    if (arg1 < 2 && arg1 >= 0) {
        return ((unk_func_001BFD60_0 *)((u8 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_04 + (s32)arg1 * 4))->unk_3C[0];
    }
    return 0.0f;
}
