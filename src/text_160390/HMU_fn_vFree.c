#include "common.h"

void Mmg_fn_v_SetModeAlloc(u8, u8, s32);
void func_00136CF0();
void func_00136DE0();
u8 func_00161A20();
u8 func_00161A50();
void func_00161EA0();
void func_00161EB0();
extern u8 D_0035F408;
extern s32 D_00369910[];

void HMU_fn_vFree(s32 *arg0, s32 arg1) {
    s32 sp38;
    u16 sp3E;
    u32 temp;

    func_00161EB0();
    func_00136CF0(*arg0, &sp3E, &sp38);
    if (sp3E == 0xFFFF) {
        if (arg1 != 0) {
            temp = func_00161A20();
        } else {
            temp = func_00161A50();
        }
        Mmg_fn_v_SetModeAlloc(D_0035F408, 0xFF, 0);
    } else {
        temp = (u8)sp3E;
        Mmg_fn_v_SetModeAlloc(D_0035F408, temp, 0);
    }
    D_00369910[temp]--;
    func_00136DE0(*arg0, 0);
    *arg0 = 0;
    func_00161EA0();
}
