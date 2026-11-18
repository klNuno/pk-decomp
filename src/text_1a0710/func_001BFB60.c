/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
void func_001BFBA0(s32, s32);

void func_001BFB60(s32 arg0, s32 arg1) {
    func_001BFBA0((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 4)), arg1);
}
