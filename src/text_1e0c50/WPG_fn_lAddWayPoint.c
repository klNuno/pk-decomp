/* profile: o0 */
#include "common.h"

typedef struct unk_WPG_fn_lAddWayPoint_1 unk_WPG_fn_lAddWayPoint_1;

typedef struct unk_WPG_fn_lAddWayPoint_0 {
    struct unk_WPG_fn_lAddWayPoint_0 *unk_00;
    struct unk_WPG_fn_lAddWayPoint_0 *unk_04;
    unk_WPG_fn_lAddWayPoint_1 *unk_08;
} unk_WPG_fn_lAddWayPoint_0;

struct unk_WPG_fn_lAddWayPoint_1 {
    unk_WPG_fn_lAddWayPoint_0 *unk_00;
    unk_WPG_fn_lAddWayPoint_0 *unk_04;
    s32 unk_08;
};

unk_WPG_fn_lAddWayPoint_0 *WPG_fn_hCreateNode(s32, s32);

s32 WPG_fn_lAddWayPoint(unk_WPG_fn_lAddWayPoint_1 *arg0, s32 arg1, s32 arg2) {
    unk_WPG_fn_lAddWayPoint_0 *node;

    if (arg0 != NULL && arg1 != 0) {
        node = WPG_fn_hCreateNode(arg1, arg2);
        if (node->unk_00 != NULL) {
            node->unk_00->unk_04 = node->unk_04;
        }
        if (node->unk_04 != NULL) {
            node->unk_04->unk_00 = node->unk_00;
        }
        if (node->unk_08 != NULL) {
            node->unk_08->unk_08--;
            if (node->unk_08->unk_00 == node) {
                node->unk_08->unk_00 = node->unk_00;
            }
            if (node->unk_08->unk_04 == node) {
                node->unk_08->unk_04 = node->unk_04;
            }
        }
        node->unk_00 = NULL;
        node->unk_04 = NULL;
        node->unk_08 = NULL;
        node->unk_00 = NULL;
        node->unk_04 = arg0->unk_04;
        node->unk_08 = arg0;
        if (arg0->unk_00 == NULL) {
            arg0->unk_00 = node;
        } else {
            arg0->unk_04->unk_00 = node;
        }
        arg0->unk_04 = node;
        arg0->unk_08++;
        return 0;
    }
    return -1;
}
