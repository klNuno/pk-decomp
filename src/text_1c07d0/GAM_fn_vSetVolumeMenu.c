/* profile: o0 */
#include "common.h"

void SND_fn_vSetVolumeLineSound(s32, s32);
extern s32 D_0035F55C;
extern s32 D_005ECA68[];

void GAM_fn_vSetVolumeMenu(s32 arg0) {
    D_005ECA68[0] = (0 > (arg0 > 0x7F ? 0x7F : arg0)) ? 0 : (arg0 > 0x7F ? 0x7F : arg0);
    SND_fn_vSetVolumeLineSound(D_0035F55C, D_005ECA68[0]);
}
