/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void **unk_10;
} unk_func_001B4290_0;

extern void Erm_fn_ClearLastError(s32, char *, s32);
extern void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern void HMU_fn_vFree(void *, s32);
extern char D_0034B648[];
extern u8 D_0035F528;

void func_001B4290(unk_func_001B4290_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x1A4);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B648, 0x1A4);
    }
    if (arg0->unk_10 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x1A7);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B648, 0x1A7);
    }
    if (arg0->unk_10[0] == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x1AA);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B648, 0x1AA);
    }
    HMU_fn_vFree(&arg0->unk_10[0], 0);
    if (arg0->unk_10[1] == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x1B0);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B648, 0x1B0);
    }
    HMU_fn_vFree(&arg0->unk_10[1], 0);
    if (arg0->unk_10[2] == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x1B5);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B648, 0x1B5);
    }
    HMU_fn_vFree(&arg0->unk_10[2], 0);
    if (arg0->unk_10[3] == NULL) {
        Erm_fn_ClearLastError(0, D_0034B648, 0x1BA);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B648, 0x1BA);
    }
    HMU_fn_vFree(&arg0->unk_10[3], 0);
    HMU_fn_vFree(&arg0->unk_10, 0);
}
