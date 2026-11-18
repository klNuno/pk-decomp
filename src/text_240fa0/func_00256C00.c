/* profile: o0_301 */
#include "common.h"

void GAM_fn_vSetVolumeAmbiance(s32);
void GAM_fn_vSetVolumeMenu(s32);
void GAM_fn_vSetVolumeMusic(s32);
void GAM_fn_vSetVolumeSound(s32);
void GAM_fn_vSetVolumeVoice(s32);
s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
void func_001EDBB0(s32, s32);

s32 *func_00256C00(s32 arg0, s32 *arg1) {
    s32 type;
    s32 vol;
    s32 sp30[3];

    type = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    vol = sp30[0];
    switch (type) {
    case 0x2F1:
        GAM_fn_vSetVolumeSound(vol);
        break;
    case 0x2F2:
        GAM_fn_vSetVolumeVoice(vol);
        break;
    case 0x2F3:
        GAM_fn_vSetVolumeMusic(vol);
        break;
    case 0x2F4:
        GAM_fn_vSetVolumeAmbiance(vol);
        break;
    case 0x2F5:
        GAM_fn_vSetVolumeMenu(vol);
        break;
    default:
        func_001EDBB0(0x27, 0);
        break;
    }
    return arg1;
}
