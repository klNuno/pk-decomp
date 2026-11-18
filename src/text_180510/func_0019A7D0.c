/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} unk_func_0019A7D0_0;

unk_func_0019A7D0_0 *HIE_fn_hGetSuperObjectObject();
void func_0012E1E0();
void func_00176740();
s32 func_00198120();
s32 func_00199810();
void func_0019A2F0();
s32 func_0019A610();
s32 func_001A7D60();
s32 func_001A7D80();
void func_001BE240();
s32 func_001BE470();
void func_001BE490();
extern u32 D_003338C0[];
extern s32 D_003338D0[];

void func_0019A7D0(void) {
    u32 i;
    s32 obj;
    unk_func_0019A7D0_0 *so;
    s32 a;

    for (i = 0; i < D_003338C0[0]; i++) {
        obj = func_00199810(D_003338D0[0], i);
        func_00176740(obj);
        if (func_0019A610(obj)) {
            func_0012E1E0(obj);
            a = HIE_fn_hGetSuperObjectObject(obj)->unk_20;
            func_001BE490(a, func_001BE470(HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))->unk_20));
            func_001BE240(func_001BE470(HIE_fn_hGetSuperObjectObject(obj)->unk_20), obj);
        }
        so = HIE_fn_hGetSuperObjectObject(obj);
        if (so->unk_04) {
            func_0019A2F0(func_00198120(so->unk_04));
        }
    }
}
