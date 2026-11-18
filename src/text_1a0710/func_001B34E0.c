/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B34E0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001B34E0_0;

s32 func_001B35F0(void);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034B620[];
extern u8 D_0035F528;

void func_001B34E0(unk_func_001B34E0_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B620, 0xA7);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B620, 0xA7);
    }
    if (arg0->unk_0C != 0) {
        Erm_fn_ClearLastError(0, D_0034B620, 0xAA);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B620, 0xAA);
    }
    arg0->unk_0C = func_001B35F0();
}
