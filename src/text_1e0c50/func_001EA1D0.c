/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EA1D0_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EA1D0_0;

void func_001EA1D0(unk_func_001EA1D0_0 *arg0) {
    if (arg0->unk_0C != 8) {
        *(f32 *)&arg0->unk_00 = arg0->unk_00;
        arg0->unk_0C = 8;
    }
}
