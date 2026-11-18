#include "common.h"

void __register_global_object();
void func_002D63E0();
void func_002D7280();
void func_002D6310();
extern s8 D_00360558;
extern u8 D_007BE908[];
extern u8 D_007BE920[];
extern s32 D_007BE930[];
extern s32 D_007BE934[];
extern s32 D_007BE938[];

u8 *func_002D6290(void) {
    s32 sp18;
    s32 sp1C;

    if (D_00360558 == 0) {
        func_002D7280(D_007BE920, &sp1C, &sp18);
        func_002D63E0(&sp18, -1);
        D_007BE930[0] = 0;
        D_007BE934[0] = 0;
        D_007BE938[0] = 0;
        __register_global_object(D_007BE920, func_002D6310, D_007BE908);
        D_00360558 = 1;
    }
    return D_007BE920;
}
