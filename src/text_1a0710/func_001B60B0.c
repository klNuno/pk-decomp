/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B60B0_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_001B60B0_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_001B61D0();
void func_001B7830(s32);
extern char D_0034B678[];
extern u8 D_0035F528;

void func_001B60B0(unk_func_001B60B0_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B678, 0x14A);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B678, 0x14A);
    }
    if (arg0->unk_14 != 0) {
        Erm_fn_ClearLastError(0, D_0034B678, 0x14D);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B678, 0x14D);
    }
    arg0->unk_14 = func_001B61D0();
    func_001B7830(arg0->unk_14);
}
