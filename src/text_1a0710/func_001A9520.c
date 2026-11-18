/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x5B8];
    s32 unk_5B8[4];
} unk_func_001A9520_0;

void func_001AA530(u8);
extern unk_func_001A9520_0 D_005AB790[];
extern s32 D_005ABD58[];

s32 func_001A9520(void) {
    u8 i;

    for (i = 0; i < 4; i++) {
        D_005AB790[0].unk_5B8[i] = 0;
        func_001AA530(i);
    }
    D_005ABD58[0] = 0;
    func_001AA530(4);
    return 1;
}
