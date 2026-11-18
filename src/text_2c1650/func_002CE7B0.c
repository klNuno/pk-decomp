#include "common.h"

extern u8 D_0035E4C0[];
extern s8 D_00360510;
extern void *D_00360514;

void **func_002CE7B0(void) {
    if (D_00360510 == 0) {
        D_00360514 = D_0035E4C0;
        D_00360510 = 1;
    }
    return &D_00360514;
}
