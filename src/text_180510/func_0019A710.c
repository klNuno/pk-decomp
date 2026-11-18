/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019A710_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0019A710_0;

unk_func_0019A710_0 *HIE_fn_hGetSuperObjectObject();
void func_00176740();
s32 func_00198120();
s32 func_00199810();
void func_0019A6A0();
extern u32 D_003338C0[];
extern s32 D_003338D0[];

void func_0019A710(void) {
    u32 i;
    s32 temp;
    unk_func_0019A710_0 *temp2;

    for (i = 0; i < D_003338C0[0]; i++) {
        temp = func_00199810(D_003338D0[0], i);
        func_00176740(temp);
        temp2 = HIE_fn_hGetSuperObjectObject(temp);
        if (temp2->unk_04 != 0) {
            func_0019A6A0(func_00198120(temp2->unk_04));
        }
    }
}
