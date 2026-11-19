/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFE50_1 {
    u8 pad_00[0x44];
    s32 unk_44[1];
} unk_func_001BFE50_1;

typedef struct unk_func_001BFE50_0 {
    u8 pad_00[0x4];
    u8 *unk_04;
} unk_func_001BFE50_0;

unk_func_001BFE50_0 *HIE_fn_hGetSuperObjectObject();

s32 func_001BFE50(s32 arg0, s64 arg1) {
    if (arg1 < 2 && arg1 >= 0) {
        return ((s32 *)((u8 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_04 + (s32)arg1 * 4))[17];
    }
    return 0;
}
