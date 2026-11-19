/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
} unk_func_001D6B20_0;

void func_001D6B20(unk_func_001D6B20_0 *arg0, u8 arg1, u8 arg2, s32 arg3) {
    arg0->unk_10 = (s8)arg3 | (s8)((s8)arg1 * 16) | ((s8)arg2 * 0x30);
}
