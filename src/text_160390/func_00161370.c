#include "common.h"

void func_00161EB0();
void Mmg_fn_v_SetModeAlloc();
void func_00136DE0();
void func_00161EA0();
extern u8 D_0035F408;

void func_00161370(s32 arg0) {
    func_00161EB0();
    Mmg_fn_v_SetModeAlloc(D_0035F408, 1, 1);
    func_00136DE0(arg0, 1);
    func_00161EA0();
}
