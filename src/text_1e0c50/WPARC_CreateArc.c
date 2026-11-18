/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_WPARC_CreateArc_0;

void *HMU_fn_p_vMalloc();

unk_WPARC_CreateArc_0 *WPARC_CreateArc(s32 arg0, s32 arg1, s32 arg2) {
    unk_WPARC_CreateArc_0 *p;

    p = HMU_fn_p_vMalloc(0x20, 1);
    if (p != NULL) {
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_0C = arg0;
        p->unk_14 = arg2;
        p->unk_10 = arg2;
        p->unk_1C = arg1;
        p->unk_18 = arg1;
    }
    return p;
}
