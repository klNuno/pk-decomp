/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x80];
} unk_func_001C51C0_0;

void func_00176750();
extern unk_func_001C51C0_0 *D_0035FFF8;
extern u32 D_00360000;
extern u16 D_005DFB60[];

void func_001C51C0(void) {
    unk_func_001C51C0_0 *p;
    u32 i;

    p = D_0035FFF8;
    for (i = 0; i < D_00360000; p++, i++) {
        if (D_005DFB60[i]) {
            func_00176750(p);
        }
    }
}
