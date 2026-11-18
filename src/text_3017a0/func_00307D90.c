/* profile: opt_300 */
#include "common.h"

s32 func_00308CA0();
void func_0031D408(void *, s32, s32, void *, s32, void *, s32, void *, void *);
s32 func_0031D5F8(void *);
extern u8 D_00341FF0[];
extern s32 *D_003607B0;
extern s32 D_003607B8;
extern s32 D_003607BC;

void func_00307D90(s32 arg0, s32 arg1) {
    s32 *temp;
    D_003607BC = func_00308CA0();
    if (D_003607B8 == 1) {
        while (func_0031D5F8(D_00341FF0) != 0) {
        }
    }
    temp = D_003607B0;
    temp[0] = arg0;
    temp[1] = arg1;
    func_0031D408(D_00341FF0, 1, 0, temp, 8, 0, 0, 0, 0);
    D_003607B8 = 0;
}
