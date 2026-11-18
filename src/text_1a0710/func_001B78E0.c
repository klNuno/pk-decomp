/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B78E0_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001B78E0_0;

s32 func_001B7A20(void);
void func_001B7AA0(s32, s32, s32, s32);
s32 fn_ucIsAnAlwaysObject(unk_func_001B78E0_0 *);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034B6A8[];
extern u8 D_0035F528;

void func_001B78E0(unk_func_001B78E0_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6A8, 0xC5);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6A8, 0xC5);
    }
    if (arg0->unk_08 != 0) {
        Erm_fn_ClearLastError(0, D_0034B6A8, 0xC8);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B6A8, 0xC8);
    }
    arg0->unk_08 = func_001B7A20();
    func_001B7AA0(arg0->unk_08, 0, 0, fn_ucIsAnAlwaysObject(arg0));
}
