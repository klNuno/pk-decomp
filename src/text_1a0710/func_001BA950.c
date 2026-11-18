/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BA950_0 {
    u8 pad_00[0x28];
    s32 unk_28;
} unk_func_001BA950_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_001BAA70(void);
void func_001BAFD0(s32);
extern char D_0034B6F8[];
extern u8 D_0035F528;

void func_001BA950(unk_func_001BA950_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6F8, 0xB6);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6F8, 0xB6);
    }
    if (arg0->unk_28 != 0) {
        Erm_fn_ClearLastError(0, D_0034B6F8, 0xB9);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B6F8, 0xB9);
    }
    arg0->unk_28 = func_001BAA70();
    func_001BAFD0(arg0->unk_28);
}
