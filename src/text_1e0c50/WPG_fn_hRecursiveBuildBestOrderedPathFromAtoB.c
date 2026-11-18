/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0;
typedef struct unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1;

struct unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 {
    u8 pad_00[0xC];
    void *unk_0C;
    u8 pad_10[8];
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 **unk_18;
};

struct unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 {
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 *unk_00;
    u8 pad_04[8];
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 *unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
};

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
s32 WPG_fn_lGetArcCapabilities();
s32 WPG_fn_lGetArcWeight();
void *memcpy(void *, const void *, u32);
s32 rand(void);

s32 WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB(
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 *arg0,
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 *arg1,
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 **arg2,
    s32 arg3, unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 **arg4,
    s32 arg5)
{
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 *temp;
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 *next;
    s32 weight;
    s32 i;
    s32 count;
    s32 result;
    s32 best;
    s32 j;
    s32 max;
    s32 arcCapabilities;
    s32 arcWeight;
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_0 **copy;
    unk_WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB_1 *volatile first;

    result = 0;
    count = 0;
    max = 0x7FFFFFFF;
    best = max;
    copy = HMU_fn_p_vMalloc(arg3 * 4, 1);
    for (i = 0; i < arg3; i++) {
        if (arg2[i] != 0 && arg0->unk_0C == arg2[i]->unk_0C) {
            arg2[i] = 0;
            break;
        }
    }

    if (WPG_fn_lGetArcCapabilities(arg0, arg1, &arcCapabilities) != -1 &&
        WPG_fn_lGetArcWeight(arg0, arg1, &arcWeight) != -1) {
        count = 0;
        result = 1;
    } else {
        for (i = 0; i < arg3; i++) {
            if (arg2[i] != 0 && arg0->unk_18 != 0) {
                j = 0;
                first = temp = *arg0->unk_18;
                while (temp != 0) {
                    if (temp->unk_0C == arg2[i]) {
                        arcCapabilities = temp->unk_10;
                        arcWeight = temp->unk_18;
                        count = WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB(arg2[i], arg1, arg2, arg3, copy, arg5);
                        if (count != 0) {
                            if (arg5 != 0) {
                                weight = rand() % max;
                            } else {
                                weight = arcWeight;
                            }
                            if (weight < best) {
                                best = weight;
                                result = count + 1;
                                memcpy((void *)arg4, (void *)copy, (result - 1) * 4);
                            }
                        }
                        break;
                    }
                    j++;
                    next = temp = temp->unk_00;
                    (void)next;
                }
            }
        }
    }

    if (result == 1) {
        *arg4 = arg0;
    } else if (result > 1) {
        arg4[result - 1] = arg0;
    }
    HMU_fn_vFree(&copy, 1);
    return result;
}
