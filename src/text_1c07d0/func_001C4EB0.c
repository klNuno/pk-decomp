/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C4EB0_0 {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0x5C];
} unk_func_001C4EB0_0;

void *memset(void *, s32, s32);
extern s32 D_0035FFEC;
extern s32 D_0035FFF0;
extern s32 D_0035FFF4;
extern unk_func_001C4EB0_0 *D_0035FFF8;
extern u8 D_005DFB60[];

void func_001C4EB0(void) {
    s32 var_s1 = D_0035FFEC;
    unk_func_001C4EB0_0 *var_s0 = D_0035FFF8;
    unk_func_001C4EB0_0 *temp_s2 = var_s0 + 0x401;

    memset(D_005DFB60, 0, 0x800);
    for (temp_s2 = var_s0 + 0x401; var_s0 != temp_s2; var_s0++) {
        var_s0->unk_20 = var_s1;
        var_s1 += 0x60;
    }
    D_0035FFF4 = 0;
    D_0035FFF0 = 0;
}
