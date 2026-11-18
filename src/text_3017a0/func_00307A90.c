/* profile: opt_300 */
#include "common.h"

void func_00308BE0();
void func_00308B80();
s32 func_0031D5F8();
void func_0031D408();
extern u8 D_00341FF0[];
extern s32 *D_003607B0;
extern s32 *D_003607B4;
extern s32 D_003607B8;
extern s32 D_003607BC;

s32 func_00307A90(s32 arg0) {
    s32 *temp;

    func_00308BE0(D_003607BC);
    if (D_003607B8 == 1) {
        while (func_0031D5F8(D_00341FF0) != 0) {
        }
    }
    temp = D_003607B0;
    *temp = arg0;
    func_0031D408(D_00341FF0, 6, 0, temp, 4, D_003607B4, 4, 0, 0);
    D_003607B8 = 0;
    func_00308B80(D_003607BC);
    return *D_003607B4;
}
