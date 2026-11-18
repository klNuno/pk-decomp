/* profile: opt_300 */
#include "common.h"

extern s32 D_0035FB60;
extern s32 D_0035FB64;
extern s32 D_0035FB68;
void func_00162A70(void);

s32 func_001695C0(void) {
    D_0035FB60++;
    D_0035FB68 = 1;
    while (D_0035FB64 != 0) {
    }
    func_00162A70();
    D_0035FB68 = 0;
    return 1;
}
