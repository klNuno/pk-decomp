/* profile: o0 */
#include "common.h"

void SND_fn_vSetVolumeLineSound(s32, s32);
void func_00277320(s32);
extern s32 D_0035F554;
extern s32 D_005ECA60[];

void GAM_fn_vSetVolumeMusic(s32 arg0) {
    D_005ECA60[0] = (0 > (arg0 > 127 ? 127 : arg0)) ? 0 : (arg0 > 127 ? 127 : arg0);
    SND_fn_vSetVolumeLineSound(D_0035F554, D_005ECA60[0]);
    func_00277320(D_005ECA60[0]);
}
