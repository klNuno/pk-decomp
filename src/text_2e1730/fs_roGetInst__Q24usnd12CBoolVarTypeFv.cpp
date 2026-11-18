#include "common.h"

typedef struct unk_fs_roGetInst__Q24usnd12CBoolVarTypeFv_0 {
    void *unk_00;
    u8 unk_04[0xC];
} unk_fs_roGetInst__Q24usnd12CBoolVarTypeFv_0;

extern "C" {
extern s8 D_00360750;
extern u8 D_0035CC60[];
extern u8 D_0035EAF0[];
extern unk_fs_roGetInst__Q24usnd12CBoolVarTypeFv_0 D_007BF270;
extern u8 D_007BF260[];

void func_002CDB60(void *, void *, void *);
void func_002FEF50(void *, s32, void *);
void c4sdk_malloc(void *, s32);
void func_002FEEB0();
void __register_global_object(void *, void *, void *);
}

namespace usnd {
class CBoolVarType {
public:
    static unk_fs_roGetInst__Q24usnd12CBoolVarTypeFv_0 *fs_roGetInst();
};

unk_fs_roGetInst__Q24usnd12CBoolVarTypeFv_0 *CBoolVarType::fs_roGetInst() {
    s32 name;
    unk_fs_roGetInst__Q24usnd12CBoolVarTypeFv_0 *volatile p;
    s32 sp1C;

    if (D_00360750 == 0) {
        p = &D_007BF270;
        func_002CDB60(&name, D_0035CC60, &sp1C);
        func_002FEF50(p, 3, &name);
        c4sdk_malloc(&name, 0);
        p->unk_00 = D_0035EAF0;
        __register_global_object(p, (void *)func_002FEEB0, D_007BF260);
        D_00360750 = 1;
    }
    return &D_007BF270;
}
}
