/* profile: o1 */
#include "common.h"

void fn_vChangeDetailsValue();
void GAM_fn_vSetVolumeSound();
void GAM_fn_vSetVolumeVoice();
void GAM_fn_vSetVolumeMusic();
void GAM_fn_vSetVolumeAmbiance();
void GAM_fn_vSetVolumeMenu();
extern s32 D_005ECA48[];
extern s32 D_005ECA58[];
extern s32 D_005ECA5C[];
extern s32 D_005ECA60[];
extern s32 D_005ECA64[];
extern s32 D_005ECA68[];

void fn_vValidateAllOption(void) {
    fn_vChangeDetailsValue(D_005ECA48[0]);
    GAM_fn_vSetVolumeSound(D_005ECA58[0]);
    GAM_fn_vSetVolumeVoice(D_005ECA5C[0]);
    GAM_fn_vSetVolumeMusic(D_005ECA60[0]);
    GAM_fn_vSetVolumeAmbiance(D_005ECA64[0]);
    GAM_fn_vSetVolumeMenu(D_005ECA68[0]);
}
