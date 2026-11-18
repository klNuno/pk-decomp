/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B6650_0 {
    u8 pad_00[0x14];
    void *volatile unk_14;
} unk_func_001B6650_0;

s32 func_001B60A0();
void *memcpy(void *, const void *, u32);

void func_001B6650(unk_func_001B6650_0 *arg0, unk_func_001B6650_0 *arg1) {
    memcpy(arg0->unk_14, arg1->unk_14, func_001B60A0() - 0x2C);
}
