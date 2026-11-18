/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001E7990_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10;
} unk_func_001E7990_0;

void *HMU_fn_p_vMalloc(s32, s32);

unk_func_001E7990_0 *func_001E7990(void) {
    unk_func_001E7990_0 *temp = NULL;

    temp = HMU_fn_p_vMalloc(0x14, 0);
    temp->unk_00 = 0;
    temp->unk_04 = 0;
    temp->unk_08 = 0;
    temp->unk_0C = 0;
    temp->unk_10 = 0;
    return temp;
}
