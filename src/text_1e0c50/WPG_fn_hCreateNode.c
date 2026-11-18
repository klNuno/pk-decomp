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
} unk_WPG_fn_hCreateNode_0;

void *HMU_fn_p_vMalloc();
s32 WPARCLST_fn_hInit();

unk_WPG_fn_hCreateNode_0 *WPG_fn_hCreateNode(s32 arg0, s32 arg1) {
    unk_WPG_fn_hCreateNode_0 *node;

    node = NULL;
    if (arg0 != 0) {
        node = HMU_fn_p_vMalloc(0x1C, 1);
        if (node != NULL) {
            node->unk_00 = 0;
            node->unk_04 = 0;
            node->unk_08 = 0;
            node->unk_0C = arg0;
            node->unk_10 = arg1;
            node->unk_14 = arg1;
            node->unk_18 = WPARCLST_fn_hInit();
        }
    }
    return node;
}
