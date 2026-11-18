/* profile: o0_301 */
#include "common.h"

s32 func_0010AF60(s32, s32, u8 *);
void func_002813E0(s32);
extern s32 D_0035FA64;
extern u8 D_00369940[];
extern u8 D_00369942[];
extern u8 D_00369943[];

s32 func_0027FFD0(void) {
    func_002813E0(0);
    if (func_0010AF60(0, 0, D_00369940) > 0) {
        D_0035FA64 = ((D_00369942[0] << 8) | D_00369943[0]) ^ 0xFFFF;
    } else {
        D_0035FA64 = 0;
    }
    if (D_0035FA64 & 0x80) {
        return 5;
    }
    if (D_0035FA64 & 0x10) {
        return 4;
    }
    return 0;
}
