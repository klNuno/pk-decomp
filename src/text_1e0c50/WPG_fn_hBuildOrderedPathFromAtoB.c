/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPG_fn_hBuildOrderedPathFromAtoB_0 {
    struct unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *unk_00;
    u8 pad_04[8];
    void *unk_0C;
    s32 unk_10;
} unk_WPG_fn_hBuildOrderedPathFromAtoB_0;

typedef struct {
    unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_WPG_fn_hBuildOrderedPathFromAtoB_1;

extern u8 D_0034D950[];
extern u8 D_0034D940[];
extern void *HMU_fn_p_vMalloc(s32, s32);
extern void HMU_fn_vFree(void *, s32);
extern void *WPG_fn_hCreate(void *, void *);
extern s32 WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB(void *, void *, unk_WPG_fn_hBuildOrderedPathFromAtoB_0 **, s32, unk_WPG_fn_hBuildOrderedPathFromAtoB_0 **, s32);
extern s32 WPG_fn_lAddWayPoint(void *, void *, s32);
extern s32 WPG_fn_lGetArcCapabilities(unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *, unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *, s32 *);
extern s32 WPG_fn_lGetArcWeight(unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *, unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *, s32 *);
extern s32 WPG_fn_lAddArcToWayPoint(void *, void *, void *, s32, s32);

void *WPG_fn_hBuildOrderedPathFromAtoB(unk_WPG_fn_hBuildOrderedPathFromAtoB_1 *arg0, void *arg1, void *arg2, s32 arg3)
{
    unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *node;
    s32 j;
    unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *next;
    s32 i;
    s32 k;
    void *result = 0;
    s32 count;
    unk_WPG_fn_hBuildOrderedPathFromAtoB_0 *first;
    s32 n = arg0->unk_08;
    unk_WPG_fn_hBuildOrderedPathFromAtoB_0 **a = HMU_fn_p_vMalloc(n * 4, 1);
    unk_WPG_fn_hBuildOrderedPathFromAtoB_0 **b = HMU_fn_p_vMalloc(n * 4, 1);
    s32 spA8;
    s32 spAC;

    for (i = 0; i < n; i++) {
        j = 0;
        first = node = arg0->unk_00;
        (void)first;
        while (j < i) {
            j++;
            next = node = node->unk_00;
            (void)next;
        }
        a[i] = node;
        b[i] = 0;
    }
    result = WPG_fn_hCreate(D_0034D950, D_0034D940);
    count = WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB(arg1, arg2, a, n, b, arg3);
    if (count != 0) {
        k = 0;
        WPG_fn_lAddWayPoint(result, b[0]->unk_0C, b[0]->unk_10);
        for (k++; k < count; k++) {
            WPG_fn_lAddWayPoint(result, b[k]->unk_0C, b[k]->unk_10);
            WPG_fn_lGetArcCapabilities(b[k], b[k - 1], &spA8);
            WPG_fn_lGetArcWeight(b[k], b[k - 1], &spAC);
            WPG_fn_lAddArcToWayPoint(result, b[k]->unk_0C, b[k - 1]->unk_0C, spAC, spA8);
        }
        WPG_fn_lGetArcCapabilities(b[0], b[count - 1], &spA8);
        WPG_fn_lGetArcWeight(b[0], b[count - 1], &spAC);
        WPG_fn_lAddArcToWayPoint(result, b[0]->unk_0C, b[count - 1]->unk_0C, spAC, spA8);
    }
    HMU_fn_vFree(&a, 1);
    HMU_fn_vFree(&b, 1);
    return result;
}
