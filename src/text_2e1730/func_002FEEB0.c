#include "common.h"

void func_002CD2A0(void *, s32);
void func_002D2BB0(void *);
extern u8 D_0035EAB0[];
extern u8 D_0035EAD0[];
extern u8 D_0035EAF0[];
extern u8 D_0035EC90[];

void **func_002FEEB0(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0[0] = D_0035EAF0;
        if (arg0 != NULL) {
            arg0[0] = D_0035EAD0;
            if (arg0 != NULL) {
                arg0[0] = D_0035EAB0;
                if (arg0 != NULL) {
                    arg0[0] = D_0035EC90;
                    func_002CD2A0(arg0 + 2, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
