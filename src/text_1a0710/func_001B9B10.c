/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[2];
    u8 unk_02;
    u8 pad_03[0x19];
    f32 unk_1C;
} unk_func_001B9B10_0;

void func_001B9B10(unk_func_001B9B10_0 *arg0, u8 arg1, f32 arg2) {
    arg0->unk_02 = arg1;
    arg0->unk_1C = arg2;
}
