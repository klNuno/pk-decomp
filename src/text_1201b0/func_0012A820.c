#include "common.h"

typedef struct unk_func_0012A820_0 {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[0x3C];
} unk_func_0012A820_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00346398[];
extern u8 D_0035F384;
extern s16 D_0035F82C;
extern s16 D_0035F830;
extern unk_func_0012A820_0 D_00363330[];
extern s32 D_00363740[];

s16 func_0012A820(s16 arg0) {
    s16 i;

    if (D_0035F830 == 0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 2, -1, 0xFF, 0xFF, 0, D_00346398, 0x73);
        return 0x7FFF;
    }
    if (D_0035F82C == 0x10) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 7, -1, 0xFF, 0xFF, 0, D_00346398, 0x78);
        return 0x7FFF;
    }
    if (arg0 > 2) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 3, -1, 0xFF, 0xFF, 0, D_00346398, 0x7D);
        return 0x7FFF;
    }
    if (D_00363740[arg0] == 0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 4, -1, 0xFF, 0xFF, 0, D_00346398, 0x82);
        return 0x7FFF;
    }
    for (i = 0; i < 0x10; i++) {
        if (D_00363330[i].unk_02 == 0) {
            break;
        }
    }
    if (i == 0x10) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 7, -1, 0xFF, 0xFF, 0, D_00346398, 0x8A);
        return 0x7FFF;
    }
    D_00363330[i].unk_00 = arg0;
    D_00363330[i].unk_02 = 1;
    D_0035F82C++;
    return i;
}
