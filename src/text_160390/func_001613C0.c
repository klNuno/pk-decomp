#include "common.h"

void func_00161EB0();
void func_00136820();
void Mmg_fn_v_SetModeAlloc();
void *fn_p_vGenAlloc();
void func_00136810();
void func_00161EA0();
extern u8 D_0035F408;

void *func_001613C0(s32 arg0) {
    void *temp;

    func_00161EB0();
    func_00136820();
    Mmg_fn_v_SetModeAlloc(D_0035F408, 1, 1);
    temp = fn_p_vGenAlloc(arg0, 1);
    func_00136810();
    func_00161EA0();
    return temp;
}
