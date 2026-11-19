/* profile: o0_301_p */
#include "common.h"

typedef struct {
    void *unk_00[11];
} unk_func_00197450_1;

typedef struct {
    u8 pad_00[0x14];
    void (*unk_14)(unk_func_00197450_1 *, s32);
} unk_func_00197450_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
s32 func_00197430(s32);
extern unk_func_00197450_0 D_00333510[];
extern char D_00349E68[];
extern u8 D_0035F528;

void func_00197450(unk_func_00197450_1 *arg0, s32 arg1) {
    u32 i;

    if (arg0->unk_00[0] == NULL || arg0->unk_00[1] == NULL) {
        Erm_fn_ClearLastError(0, D_00349E68, 0x167);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xC, -1, 0xFF, 0xFF, 0, D_00349E68, 0x167);
    }
    if (func_00197430((s32)arg0->unk_00[1]) == -1) {
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x47, -1, 0, 0, 0, D_00349E68, 0x16A);
        Erm_fn_ClearLastError(0, D_00349E68, 0x16A);
    }
    for (i = 0; i < 11; i++) {
        if (*(void **)((u8 *)arg0 + i * sizeof(void *)) != NULL) {
            D_00333510[i].unk_14(arg0, arg1);
        }
    }
}
