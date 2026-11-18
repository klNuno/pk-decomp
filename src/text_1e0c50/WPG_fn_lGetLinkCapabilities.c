/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPG_fn_lGetLinkCapabilities_0 {
    struct unk_WPG_fn_lGetLinkCapabilities_0 *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_WPG_fn_lGetLinkCapabilities_0;

s32 WPG_fn_lGetArcCapabilities();

s32 WPG_fn_lGetLinkCapabilities(unk_WPG_fn_lGetLinkCapabilities_0 **arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_WPG_fn_lGetLinkCapabilities_0 *p;
    unk_WPG_fn_lGetLinkCapabilities_0 *q;
    s32 i;
    unk_WPG_fn_lGetLinkCapabilities_0 *n1;
    unk_WPG_fn_lGetLinkCapabilities_0 *n2;
    unk_WPG_fn_lGetLinkCapabilities_0 *n3;
    unk_WPG_fn_lGetLinkCapabilities_0 *n4;

    if (arg0 != NULL && arg1 != 0 && arg2 != 0) {
        for (i = 0, p = *arg0, n1 = p; p != NULL; i++, p = p->unk_00, n2 = p) {
            if (p->unk_0C == arg2) {
                break;
            }
        }
        if (p != NULL) {
            for (i = 0, q = *arg0, n3 = q; q != NULL; i++, q = q->unk_00, n4 = q) {
                if (q->unk_0C == arg1) {
                    return WPG_fn_lGetArcCapabilities(q, p, arg3);
                }
            }
        }
    }
    return -1;
}
