/* profile: o0 */
#include "common.h"

void HMU_fn_vFree(void *, s32);

void func_001C9730(u8 *arg0) {
    if (*(void **)(arg0 + 0x8C) != 0) {
        HMU_fn_vFree(arg0 + 0x8C, 1);
    }
}
