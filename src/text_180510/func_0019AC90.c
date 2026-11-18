/* profile: o0 */
#include "common.h"

typedef struct unk_func_0019AC90_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0019AC90_0;

unk_func_0019AC90_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00198120(s32);
extern s32 *D_003338D8[];

s32 func_0019AC90(s32 arg0) {
    unk_func_0019AC90_0 *temp;
    s32 idx;
    if (arg0 == 0 || HIE_fn_hGetSuperObjectObject(arg0)->unk_04 == 0
        || (temp = HIE_fn_hGetSuperObjectObject(arg0)) == 0) {
        return 0;
    }
    idx = func_00198120(temp->unk_04) - 0x10000;
    return D_003338D8[0][idx];
}
