#include "common.h"

extern "C" {
extern s8 D_00360740;
extern u8 D_007BF1C0[];
extern u8 D_007BF1D0[];
void *__ct__Q24usnd11CWavResTypeFv(void *);
void func_002FCD00();
void __register_global_object(void *, void *, void *);
u8 *func_002FCCB0(void);
}

u8 *func_002FCCB0(void) {
    if (D_00360740 == 0) {
        __register_global_object(__ct__Q24usnd11CWavResTypeFv(D_007BF1D0), (void *)func_002FCD00, D_007BF1C0);
        D_00360740 = 1;
    }
    return D_007BF1D0;
}
