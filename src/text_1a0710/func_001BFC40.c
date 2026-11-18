/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFC40_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001BFC40_0;

unk_func_001BFC40_0 *HIE_fn_hGetSuperObjectObject();
u8 func_001BFCB0();

u8 func_001BFC40(s32 arg0) {
    s32 temp;
    s32 result;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_04;
    if (temp != 0) {
        result = func_001BFCB0(temp);
    } else {
        result = 0x46;
    }
    return result;
}
