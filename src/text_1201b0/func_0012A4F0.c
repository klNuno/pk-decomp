/* profile: opt_300 */
#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[0x24];
    u64 unk_28;
    u64 unk_30;
    u8 pad_38[0x8];
} unk_func_0012A4F0_0;

typedef struct {
    u64 unk_00;
    u64 unk_08;
} unk_func_0012A4F0_1;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00346398[];
extern u8 D_0035F384;
extern s16 D_0035F830;
extern unk_func_0012A4F0_0 D_00363330[];

s16 func_0012A4F0(s16 arg0, unk_func_0012A4F0_1 *arg1) {
    if (D_0035F830 == 0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 2, -1, 0xFF, 0xFF, 0, D_00346398, 0x151);
        return 0x7FFF;
    }
    if (arg0 >= 0x10) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 5, -1, 0xFF, 0xFF, 0, D_00346398, 0x156);
        return 0x7FFF;
    }
    if (D_00363330[arg0].unk_00 > 2) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 6, -1, 0xFF, 0xFF, 0, D_00346398, 0x15B);
        return 0x7FFF;
    }
    D_00363330[arg0].unk_28 = arg1->unk_00;
    D_00363330[arg0].unk_30 = arg1->unk_08;
    D_00363330[arg0].unk_02 = 4;
    return 0;
}
