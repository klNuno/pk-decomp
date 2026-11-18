/* profile: opt_300 */
#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_003466B8[];
extern u8 D_0035F39C;

u16 func_00133030(s32 arg0) {
    u16 v;
    s32 t;

    v = arg0 & 0x3FF;
    t = v & 0x40;

    if ((t && (v & 0x80)) || ((v & 0x100) && (v & 0x200))) {
        Erm_fn_ClearLastError(0, D_003466B8, 0x5C);
        Erm_fn_v_UpdateLastError(8, D_0035F39C, 0, 5, -1, 0xFF, 0xFF, 0, D_003466B8, 0x5C);
    }
    if (t || (v & 0x80)) {
        v |= 4;
    }
    if ((v & 0x100) || (v & 0x200)) {
        v |= 8;
    }
    if ((v & 0x80) || (v & 0x200)) {
        if (v & 0x32) {
            Erm_fn_v_UpdateLastError(8, D_0035F39C, 0, 9, -1, 0xFF, 0xFF, 0, D_003466B8, 0x6A);
        }
    }
    return v;
}
