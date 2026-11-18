/* profile: opt_300 */
#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[0x4];
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
    s64 unk_20;
    s64 unk_28;
    s64 unk_30;
    u8 pad_38[0x8];
} unk_func_00129FE0_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00346398[];
extern u8 D_0035F384;
extern s16 D_0035F830;
extern unk_func_00129FE0_0 D_00363330[];

s16 func_00129FE0(s16 arg0) {
    if (D_0035F830 == 0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 2, -1, 0xFF, 0xFF, 0, D_00346398, 0x1BE);
        return 0x7FFF;
    }
    if (arg0 >= 0x10) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 5, -1, 0xFF, 0xFF, 0, D_00346398, 0x1C3);
        return 0x7FFF;
    }
    if (D_00363330[arg0].unk_02 == 0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 5, -1, 0xFF, 0xFF, 0, D_00346398, 0x1C8);
        return 0x7FFF;
    }
    if (D_00363330[arg0].unk_00 > 2) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 6, -1, 0xFF, 0xFF, 0, D_00346398, 0x1CD);
        return 0x7FFF;
    }
    D_00363330[arg0].unk_02 = 1;
    D_00363330[arg0].unk_08 = 0;
    D_00363330[arg0].unk_10 = 0;
    D_00363330[arg0].unk_18 = 0;
    D_00363330[arg0].unk_20 = 0;
    D_00363330[arg0].unk_28 = 0;
    D_00363330[arg0].unk_30 = 0;
    return 0;
}
