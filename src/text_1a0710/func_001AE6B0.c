/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001AE6B0_0 {
    s32 unk_00;
    u8 pad_04[0x10];
} unk_func_001AE6B0_0;

void *memset(void *, s32, u32);
extern s32 D_005AD4C0[];
extern s32 D_005AD540[];
extern unk_func_001AE6B0_0 D_005AD5C0[];

void func_001AE6B0(void) {
    s32 i;
    s32 size;

    i = 0;
    size = 0x14;
    for (; i < 30; i++) {
        memset(&D_005AD5C0[i], 0, size);
        D_005AD5C0[i].unk_00 = 1;
        D_005AD4C0[i] = 1;
        D_005AD540[i] = 0;
    }
}
