#include "common.h"

void func_002EA820();
void func_002D2BB0();
extern u8 D_0035E650[];

void **func_002EAA10(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0[0] = D_0035E650;
        if (arg0 + 1 != NULL) {
            if (arg0 + 1 != NULL) {
                func_002EA820(arg0 + 1, -1);
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
