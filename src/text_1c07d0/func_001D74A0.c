/* profile: o0_301 */
#include "common.h"

u8 *SAV2_fn_p_stFindElementByName(s32);
void SAV2_fn_vFreeAnElement(u8 *);
extern s32 D_003600B4;
extern s32 D_003600B8;
extern s32 D_005ECC44[];
extern s32 D_005ECC48[];

void func_001D74A0(s32 arg0) {
    u8 *temp_s0;

    temp_s0 = SAV2_fn_p_stFindElementByName(arg0);
    if (temp_s0 != NULL && !(temp_s0[0x10] & 0xF0 & 0x10)) {
        SAV2_fn_vFreeAnElement(temp_s0);
    }
    D_003600B4 = D_005ECC44[0];
    D_003600B8 = D_005ECC48[0];
}
