/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[0x64];
    u8 unk_74;
} unk_func_001B4D70_0;

void *memcpy(void *, const void *, u32);

void func_001B4D70(unk_func_001B4D70_0 *arg0) {
    if (!(arg0->unk_74 & 1)) {
        arg0->unk_74 |= 1;
        memcpy((void *)arg0->unk_0C, (void *)arg0->unk_04, 0x7C);
    }
}
