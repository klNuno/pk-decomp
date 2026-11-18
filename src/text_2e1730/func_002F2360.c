#include "common.h"

extern s8 D_003606A0;
extern s8 D_003606A4;

s8 *func_002F2360(void) {
    if (D_003606A0 == 0) {
        D_003606A4 = 0;
        D_003606A0 = 1;
    }
    return &D_003606A4;
}
