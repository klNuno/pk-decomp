/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F19D0_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001F19D0_0;

unk_func_001F19D0_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001B84B0();
s32 func_00138760();

s32 func_001F19D0(s32 arg0) {
    s32 temp;
    s32 temp2;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (temp == 0) {
        return 0;
    }
    if ((temp2 = func_001B84B0(temp)) == 0) {
        return 0;
    }
    return func_00138760(temp2);
}
