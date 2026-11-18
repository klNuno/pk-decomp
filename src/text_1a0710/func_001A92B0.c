/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A92B0_0 {
    s32 unk_00[15];
} unk_func_001A92B0_0;

s32 func_002CE4A0();
s32 func_002D50F0(unk_func_001A92B0_0 *, s32);
void SND_fn_vSetVolumeLineSound(s32, s32);
void *memset(void *, s32, u32);
extern unk_func_001A92B0_0 D_00333920;
extern unk_func_001A92B0_0 D_00333960;
extern unk_func_001A92B0_0 D_003339A0;
extern unk_func_001A92B0_0 D_003339E0;
extern s32 D_0035F538;
extern s32 D_0035F53C;
extern s32 D_0035F540;
extern s32 D_0035F544;
extern s32 D_0035F548;
extern s32 D_0035F54C;
extern s32 D_0035F550;
extern s32 D_0035F554;
extern s32 D_0035F558;
extern s32 D_0035F55C;
extern u8 D_005ACFC0[];

s32 func_001A92B0(void) {
    unk_func_001A92B0_0 sp10 = D_00333920;
    unk_func_001A92B0_0 sp50 = D_00333960;
    unk_func_001A92B0_0 sp90 = D_003339A0;
    unk_func_001A92B0_0 spD0 = D_003339E0;

    D_0035F550 = func_002CE4A0();
    D_0035F538 = func_002D50F0(&sp10, D_0035F550);
    SND_fn_vSetVolumeLineSound(D_0035F550, 0x7F);
    D_0035F54C = func_002CE4A0();
    D_0035F53C = func_002D50F0(&sp50, D_0035F54C);
    SND_fn_vSetVolumeLineSound(D_0035F54C, 0x7F);
    D_0035F554 = func_002CE4A0();
    D_0035F544 = func_002D50F0(&sp90, D_0035F554);
    SND_fn_vSetVolumeLineSound(D_0035F554, 0x7F);
    D_0035F55C = func_002CE4A0();
    D_0035F540 = func_002D50F0(&sp90, D_0035F55C);
    SND_fn_vSetVolumeLineSound(D_0035F55C, 0x7F);
    D_0035F558 = func_002CE4A0();
    D_0035F548 = func_002D50F0(&spD0, D_0035F558);
    SND_fn_vSetVolumeLineSound(D_0035F558, 0x7F);
    memset(D_005ACFC0, 0, 0x28);
    return 1;
}
