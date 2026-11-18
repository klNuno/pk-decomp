/* profile: o0 */
#include "common.h"

void GAM_fn_vSetVolumeMusic(s32);
void GAM_fn_vSetVolumeSound(s32);
void GAM_fn_vSetVolumeVoice(s32);
void GAM_fn_vSetVolumeAmbiance(s32);
void GAM_fn_vSetVolumeMenu(s32);

void func_001CF7F0(void) {
    GAM_fn_vSetVolumeMusic(0x7F);
    GAM_fn_vSetVolumeSound(0x7F);
    GAM_fn_vSetVolumeVoice(0x7F);
    GAM_fn_vSetVolumeAmbiance(0x7F);
    GAM_fn_vSetVolumeMenu(0x7F);
}
