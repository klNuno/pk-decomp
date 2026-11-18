/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001992C0_0;

u8 func_001AB860(s32);
void func_00199170(u8 *, u8);
extern u8 D_005A8E00[];

void func_001992C0(unk_func_001992C0_0 *arg0) {
    u8 temp;

    temp = func_001AB860(arg0->unk_0C);
    func_00199170(D_005A8E00, temp);
}
