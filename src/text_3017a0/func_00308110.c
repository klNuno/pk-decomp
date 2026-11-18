#include "common.h"

void func_0031A360();
void func_0031A340();
void func_0031D408();
extern char D_00342020[];
extern s32 *D_003607C0;
extern s32 D_003607C8;

void func_00308110(s32 arg0) {
    s32 *temp;

    func_0031A360(D_003607C8);
    temp = D_003607C0;
    *temp = arg0;
    func_0031D408(D_00342020, 1, 0, temp, 4, 0, 0, 0, 0);
    func_0031A340(D_003607C8);
}
