#include "common.h"

void *func_002F27D0(void *);
void func_002F2700();
void __register_global_object(void *, void *, void *);
extern s8 D_003606A8;
extern u8 D_007BEF28[];
extern u8 D_007BEF40[];

void *func_002F26B0(void) {
    if (D_003606A8 == 0) {
        __register_global_object(func_002F27D0(D_007BEF40), func_002F2700, D_007BEF28);
        D_003606A8 = 1;
    }
    return D_007BEF40;
}
