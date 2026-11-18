#include "common.h"

void func_002D2BB0();
extern u8 D_0035E910[];
extern u8 D_0035E950[];
extern u8 D_0035EE90[];

void **func_003061B0(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0[0] = D_0035EE90;
        if (arg0 != NULL) {
            arg0[0] = D_0035E950;
            if (arg0 != NULL) {
                arg0[0] = D_0035E910;
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
