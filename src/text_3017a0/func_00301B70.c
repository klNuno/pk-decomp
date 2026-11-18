#include "common.h"

void func_002FEDD0();
extern u8 D_0035ECB0[];

void **func_00301B70(void **arg0) {
    func_002FEDD0(arg0);
    *arg0 = D_0035ECB0;
    return arg0;
}
