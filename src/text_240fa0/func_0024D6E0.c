/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    f32 unk_04;
} unk_func_0024D6E0_0;

void func_001F9D20();
u8 func_001A95B0();

void func_0024D6E0(unk_func_0024D6E0_0 *arg0, s32 arg1, s32 arg2) {
    func_001F9D20(arg0, arg1, arg2);
    if (func_001A95B0() == 2) {
        arg0->unk_04 *= 2.0f;
    }
}
