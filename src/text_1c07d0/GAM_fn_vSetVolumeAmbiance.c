/* profile: o0 */
#include "common.h"

extern s32 D_0035F558;
extern s32 D_005ECA64[];
void SND_fn_vSetVolumeLineSound(s32, s32);

void GAM_fn_vSetVolumeAmbiance(s32 arg0) {
    D_005ECA64[0] = (0 > (arg0 > 0x7F ? 0x7F : arg0)) ? 0 : (arg0 > 0x7F ? 0x7F : arg0);
    SND_fn_vSetVolumeLineSound(D_0035F558, D_005ECA64[0]);
}
