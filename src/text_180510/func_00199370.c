/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00199370_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00199370_0;

typedef struct unk_func_00199370_1 {
    u8 pad_00[4];
    unk_func_00199370_0 *unk_04;
} unk_func_00199370_1;

extern u8 D_005A8DE0[];
u8 func_001AB960(s32);
void func_00199170(void *, u8);

void func_00199370(unk_func_00199370_1 *arg0) {
    u8 temp;

    temp = func_001AB960(arg0->unk_04->unk_08);
    func_00199170(D_005A8DE0, temp);
}
