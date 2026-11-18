#include "common.h"

extern u8 D_007BF390[];

s32 func_00303380();
void *func_00302D10(s32, void *);

void **func_002EB770(void **arg0, u8 *arg1) {
    if (arg1 == NULL) {
        *arg0 = D_007BF390;
    } else {
        func_00303380();
        *arg0 = func_00302D10(func_00303380(), arg1 + 4);
    }
    return arg0;
}
