/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BDA80_0 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_001BDA80_0;

extern char D_0034B738[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_001BDB90();

void func_001BDA80(unk_func_001BDA80_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B738, 0x96);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B738, 0x96);
    }
    if (arg0->unk_20 != 0) {
        Erm_fn_ClearLastError(0, D_0034B738, 0x99);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B738, 0x99);
    }
    arg0->unk_20 = func_001BDB90();
}
