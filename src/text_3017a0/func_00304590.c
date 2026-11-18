#include "common.h"

void __register_global_object(void *, void (*)(), void *);
void func_003045E0();
extern s8 D_00360784;
extern s32 D_00360788;
extern u8 D_007BF7A0[];

s32 *func_00304590(void) {
    if (D_00360784 == 0) {
        D_00360788 = 0;
        __register_global_object(&D_00360788, func_003045E0, D_007BF7A0);
        D_00360784 = 1;
    }
    return &D_00360788;
}
