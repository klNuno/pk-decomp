/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BAAD0_0 {
    u8 pad_00[0x28];
    s32 unk_28;
} unk_func_001BAAD0_0;

extern char D_0034B6F8[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001BB020(s32);
void HMU_fn_vFree(s32 *, s32);

void func_001BAAD0(unk_func_001BAAD0_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6F8, 0xD9);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6F8, 0xD9);
    }
    if (arg0->unk_28 == 0) {
        Erm_fn_ClearLastError(0, D_0034B6F8, 0xDC);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B6F8, 0xDC);
    }
    func_001BB020(arg0->unk_28);
    HMU_fn_vFree(&arg0->unk_28, 0);
}
