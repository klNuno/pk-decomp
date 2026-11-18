/* profile: o0_301 */
#include "common.h"

u8 func_001DB790(char *, char *);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00333D20[];
extern char D_00333D30[];
extern char D_0034CA70[];
extern u8 D_0035F588;
extern u8 D_0035F57C;

void func_001E79F0(void) {
    if (D_0035F588 == 0xFF) {
        D_0035F588 = func_001DB790(D_00333D20, D_00333D30);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_0034CA70, 0xE7);
    }
}
