#include "common.h"

extern s32 D_00360734;
extern s8 D_00360738;
extern s32 D_0036073C;
extern u8 D_0035C898[];
extern u8 D_007BF1B0[];

void func_002CD2A0();
void *__register_global_object(void *, void *, void *);
void func_002CDB60(void *, void *, void *);
s32 func_002F42C0(void);
s32 __sinit_CResData_cpp(void);
s32 func_002F4060(s32, void *, s32, s32, s32, s32, s32);

s32 func_002FAD20(void) {
    s32 a;
    void *p;
    s32 sp3C;

    if (D_00360738 == 0) {
        p = __register_global_object(&D_00360734, (void *)func_002CD2A0, D_007BF1B0);
        func_002CDB60(p, D_0035C898, &sp3C);
        a = func_002F42C0();
        D_0036073C = func_002F4060(a, p, __sinit_CResData_cpp(), 0x4C, 2, 0, 0);
        D_00360738 = 1;
    }
    return D_0036073C;
}
