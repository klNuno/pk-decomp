#include "common.h"

void func_002FEDD0();
extern u8 D_0035EBF0[];

void **func_00300530(void **arg0) {
    func_002FEDD0(arg0);
    *arg0 = D_0035EBF0;
    return arg0;
}
