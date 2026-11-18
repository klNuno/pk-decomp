#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} unk_Mmg_fn_v_SetModeAlloc_1;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    unk_Mmg_fn_v_SetModeAlloc_1 *unk_04;
} unk_Mmg_fn_v_SetModeAlloc_0;

extern unk_Mmg_fn_v_SetModeAlloc_0 *D_0035F928;
extern unk_Mmg_fn_v_SetModeAlloc_1 *D_00367210[];

void Mmg_fn_v_SetModeAlloc(u8 arg0, u8 arg1, u8 arg2) {
    D_0035F928[arg2].unk_01 = arg1;
    D_0035F928[arg2].unk_00 = arg0;
    if (arg1 != 0xFF) {
        D_0035F928[arg2].unk_04 = &D_00367210[arg0][arg1];
    }
}
