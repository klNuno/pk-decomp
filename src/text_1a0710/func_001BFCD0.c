/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFCD0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001BFCD0_0;

unk_func_001BFCD0_0 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_001BFD40(s32);

u8 func_001BFCD0(s32 arg0) {
    s32 temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_04;
    s32 temp2;

    if (temp != 0) {
        temp2 = func_001BFD40(temp);
    } else {
        temp2 = 0x50;
    }
    return temp2;
}
