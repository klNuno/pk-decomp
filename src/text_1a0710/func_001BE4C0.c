/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
s32 func_001BE470(s32);

s32 func_001BE4C0(s32 arg0) {
    if (func_001971C0(arg0) != 2) {
        return 0;
    }
    if ((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0x20)) == 0) {
        return 0;
    }
    return func_001BE470((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0x20)));
}
