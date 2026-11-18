/* profile: o0_p */
#include "common.h"

void SND_fn_vSetVolumeLineSound(s32, s32);
extern s32 D_0035F550;
extern s32 D_005ECA58[];

void GAM_fn_vSetVolumeSound(s32 arg0) {
    D_005ECA58[0] = (0 > (arg0 > 127 ? 127 : arg0)) ? 0 : (arg0 > 127 ? 127 : arg0);
    SND_fn_vSetVolumeLineSound(D_0035F550, D_005ECA58[0]);
}
