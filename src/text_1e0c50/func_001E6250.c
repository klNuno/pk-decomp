#include "common.h"

s8 *func_001E6250(s8 *arg0, s8 arg1) {
    while (*arg0 != 0 && *arg0 != arg1) {
        arg0++;
    }
    if (*arg0 == 0) {
        return NULL;
    }
    return arg0;
}
