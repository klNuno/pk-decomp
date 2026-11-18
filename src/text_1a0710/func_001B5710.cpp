/* profile: o0_301 */
#include "common.h"
typedef struct unk_func_001B5710_0 {
    u8 pad_00[0x138];
    u8 unk_138[4];
    u8 unk_13C[0x18];
    f32 unk_154;
} unk_func_001B5710_0;

extern "C" {
void *memcpy(void *, const void *, u32);

void func_001B5710(unk_func_001B5710_0 *arg0, f32 arg1) {
    memcpy(arg0->unk_138, arg0->unk_13C, 0x1C);
    arg0->unk_154 = arg1;
}
}
