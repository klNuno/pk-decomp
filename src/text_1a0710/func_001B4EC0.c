/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B4EC0_0 {
    s32 unk_00;
    struct unk_func_001B4EC0_0 *unk_04;
    struct unk_func_001B4EC0_0 *unk_08;
    struct unk_func_001B4EC0_1 *unk_0C;
} unk_func_001B4EC0_0;

typedef struct unk_func_001B4EC0_1 {
    unk_func_001B4EC0_0 *unk_00;
    unk_func_001B4EC0_0 *unk_04;
    s32 unk_08;
} unk_func_001B4EC0_1;

extern unk_func_001B4EC0_1 D_005ABD88;

unk_func_001B4EC0_0 *HMU_fn_p_vMalloc();

void func_001B4EC0(s32 arg0) {
    unk_func_001B4EC0_0 *node;

    node = HMU_fn_p_vMalloc(0x10, 0);
    node->unk_00 = arg0;
    node->unk_04 = NULL;
    node->unk_08 = NULL;
    node->unk_0C = NULL;
    if (node->unk_04 != NULL) {
        node->unk_04->unk_08 = node->unk_08;
    }
    if (node->unk_08 != NULL) {
        node->unk_08->unk_04 = node->unk_04;
    }
    if (node->unk_0C != NULL) {
        node->unk_0C->unk_08--;
        if (node->unk_0C->unk_00 == node) {
            node->unk_0C->unk_00 = node->unk_04;
        }
        if (node->unk_0C->unk_04 == node) {
            node->unk_0C->unk_04 = node->unk_08;
        }
    }
    node->unk_04 = NULL;
    node->unk_08 = NULL;
    node->unk_0C = NULL;
    node->unk_04 = NULL;
    node->unk_08 = D_005ABD88.unk_04;
    node->unk_0C = &D_005ABD88;
    if (D_005ABD88.unk_00 == NULL) {
        D_005ABD88.unk_00 = node;
    } else {
        D_005ABD88.unk_04->unk_04 = node;
    }
    D_005ABD88.unk_04 = node;
    D_005ABD88.unk_08++;
}
