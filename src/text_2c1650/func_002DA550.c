#include "common.h"

void __register_global_object(void *, void *, void *);
void func_002DA640(void *);
void func_002DA6F0(void *, s32);
void func_002DAEA0(void *, void *, void *);
void func_002DA5D0();
extern s8 D_003605B0;
extern u8 D_007BEB20[];
extern u8 D_007BEB68[];
extern u8 D_007BEB80[];

u8 *func_002DA550(void) {
    s32 sp18;
    s32 sp1C;

    if (!D_003605B0) {
        func_002DAEA0(D_007BEB80, &sp1C, &sp18);
        func_002DA6F0(&sp18, -1);
        func_002DA640(D_007BEB20);
        __register_global_object(D_007BEB80, func_002DA5D0, D_007BEB68);
        D_003605B0 = 1;
    }
    return D_007BEB80;
}
