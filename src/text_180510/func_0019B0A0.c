/* profile: o1 */
#include "common.h"

extern s32 D_0035F50C;
extern u8 D_005AB791[];
void func_001729C0();

u8 *func_0019B0A0(void) {
    if (D_0035F50C != 0) {
        D_0035F50C = 0;
        func_001729C0();
    }
    return D_005AB791;
}
