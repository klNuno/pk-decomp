/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001C8340_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_001C8340_0;

s32 *HIE_fn_hGetSuperObjectObject();
unk_func_001C8340_0 *func_00197880();

s32 func_001C8340(s32 *arg0) {
    unk_func_001C8340_0 *b;
    s32 a;

    if (*arg0 == 2) {
        a = *HIE_fn_hGetSuperObjectObject(arg0);
        b = func_00197880(a);
        if (b->unk_14 != 0) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
