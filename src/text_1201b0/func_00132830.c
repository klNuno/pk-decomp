#include "common.h"

typedef struct unk_func_00132830_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00132830_0;

void *HMU_fn_p_vMalloc();

unk_func_00132830_0 *func_00132830(void) {
    unk_func_00132830_0 *temp = HMU_fn_p_vMalloc(0x10, 0);
    temp->unk_04 = 0;
    temp->unk_08 = 0;
    temp->unk_0C = 0;
    return temp;
}
