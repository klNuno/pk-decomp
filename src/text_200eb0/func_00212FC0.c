/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00212FC0_0;

s32 func_0012AB60();

s32 func_00212FC0(s32 arg0, s32 arg1, unk_func_00212FC0_0 *arg2) {
    s32 temp;

    temp = func_0012AB60();
    arg2->unk_00 = temp;
    arg2->unk_0C = 6;
    return arg1;
}
