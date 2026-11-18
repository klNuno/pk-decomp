#include "common.h"

void __register_global_object(void *, void (*)(), void *);
void func_002EA880(s32 *, s32);
void func_002EAE20(void *, s32 *, s32 *);
void func_002EAA10();
extern u8 D_0035E650[];
extern s8 D_0036061C;
extern u8 D_007BEBF8[];
extern void *D_007BEC10[];
extern u8 D_007BEC14[];
extern s8 D_007BEC24[];
extern s32 D_007BEC28[];

void **func_002EA780(void) {
    s32 sp18;
    s32 sp1C;

    if (D_0036061C == 0) {
        D_007BEC10[0] = D_0035E650;
        func_002EAE20(D_007BEC14, &sp1C, &sp18);
        func_002EA880(&sp18, -1);
        D_007BEC24[0] = 0;
        D_007BEC28[0] = 0;
        __register_global_object(D_007BEC10, func_002EAA10, D_007BEBF8);
        D_0036061C = 1;
    }
    return D_007BEC10;
}
