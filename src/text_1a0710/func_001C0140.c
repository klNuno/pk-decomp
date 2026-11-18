/* profile: o0_301 */
#include "common.h"

u8 func_001DB790(char *, char *);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00333A48[];
extern char D_00333A60[];
extern char D_0034B9D0[];
extern u8 D_0035F568;
extern u8 D_0035F57C;

void func_001C0140(void) {
    if (D_0035F568 == 0xFF) {
        D_0035F568 = func_001DB790(D_00333A48, D_00333A60);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_0034B9D0, 0x29);
    }
}
