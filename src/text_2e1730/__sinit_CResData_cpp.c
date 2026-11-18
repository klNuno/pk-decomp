#include "common.h"

void *__register_global_object(void *, void *, void *);
void func_002CDB60(void *, void *, void *);
s32 func_002F3FB0(void);
s32 func_002F4060(s32, void *, s32, s32, s32, s32, s32);
s32 func_002F42C0(void);
void func_002CD2A0();
extern u8 D_0035BE80[];
extern s32 D_00360690;
extern s8 D_00360694;
extern s32 D_00360698;
extern u8 D_007BEF18[];

s32 __sinit_CResData_cpp(void) {
    s32 sp3C;
    s32 temp_s0;
    void *temp_s1;

    if (D_00360694 == 0) {
        temp_s1 = __register_global_object(&D_00360690, func_002CD2A0, D_007BEF18);
        func_002CDB60(temp_s1, D_0035BE80, &sp3C);
        temp_s0 = func_002F42C0();
        D_00360698 = func_002F4060(temp_s0, temp_s1, func_002F3FB0(), 0x18, 2, 0, 0);
        D_00360694 = 1;
    }
    return D_00360698;
}
