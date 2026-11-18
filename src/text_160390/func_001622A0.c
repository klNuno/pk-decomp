#include "common.h"

s32 func_001622A0(u16 *arg0, u16 arg1) {
    u16 temp = arg0[1] & arg1;
    if (temp == arg1) {
        return 1;
    }
    return 0;
}
