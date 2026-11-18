/* profile: o0 */
#include "common.h"

extern s32 D_0035F54C;
extern s32 D_005ECA5C[];
void SND_fn_vSetVolumeLineSound(s32, s32);

void GAM_fn_vSetVolumeVoice(s32 arg0) {
    D_005ECA5C[0] = (0 > (arg0 > 0x7F ? 0x7F : arg0)) ? 0 : (arg0 > 0x7F ? 0x7F : arg0);
    SND_fn_vSetVolumeLineSound(D_0035F54C, D_005ECA5C[0]);
}
