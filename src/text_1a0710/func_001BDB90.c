/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BDB90_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001BDB90_0;

void *HMU_fn_p_vMalloc(s32, s32);
s32 func_00132870();
s32 func_001BDA70();

unk_func_001BDB90_0 *func_001BDB90(void) {
    unk_func_001BDB90_0 *temp;

    temp = HMU_fn_p_vMalloc(func_001BDA70(), 0);
    temp->unk_04 = func_00132870();
    return temp;
}
