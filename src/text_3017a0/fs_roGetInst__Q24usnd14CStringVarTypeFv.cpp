#include "common.h"

typedef struct unk_fs_roGetInst__Q24usnd14CStringVarTypeFv_0 {
    void *unk_00;
    u8 unk_04[0xC];
} unk_fs_roGetInst__Q24usnd14CStringVarTypeFv_0;

extern "C" {
extern s8 D_00360768;
extern u8 D_0035CCD0[];
extern u8 D_0035ECD0[];
extern unk_fs_roGetInst__Q24usnd14CStringVarTypeFv_0 D_007BF340;
extern u8 D_007BF330[];

void func_002CDB60(void *, void *, void *);
void func_00301B70(void *, s32, void *);
void c4sdk_malloc(void *, s32);
void func_00301AD0();
void __register_global_object(void *, void *, void *);
}

namespace usnd {
class CStringVarType {
public:
    static unk_fs_roGetInst__Q24usnd14CStringVarTypeFv_0 *fs_roGetInst();
};

unk_fs_roGetInst__Q24usnd14CStringVarTypeFv_0 *CStringVarType::fs_roGetInst() {
    s32 name;
    unk_fs_roGetInst__Q24usnd14CStringVarTypeFv_0 *volatile p;
    s32 sp1C;

    if (D_00360768 == 0) {
        p = &D_007BF340;
        func_002CDB60(&name, D_0035CCD0, &sp1C);
        func_00301B70(p, 2, &name);
        c4sdk_malloc(&name, 0);
        p->unk_00 = D_0035ECD0;
        __register_global_object(p, (void *)func_00301AD0, D_007BF330);
        D_00360768 = 1;
    }
    return &D_007BF340;
}
}
