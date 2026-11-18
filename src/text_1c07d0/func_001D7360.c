/* profile: o0_301 */
#include "common.h"

extern s32 D_003600B4;
extern s32 D_003600B8;
extern s32 D_005ECC44[];
extern s32 D_005ECC48[];

s32 SAV2_fn_p_stFindElementByName(s32);
void SAV2_fn_vFreeAnElement(s32);

void func_001D7360(s32 arg0) {
    s32 temp = SAV2_fn_p_stFindElementByName(arg0);

    if (temp != 0) {
        SAV2_fn_vFreeAnElement(temp);
    }
    D_003600B4 = D_005ECC44[0];
    D_003600B8 = D_005ECC48[0];
}
