#include "common.h"

void *__register_global_object(void *, void *, void *);
s32 __sinit_CResData_cpp();
void func_002CDB60(void *, void *, void *);
s32 func_002F4060(s32, void *, s32, s32, s32, void *, s32);
s32 func_002F42C0();
void func_002CD2A0();
void func_002EEBC0();
extern u8 D_0035BD70[];
extern s32 D_0036065C;
extern s8 D_00360660;
extern s32 D_00360664;
extern u8 D_007BEE70[];

s32 func_002EDF50(void) {
    s32 sp3C;
    void *temp_v0;
    if (D_00360660 == 0) {
        temp_v0 = __register_global_object(&D_0036065C, func_002CD2A0, D_007BEE70);
        func_002CDB60(temp_v0, D_0035BD70, &sp3C);
        D_00360664 = func_002F4060(func_002F42C0(), temp_v0, __sinit_CResData_cpp(), 0x48, 2, func_002EEBC0, 0);
        D_00360660 = 1;
    }
    return D_00360664;
}
