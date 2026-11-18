/* profile: o1 */
#include "common.h"

typedef struct unk_func_001C85B0_0 {
    u8 pad_00[0x14C];
} unk_func_001C85B0_0;

extern s32 D_0035FFE4;
extern unk_func_001C85B0_0 D_005AD960[];

unk_func_001C85B0_0 *func_001C85B0(void) {
    s32 temp = D_0035FFE4;

    D_0035FFE4 = temp + 1;
    return &D_005AD960[temp];
}
