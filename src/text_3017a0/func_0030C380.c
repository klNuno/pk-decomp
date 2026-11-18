#include "common.h"

extern u8 D_0035F120[];
void func_00304B00(void *);

void **func_0030C380(void **arg0, s16 arg1) {
    if (arg0 != 0) {
        *arg0 = D_0035F120;
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
