#include "common.h"

typedef struct unk_fs_roGetInst__Q24usnd16CGlobalVarAccessFv_0 {
    void *unk_00;
    u8 unk_04[0xC];
} unk_fs_roGetInst__Q24usnd16CGlobalVarAccessFv_0;

extern "C" {
extern s8 D_0036075C;
extern u8 D_0035EBE0[];
extern unk_fs_roGetInst__Q24usnd16CGlobalVarAccessFv_0 D_007BF2D0;
extern u8 D_007BF2D4[];
extern u8 D_007BF2C0[];

void func_002FFD10(void *, void *);
void func_002FFE50();
void __register_global_object(void *, void *, void *);
}

namespace usnd {
class CGlobalVarAccess {
public:
    static unk_fs_roGetInst__Q24usnd16CGlobalVarAccessFv_0 *fs_roGetInst();
};

unk_fs_roGetInst__Q24usnd16CGlobalVarAccessFv_0 *CGlobalVarAccess::fs_roGetInst() {
    s32 sp1C;

    if (D_0036075C == 0) {
        D_007BF2D0.unk_00 = D_0035EBE0;
        func_002FFD10(D_007BF2D4, &sp1C);
        __register_global_object(&D_007BF2D0, (void *)func_002FFE50, D_007BF2C0);
        D_0036075C = 1;
    }
    return &D_007BF2D0;
}
}
