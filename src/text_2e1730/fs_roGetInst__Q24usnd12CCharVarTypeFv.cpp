#include "common.h"

extern "C" {
void __register_global_object(void *, void (*)(), void *);
void c4sdk_malloc(void *, s32);
void func_002CDB60(void *, void *, void *);
void func_002FF480(void *, s32, void *);
void func_002FF3E0();
extern u8 D_0035CC68[];
extern u8 D_0035EB50[];
extern s8 D_00360754;
extern u8 D_007BF280[];
extern void *D_007BF290[];
}

typedef struct {
    s32 unk_00;
} unk_fs_roGetInst__Q24usnd12CCharVarTypeFv_0;

namespace usnd {
class CCharVarType {
public:
    static void **fs_roGetInst();
};
}

void **usnd::CCharVarType::fs_roGetInst() {
    if (D_00360754 == 0) {
        unk_fs_roGetInst__Q24usnd12CCharVarTypeFv_0 sp14;
        void **volatile obj = D_007BF290;
        unk_fs_roGetInst__Q24usnd12CCharVarTypeFv_0 sp1C;

        func_002CDB60(&sp14, D_0035CC68, &sp1C);
        func_002FF480(obj, 4, &sp14);
        c4sdk_malloc(&sp14, 0);
        *obj = D_0035EB50;
        __register_global_object(obj, func_002FF3E0, D_007BF280);
        D_00360754 = 1;
    }
    return D_007BF290;
}
