/* profile: o0 */
#include "common.h"

f32 func_00209130(s32);

s32 func_002090E0(s32 arg0, void *arg1) {
    (*(f32 *)((u8 *)arg1 + 0)) = func_00209130(arg0);
    (*(s32 *)((u8 *)arg1 + 0xC)) = 8;
    return 1;
}
