/* profile: o0 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001C4DF0(s32);

s32 func_001C8260(s32 arg0) {
    if (func_001C4DF0(*HIE_fn_hGetSuperObjectObject(arg0)) != 0) {
        return 1;
    }
    return 0;
}
