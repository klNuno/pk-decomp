/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPG_fn_lShortestPath_0 unk_WPG_fn_lShortestPath_0;
typedef struct unk_WPG_fn_lShortestPath_1 unk_WPG_fn_lShortestPath_1;

struct unk_WPG_fn_lShortestPath_0 {
    unk_WPG_fn_lShortestPath_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    unk_WPG_fn_lShortestPath_1 **unk_18;
};

struct unk_WPG_fn_lShortestPath_1 {
    unk_WPG_fn_lShortestPath_1 *unk_00;
    u8 pad_04[8];
    unk_WPG_fn_lShortestPath_0 *unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
};

typedef struct {
    unk_WPG_fn_lShortestPath_0 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_WPG_fn_lShortestPath_2;

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
unk_WPG_fn_lShortestPath_2 *WPG_fn_hCreate(void *, void *);
s32 WPG_fn_lAddArcToWayPoint(unk_WPG_fn_lShortestPath_2 *, s32, s32, s32, s32);
s32 WPG_fn_lAddWayPoint(unk_WPG_fn_lShortestPath_2 *, s32, s32);
s32 WPG_fn_lGetLinkCapabilities(unk_WPG_fn_lShortestPath_2 *, s32, s32, s32 *);
s32 WPG_fn_lGetLinkWeight(unk_WPG_fn_lShortestPath_2 *, s32, s32, s32 *);
void *memmove(void *, const void *, u32);

extern u8 D_0034D920[];
extern u8 D_0034D940[];

unk_WPG_fn_lShortestPath_2 *WPG_fn_lShortestPath(unk_WPG_fn_lShortestPath_2 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    unk_WPG_fn_lShortestPath_0 *temp;
    unk_WPG_fn_lShortestPath_0 **temp2;
    unk_WPG_fn_lShortestPath_0 **temp3;
    s32 *temp4;
    s32 *temp5;
    s32 *temp7;
    s32 *temp8;
    s32 temp9;
    s32 temp10;
    unk_WPG_fn_lShortestPath_2 *temp11;
    s32 temp13;
    unk_WPG_fn_lShortestPath_0 *temp14, *temp15;
    unk_WPG_fn_lShortestPath_1 *temp16, *temp17;
    unk_WPG_fn_lShortestPath_1 *temp18;
    unk_WPG_fn_lShortestPath_0 *temp19;
    s32 temp20, temp21, temp22, temp23, temp24, temp25, temp26;

    temp9 = arg0->unk_08;
    temp2 = HMU_fn_p_vMalloc(temp9 * 4, 1);
    temp3 = HMU_fn_p_vMalloc(temp9 * 4, 1);
    temp4 = HMU_fn_p_vMalloc(temp9 * 4, 1);
    temp7 = HMU_fn_p_vMalloc(temp9 * 4, 1);
    temp5 = HMU_fn_p_vMalloc(temp9 * 4, 1);
    temp8 = HMU_fn_p_vMalloc(temp9 * 4, 1);

    temp24 = 0;
    temp25 = 0;
    temp22 = 0;
    temp21 = 1;
    for (temp20 = 0, temp14 = temp = arg0->unk_00; temp != NULL;
         temp20++, temp15 = temp = temp->unk_00) {
        if (temp->unk_0C == arg1) {
            temp3[0] = temp;
            temp5[0] = -1;
            break;
        }
    }

    if (temp3[0] == NULL) {
        temp11 = NULL;
    } else {
        temp10 = 0;
        while (temp21 != 0 && temp10 == 0) {
            temp26 = 0x7FFFFFFF;
            for (temp23 = 0; temp23 < temp21; temp23++) {
                if (temp8[temp23] < temp26) {
                    temp26 = temp8[temp23];
                    temp25 = temp23;
                }
            }
            temp2[temp22] = temp3[temp25];
            temp7[temp22] = temp8[temp25];
            temp4[temp22] = temp5[temp25];
            temp24 = temp22;
            temp22++;
            memmove(&temp8[temp25], (u8 *)&temp8[temp25] + 4, (temp21 - temp25) * 4);
            memmove(&temp5[temp25], (u8 *)&temp5[temp25] + 4, (temp21 - temp25) * 4);
            memmove(&temp3[temp25], (u8 *)&temp3[temp25] + 4, (temp21 - temp25) * 4);
            temp21--;
            temp = temp2[temp24];
            if (temp->unk_0C == arg2) {
                temp10 = 1;
            }

            for (temp23 = 0, temp16 = temp18 = *temp->unk_18; temp18 != NULL;
                 temp23++, temp17 = temp18 = temp18->unk_00) {
                temp19 = temp18->unk_0C;
                if (temp18->unk_10 & arg3) {
                    for (temp20 = 0; temp20 < temp22; temp20++) {
                        if (temp2[temp20] == temp19) {
                            break;
                        }
                    }
                    if (temp20 == temp22) {
                        for (temp20 = 0; temp20 < temp21; temp20++) {
                            if (temp3[temp20] == temp19) {
                                break;
                            }
                        }
                        if (temp20 == temp21) {
                            temp3[temp21] = temp19;
                            temp8[temp21] = temp18->unk_18 + temp7[temp24];
                            temp5[temp21] = temp24;
                            temp21++;
                        } else if (temp8[temp20] > temp18->unk_18 + temp7[temp24]) {
                            temp8[temp20] = temp18->unk_18 + temp7[temp24];
                            temp5[temp20] = temp24;
                        }
                    }
                }
            }
        }

        temp11 = NULL;
        if (temp10 != 0) {
            temp11 = WPG_fn_hCreate(D_0034D920, D_0034D940);
            for (temp20 = temp24; temp20 != -1; temp20 = temp4[temp20]) {
                WPG_fn_lAddWayPoint(temp11, temp2[temp20]->unk_0C, temp2[temp20]->unk_10);
            }
            for (temp20 = temp24; temp20 != 0; temp20 = temp4[temp20]) {
                WPG_fn_lGetLinkCapabilities(arg0, temp2[temp4[temp20]]->unk_0C,
                                            temp2[temp20]->unk_0C, &arg3);
                WPG_fn_lGetLinkWeight(arg0, temp2[temp4[temp20]]->unk_0C, temp2[temp20]->unk_0C, &temp13);
                WPG_fn_lAddArcToWayPoint(temp11, temp2[temp4[temp20]]->unk_0C, temp2[temp20]->unk_0C, temp13, arg3);
            }
        }
    }

    HMU_fn_vFree(&temp2, 1);
    HMU_fn_vFree(&temp3, 1);
    HMU_fn_vFree(&temp4, 1);
    HMU_fn_vFree(&temp7, 1);
    HMU_fn_vFree(&temp5, 1);
    HMU_fn_vFree(&temp8, 1);
    return temp11;
}
