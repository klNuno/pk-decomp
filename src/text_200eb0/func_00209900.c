/* profile: o0 */
#include "common.h"

typedef struct unk_func_00209900_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00209900_0;

extern u8 D_00360190;
s16 func_0015C4D0(u8);

s32 func_00209900(s32 arg0, unk_func_00209900_0 *arg1) {
    arg0 = arg0;
    arg1->unk_00 = func_0015C4D0(D_00360190);
    arg1->unk_0C = 6;
    return 1;
}
