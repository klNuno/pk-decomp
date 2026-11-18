#include "common.h"

void func_002D2BB0();
extern u8 D_0035E910[];
extern u8 D_0035E950[];

void **func_002F88F0(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035E950;
        if (arg0 != NULL) {
            *arg0 = D_0035E910;
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
