/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B6250_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_001B6250_0;

extern char D_0034B678[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001B7880(s32);

void func_001B6250(unk_func_001B6250_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B678, 0x189);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B678, 0x189);
    }
    if (arg0->unk_14 == 0) {
        Erm_fn_ClearLastError(0, D_0034B678, 0x18C);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B678, 0x18C);
    }
    func_001B7880(arg0->unk_14);
}
