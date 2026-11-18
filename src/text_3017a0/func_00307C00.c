/* profile: opt_300 */
#include "common.h"

void func_00308B80(s32);
void func_00308BE0(s32);
void func_0031D408(void *, s32, s32, void *, s32, void *, s32, void *, void *);
s32 func_0031D5F8(void *);
extern u8 D_00341FF0[];
extern s32 *D_003607B0;
extern s32 D_003607B8;
extern s32 D_003607BC;

void func_00307C00(s32 arg0) {
    s32 *p;

    func_00308BE0(D_003607BC);
    if (D_003607B8 == 1) {
        while (func_0031D5F8(D_00341FF0) != 0) {
        }
    }
    p = D_003607B0;
    *p = arg0;
    func_0031D408(D_00341FF0, 3, 0, p, 4, NULL, 0, NULL, NULL);
    D_003607B8 = 0;
    func_00308B80(D_003607BC);
}
