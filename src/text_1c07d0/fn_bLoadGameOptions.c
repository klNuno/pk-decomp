/* profile: o0_301 */
#include "common.h"

extern char D_0034BD00[];
extern char D_005EBFE0[];
extern s32 D_005ECA4C[];
extern s32 D_0036006C;
extern s32 D_00360068;

s32 fn_lCheckVMSConnexion(s32);
char *func_0027BC20(char *);
void strcpy(char *, char *);
s32 VMS_fn_p_stFopenR(char *);
void VMS_fn_bFread(void *, s32, s32, s32);
s32 VMS_fn_bFclose(s32);
void SetPal60(void);
void SetPal50(void);
void func_00164BB0(s32);
void GAM_fn_vSetVolumeSound(u32);
void GAM_fn_vSetVolumeMusic(u32);
void GAM_fn_vSetVolumeVoice(u32);
void func_002CF3B0(u32);
void fn_vValidateAllOption(void);

s32 fn_bLoadGameOptions(s32 arg0) {
    s32 ret;
    s32 f;
    s32 v;
    u8 b;

    ret = fn_lCheckVMSConnexion(1);
    if (ret <= 0) {
        return ret;
    }
    strcpy(D_005EBFE0, func_0027BC20(D_0034BD00));
    f = VMS_fn_p_stFopenR(D_005EBFE0);
    if (f != 0) {
        VMS_fn_bFread(D_005ECA4C, 1, 4, f);
        VMS_fn_bFread(&v, 1, 4, f);
        if ((s64)v == 1) {
            SetPal60();
        } else {
            SetPal50();
        }
        VMS_fn_bFread(&v, 1, 4, f);
        func_00164BB0(v);
        VMS_fn_bFread(&b, 1, 4, f);
        GAM_fn_vSetVolumeSound(b);
        VMS_fn_bFread(&b, 1, 4, f);
        GAM_fn_vSetVolumeMusic(b);
        VMS_fn_bFread(&b, 1, 4, f);
        GAM_fn_vSetVolumeVoice(b);
        VMS_fn_bFread(&D_0036006C, 1, 4, f);
        VMS_fn_bFread(&D_00360068, 1, 4, f);
        b = 0;
        VMS_fn_bFread(&b, 1, 1, f);
        func_002CF3B0(b);
        if (VMS_fn_bFclose(f) != 0) {
            fn_vValidateAllOption();
            return 1;
        }
    }
    return 0;
}
