/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x14];
} unk_func_001CFCA0_0;

extern unk_func_001CFCA0_0 D_005EC0E0[];
extern s32 D_005ECA40[];

void func_001CFCA0(void) {
    unk_func_001CFCA0_0 *p;
    u32 i;

    p = D_005EC0E0;
    for (i = 0; i < 100; i++) {
        p->unk_00 = 0;
        p++;
    }
    D_005ECA40[0] = 0;
}
