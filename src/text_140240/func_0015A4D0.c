#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u8 *unk_0C;
    u8 pad_10[0xC];
    s32 unk_1C;
} unk_func_0015A4D0_0;

typedef u8 (*unk_func_0015A4D0_1)(u8 *);

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern unk_func_0015A4D0_1 D_00331310[];
extern char D_00348378[];
extern u8 D_0035F3D0;
extern u8 *D_0035F968;
extern unk_func_0015A4D0_0 *D_0035F96C;

u8 func_0015A4D0(unk_func_0015A4D0_0 *arg0) {
    unk_func_0015A4D0_1 temp_v0;
    u8 var_s0;
    u8 var_v0;

    D_0035F96C = arg0;
    arg0->unk_1C = 0;
    D_0035F968 = arg0->unk_0C;
    var_v0 = 0;
    if (D_0035F968 != NULL) {
        temp_v0 = D_00331310[*D_0035F968];
        var_s0 = 0;
        if (temp_v0 != NULL) {
            var_s0 = temp_v0(D_0035F968);
        } else {
            Erm_fn_ClearLastError(0, D_00348378, 0x3C);
            Erm_fn_v_UpdateLastError(0xE, D_0035F3D0, 0, 0xC, -1, 0xFF, 0xFF, 0, D_00348378, 0x3C);
        }
        var_v0 = var_s0;
    }
    return var_v0;
}
