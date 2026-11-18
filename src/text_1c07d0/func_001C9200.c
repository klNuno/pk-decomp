/* profile: o0 */
#include "common.h"

void *HMU_fn_p_vMalloc();

void func_001C9200(u8 *arg0, s32 arg1) {
    *(void **)(arg0 + 0x8C) = HMU_fn_p_vMalloc(arg1, 1);
}
