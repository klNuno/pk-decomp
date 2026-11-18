/* profile: o0 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001A70E0(s32);

s32 func_001A7C50(s32 arg0) {
    return func_001A70E0(*HIE_fn_hGetSuperObjectObject(arg0)) == 0;
}
