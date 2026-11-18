#include "common.h"

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
void func_00165360();
void func_00168120(void *);
void func_00168310();
s32 func_00168390();
void func_0018A950();
void func_0018AA00(s32, s32, s32);
extern s32 D_0035F460;
extern s32 D_0035FB10;
extern void *D_0035FB14;
extern s32 D_0035FB20;
extern s32 *D_0035FB24;
extern u8 **D_0035FB28;

void func_00168040(void) {
    s32 i;

    func_0018A950();
    func_00168310();
    for (i = 0; i < 400; i++) {
        if (D_0035FB24[i] != 0xC0DE0005) {
            if (*(s32 *)(D_0035FB28[i] + 0x34) != 0) {
                func_00168120(D_0035FB28[i]);
            }
        }
    }
    func_00165360();
    D_0035FB10 = func_00168390();
    if (D_0035FB10 != 0) {
        D_0035FB14 = HMU_fn_p_vMalloc(D_0035FB10, 1);
    }
    D_0035FB20 = 0;
    func_0018AA00(0, D_0035F460, 0);
    if (D_0035FB10 != 0) {
        HMU_fn_vFree(&D_0035FB14, 1);
    }
}
