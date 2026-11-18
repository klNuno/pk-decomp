/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPG_fn_lAddArcToWayPoint_0 {
    struct unk_WPG_fn_lAddArcToWayPoint_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_WPG_fn_lAddArcToWayPoint_0;

typedef struct unk_WPG_fn_lAddArcToWayPoint_1 {
    unk_WPG_fn_lAddArcToWayPoint_0 *unk_00;
} unk_WPG_fn_lAddArcToWayPoint_1;

void WPG_fn_vAddArc(unk_WPG_fn_lAddArcToWayPoint_0 *, unk_WPG_fn_lAddArcToWayPoint_0 *, s32, s32);

s32 WPG_fn_lAddArcToWayPoint(unk_WPG_fn_lAddArcToWayPoint_1 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    unk_WPG_fn_lAddArcToWayPoint_0 *dst;
    unk_WPG_fn_lAddArcToWayPoint_0 *src;
    s32 i;
    unk_WPG_fn_lAddArcToWayPoint_0 *n1;
    unk_WPG_fn_lAddArcToWayPoint_0 *n2;
    unk_WPG_fn_lAddArcToWayPoint_0 *n3;
    unk_WPG_fn_lAddArcToWayPoint_0 *n4;

    if (arg0 != NULL && arg1 != 0 && arg2 != 0) {
        for (i = 0, dst = arg0->unk_00, n1 = dst; dst != NULL; i++, dst = dst->unk_00, n2 = dst) {
            if (dst->unk_0C == arg2) {
                break;
            }
        }
        if (dst != NULL) {
            for (i = 0, src = arg0->unk_00, n3 = src; src != NULL; i++, src = src->unk_00, n4 = src) {
                if (src->unk_0C == arg1) {
                    WPG_fn_vAddArc(src, dst, arg4, arg3);
                    return 0;
                }
            }
        }
    }
    return -1;
}
