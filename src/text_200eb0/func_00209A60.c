/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00209A60_0;

f32 func_0015C410(u8);
extern u8 D_00360190;

s32 func_00209A60(s32 arg0, unk_func_00209A60_0 *arg1) {
    arg0 = arg0;
    arg1->unk_00 = func_0015C410(D_00360190);
    arg1->unk_0C = 8;
    return 1;
}
