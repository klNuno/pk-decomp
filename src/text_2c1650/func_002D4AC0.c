#include "common.h"

void *func_002D2BC0(s32);
void *func_002D4CE0(void *, s32, s32, s32, s32);
s32 func_002CF630(void *);
void func_002D29C0(s32 *, void *, s32 *, void **);

void *func_002D4AC0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp64;
    s32 sp68;
    s32 sp6C;
    void *p;

    sp64 = NULL;
    if (arg4 != 0) {
        p = func_002D2BC0(0x10);
        if (p != NULL) {
            p = func_002D4CE0(p, arg1, arg2, arg3, arg4);
        }
        sp64 = p;
        if (p != NULL) {
            sp68 = func_002CF630(arg0 + 4);
            func_002D29C0(&sp6C, arg0, &sp68, &sp64);
        }
    }
    return sp64;
}
