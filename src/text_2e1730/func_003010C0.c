#include "common.h"

void func_003011F0(void *, void *);
void func_00301120();
void __register_global_object(void *, void *, void *);
extern s8 D_00360764;
extern u8 D_007BF310[];
extern u8 D_007BF320[];

void *func_003010C0(void) {
    u8 temp[4];

    if (D_00360764 == 0) {
        func_003011F0(D_007BF320, temp);
        __register_global_object(D_007BF320, func_00301120, D_007BF310);
        D_00360764 = 1;
    }
    return D_007BF320;
}
