/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_WPARCLST_fn_hInit_0;

unk_WPARCLST_fn_hInit_0 *HMU_fn_p_vMalloc(s32, s32);

unk_WPARCLST_fn_hInit_0 *WPARCLST_fn_hInit(void) {
    unk_WPARCLST_fn_hInit_0 *p;

    p = HMU_fn_p_vMalloc(0xC, 1);
    if (p != NULL) {
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = 0;
    }
    return p;
}
