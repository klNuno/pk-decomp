/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_001F0AE0_0;

void func_001EDDD0(s32);
void HMU_fn_vFree(void *, s32);

void func_001F0AE0(unk_func_001F0AE0_0 *arg0) {
    if (arg0 != 0) {
        func_001EDDD0(arg0->unk_18);
        HMU_fn_vFree(&arg0, 1);
        arg0 = 0;
    }
}
