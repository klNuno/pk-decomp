/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BB070_0 {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_001BB070_0;

s32 func_001BB180(void);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034B708[];
extern u8 D_0035F528;

void func_001BB070(unk_func_001BB070_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B708, 0x9C);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B708, 0x9C);
    }
    if (arg0->unk_18 != 0) {
        Erm_fn_ClearLastError(0, D_0034B708, 0x9F);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B708, 0x9F);
    }
    arg0->unk_18 = func_001BB180();
}
