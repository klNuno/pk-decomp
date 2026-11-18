/* profile: o0 */
#include "common.h"

typedef struct unk_func_0019C970_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0019C970_0;

void *HMU_fn_p_vMalloc();

unk_func_0019C970_0 *func_0019C970(void) {
    unk_func_0019C970_0 *temp = HMU_fn_p_vMalloc(0x10, 1);

    temp->unk_00 = 0;
    temp->unk_04 = 0;
    temp->unk_08 = 0;
    return temp;
}
