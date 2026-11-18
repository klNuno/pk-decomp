/* profile: o0 */
#include "common.h"

typedef union {
    f32 f;
    s32 i;
} unk_func_001EA3F0_0;

typedef struct {
    unk_func_001EA3F0_0 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EA3F0_1;

s32 func_0019D550(f32);

void func_001EA3F0(unk_func_001EA3F0_1 *arg0) {
    if (arg0->unk_0C == 8) {
        arg0->unk_00.i = func_0019D550(arg0->unk_00.f);
        arg0->unk_0C = 6;
    }
}
