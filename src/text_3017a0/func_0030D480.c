/* profile: opt_300 */
#include "common.h"

void func_002D2BB0();
void func_00308B80();
void func_00308BE0();
s32 func_0031A130();
s32 func_0031A170();
void func_0031A330();
extern s32 D_0035F7BC;
extern s32 D_00360860;
extern void *D_00360868;
extern s32 D_0036086C;
extern s32 D_00360870;
extern s32 D_00360874;

s32 func_0030D480(void) {
    void *temp_a0;
    s32 temp;

    if (D_00360870 != 0) {
        func_00308BE0(D_00360870);
    }
    while (D_00360860 != 0) {
        if (D_00360870 != 0) {
            func_00308B80(D_00360870);
        }
        if (D_00360870 != 0) {
            func_00308BE0(D_00360870);
        }
    }
    if (D_00360870 != 0) {
        func_00308B80(D_00360870);
    }
    temp = func_0031A170(D_00360874);
    if (temp != D_00360874) {
        return 0;
    }
    temp = func_0031A130(D_00360874);
    if (temp != D_00360874) {
        return 0;
    }
    if (D_00360870 != 0) {
        func_00308BE0(D_00360870);
    }
    while ((temp_a0 = D_00360868) != NULL) {
        D_00360868 = *(void **)((u8 *)temp_a0 + 0x58);
        func_002D2BB0(temp_a0);
    }
    D_0036086C = 0;
    if (D_00360870 != 0) {
        func_00308B80(D_00360870);
    }
    func_0031A330(D_0035F7BC);
    return 1;
}
