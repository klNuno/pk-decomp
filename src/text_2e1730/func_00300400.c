#include "common.h"

void func_002CDB60(void *, void *, void *);
void func_00300530(void *, s32, void *);
void c4sdk_malloc(void *, s32);
void __register_global_object(void *, void *, void *);
void func_00300490();
extern s8 D_00360760;
extern u8 D_0035CCA0[];
extern u8 D_0035EC10[];
extern u8 D_007BF2E8[];
extern u8 D_007BF300[];

void *func_00300400(void) {
    if (D_00360760 == 0) {
        s32 sp14;
        void **volatile sp18 = (void **)D_007BF300;
        s32 sp1C;

        func_002CDB60(&sp14, D_0035CCA0, &sp1C);
        func_00300530(sp18, 0, &sp14);
        c4sdk_malloc(&sp14, 0);
        *sp18 = D_0035EC10;
        __register_global_object(sp18, func_00300490, D_007BF2E8);
        D_00360760 = 1;
    }
    return D_007BF300;
}
