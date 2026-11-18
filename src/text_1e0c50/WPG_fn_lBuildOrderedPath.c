/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPG_fn_lBuildOrderedPath_0 {
    struct unk_WPG_fn_lBuildOrderedPath_0 *unk_00;
    u8 pad_04[8];
    void *unk_0C;
    s32 unk_10;
} unk_WPG_fn_lBuildOrderedPath_0;

typedef struct {
    unk_WPG_fn_lBuildOrderedPath_0 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_WPG_fn_lBuildOrderedPath_1;

extern u8 D_0034D980[], D_0034D940[];

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
void *WPG_fn_hBuildOrderedCircularPath(unk_WPG_fn_lBuildOrderedPath_1 *, unk_WPG_fn_lBuildOrderedPath_0 *, s32);
void *WPG_fn_hCreate(void *, void *);
s32 WPG_fn_lAddWayPoint(void *, void *, s32);
s32 WPG_fn_lAddArcToWayPoint(void *, void *, void *, s32, s32);
s32 WPG_fn_lGetArcCapabilities(unk_WPG_fn_lBuildOrderedPath_0 *, unk_WPG_fn_lBuildOrderedPath_0 *, s32 *);
s32 WPG_fn_lGetArcWeight(unk_WPG_fn_lBuildOrderedPath_0 *, unk_WPG_fn_lBuildOrderedPath_0 *, s32 *);
s32 rand(void);

void *WPG_fn_lBuildOrderedPath(unk_WPG_fn_lBuildOrderedPath_1 *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *spAC;
    unk_WPG_fn_lBuildOrderedPath_0 **spB0;
    unk_WPG_fn_lBuildOrderedPath_0 *spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8 = 0x7FFFFFFF;
    s32 spCC = 0;
    void **spD0;
    s32 *spD4;
    s32 *spD8;
    s32 *spDC;
    volatile s32 spE0;
    unk_WPG_fn_lBuildOrderedPath_0 *volatile spE4;
    unk_WPG_fn_lBuildOrderedPath_0 *volatile spE8;
    unk_WPG_fn_lBuildOrderedPath_0 *volatile spEC;
    s32 temp;
    s32 temp2;
    s32 temp3;
    unk_WPG_fn_lBuildOrderedPath_0 *temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    unk_WPG_fn_lBuildOrderedPath_0 *temp8;
    s32 temp9;

    temp5 = arg0->unk_08;
    if (temp5 == 0) {
        return NULL;
    }
    spB0 = HMU_fn_p_vMalloc(temp5 * 4, 1);
    spD0 = HMU_fn_p_vMalloc(temp5 * 4, 1);
    spD4 = HMU_fn_p_vMalloc(temp5 * 4, 1);
    spD8 = HMU_fn_p_vMalloc(temp5 * 4, 1);
    spDC = HMU_fn_p_vMalloc(temp5 * 4, 1);
    spB8 = -1;
    temp = 0;
    spE4 = temp4 = arg0->unk_00;
    while (temp4 != NULL) {
        if (temp4->unk_0C == arg1) {
            *spB0 = temp4;
            spB8 = temp;
            break;
        }
        temp++;
        spE8 = temp4 = temp4->unk_00;
    }
    spAC = NULL;
    if (spB8 != -1) {
        for (temp = spB8 + 1; temp != -1;) {
            temp7 = 0;
            spEC = temp4 = arg0->unk_00;
            while (temp7 < temp % temp5) {
                temp7++;
                temp8 = temp4 = temp4->unk_00;
                (void)temp8;
            }
            spB0[(temp - spB8) % temp5] = temp4;
            if (spB8 == ++temp % temp5) {
                temp = -1;
            }
        }

        spB4 = *spB0;
        spE0 = 0;
        *spD0 = (*spB0)->unk_0C;
        *spD4 = (*spB0)->unk_10;
        temp3 = 0;
        do {
            temp9 = -1;
            temp6 = spC8;
            spC4 = spC8;
            for (temp = 1; temp < temp5; temp++) {
                if (temp != temp3 &&
                    WPG_fn_lGetArcCapabilities(spB0[temp3], spB0[temp], &spBC) != -1 &&
                    WPG_fn_lGetArcWeight(spB0[temp3], spB0[temp], &spC0) != -1) {
                    if (arg3 != 0) {
                        temp2 = rand() % spC8;
                    } else {
                        temp2 = spC0;
                    }
                    if (temp2 < temp6) {
                        temp6 = temp2;
                        spC4 = spC0;
                        temp9 = temp;
                        spCC = spBC;
                    }
                }
            }
            if (arg3 != 0 &&
                WPG_fn_lGetArcCapabilities(spB0[temp3], spB4, &spBC) != -1 &&
                WPG_fn_lGetArcWeight(spB0[temp3], spB4, &spC0) != -1 &&
                rand() % spC8 < temp6) {
                temp9 = -1;
            }
            if (temp9 != -1) {
                spE0++;
                spD0[spE0] = spB0[temp9]->unk_0C;
                spD4[spE0] = spB0[temp9]->unk_10;
                spD8[spE0] = spCC;
                spDC[spE0] = spC4;
                spB0[temp3] = NULL;
                temp3 = temp9;
            }
        } while (temp9 != -1);

        *spD8 = 0;
        *spDC = 0;
        if (WPG_fn_lGetArcCapabilities(spB0[temp3], spB4, &spBC) != -1 &&
            WPG_fn_lGetArcWeight(spB0[temp3], spB4, &spC0) != -1) {
            *spD8 = spBC;
            *spDC = spC0;
        } else if (arg2 != 0) {
            HMU_fn_vFree(&spB0, 1);
            HMU_fn_vFree(&spD0, 1);
            HMU_fn_vFree(&spD4, 1);
            HMU_fn_vFree(&spD8, 1);
            HMU_fn_vFree(&spDC, 1);
            return WPG_fn_hBuildOrderedCircularPath(arg0, spB4, arg3);
        }

        spAC = WPG_fn_hCreate(D_0034D980, D_0034D940);
        WPG_fn_lAddWayPoint(spAC, spD0[spE0], spD4[spE0]);
        for (spE0--; spE0 >= 0; spE0--) {
            WPG_fn_lAddWayPoint(spAC, spD0[spE0], spD4[spE0]);
            WPG_fn_lAddArcToWayPoint(spAC, spD0[spE0], spD0[spE0 + 1], spDC[spE0 + 1], spD8[spE0 + 1]);
        }
        WPG_fn_lAddArcToWayPoint(spAC, spB0[temp3]->unk_0C, *spD0, *spDC, *spD8);
    }

    HMU_fn_vFree(&spB0, 1);
    HMU_fn_vFree(&spD0, 1);
    HMU_fn_vFree(&spD4, 1);
    HMU_fn_vFree(&spD8, 1);
    HMU_fn_vFree(&spDC, 1);
    return spAC;
}
