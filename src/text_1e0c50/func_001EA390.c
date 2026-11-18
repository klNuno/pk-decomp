/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EA390_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EA390_0;

s32 func_0019D550(f32);

void func_001EA390(unk_func_001EA390_0 *arg0) {
    if (arg0->unk_0C == 8) {
        arg0->unk_00.i = func_0019D550(arg0->unk_00.f);
        arg0->unk_0C = 6;
    }
}
