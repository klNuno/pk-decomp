/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xD8];
    u32 unk_D8;
    u8 pad_DC[0x20];
    u8 unk_FC;
} unk_func_001D46A0_0;

s32 func_00122868(u64, s32);
s32 func_00197860(unk_func_001D46A0_0 *);
s8 func_001ABB40(s32);
extern u32 D_005AB800[];

void func_001D46A0(unk_func_001D46A0_0 *arg0, u32 arg1) {
    u8 n;
    u32 temp;

    n = (u8)func_00122868(arg1 * func_001ABB40(func_00197860(arg0)), 100);
    if (n > 1) {
        temp = arg0->unk_FC * (D_005AB800[0] - arg0->unk_D8);
        arg0->unk_D8 = D_005AB800[0] - temp / n;
        arg0->unk_FC = n;
    }
}
