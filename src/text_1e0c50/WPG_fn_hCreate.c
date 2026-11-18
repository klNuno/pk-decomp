/* profile: o0 */
#include "common.h"

typedef struct unk_WPG_fn_hCreate_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_WPG_fn_hCreate_0;

void *HMU_fn_p_vMalloc(s32, s32);

unk_WPG_fn_hCreate_0 *WPG_fn_hCreate(s32 arg0, s32 arg1) {
    unk_WPG_fn_hCreate_0 *temp;

    temp = HMU_fn_p_vMalloc(0xC, 1);
    if (temp != NULL) {
        temp->unk_00 = 0;
        temp->unk_04 = 0;
        temp->unk_08 = 0;
    }
    return temp;
}
