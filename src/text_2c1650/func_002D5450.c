#include "common.h"

void func_002CF4F0(void *, s32);
void func_002CFEF0(s32 **);
void func_002D2BB0(void *);
s32 *func_002D51B0(void *);
s32 **func_002D5220(void *);
void func_002D5AE0(s32, s32);

void *func_002D5450(void *arg0, s16 arg1) {
    if (arg0 != 0) {
        s32 *sp3C;
        s32 *e;
        sp3C = *func_002D5220(arg0);
        while (e = func_002D51B0(arg0), sp3C != e) {
            func_002D5AE0(sp3C[4], 1);
            func_002CFEF0(&sp3C);
        }
        if (arg0 != 0) {
            if (arg0 != 0) {
                func_002CF4F0(arg0, -1);
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
