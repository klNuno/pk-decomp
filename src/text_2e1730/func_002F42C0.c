#include "common.h"

void func_002D0DA0();
void func_002F4390();
void __register_global_object();
void func_002F43D0();
extern s8 D_003606BC;
extern u8 D_007BEF60[];
extern u8 D_007BEF70[];

u8 *func_002F42C0(void) {
    if (D_003606BC == 0) {
        s32 sp14;
        u8 *volatile p;
        s32 sp1C;

        p = D_007BEF70;
        func_002D0DA0(p, &sp1C);
        func_002F4390(p + 4, &sp14);
        __register_global_object(p, func_002F43D0, D_007BEF60);
        D_003606BC = 1;
    }
    return D_007BEF70;
}
