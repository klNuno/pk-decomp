/* profile: opt */
#include "common.h"

extern "C" {
extern s8 D_00360758;
extern u8 D_0035CC70[];
extern u8 D_0035EBB0[];
extern void *D_007BF2B0[];
extern u8 D_007BF2A0[];

void func_002CDB60(void *, void *, void *);
void func_002FF950(void *, s32, void *);
void c4sdk_malloc(void *, s32);
void func_002FF8B0();
void __register_global_object(void *, void *, void *);
}

namespace usnd {
class CFloatVarType {
public:
    static void **fs_roGetInst();
};

void **CFloatVarType::fs_roGetInst() {
    s32 sp14;
    void **volatile sp18;
    s32 sp1C;

    if (D_00360758 == 0) {
        sp18 = D_007BF2B0;
        func_002CDB60(&sp14, D_0035CC70, &sp1C);
        func_002FF950(sp18, 1, &sp14);
        c4sdk_malloc(&sp14, 0);
        *sp18 = D_0035EBB0;
        __register_global_object(sp18, (void *)func_002FF8B0, D_007BF2A0);
        D_00360758 = 1;
    }
    return D_007BF2B0;
}
}
