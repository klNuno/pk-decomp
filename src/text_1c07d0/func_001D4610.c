/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0xD8];
    s32 unk_D8;
    u8 pad_DC[0x20];
    u8 unk_FC;
} unk_func_001D4610_0;

extern s32 D_005AB800[];

void func_001D4610(unk_func_001D4610_0 *arg0, u8 arg1) {
    u32 temp;

    if (arg1 > 1) {
        temp = arg0->unk_FC * (D_005AB800[0] - arg0->unk_D8);
        arg0->unk_D8 = D_005AB800[0] - temp / arg1;
    }
    arg0->unk_FC = arg1;
}
