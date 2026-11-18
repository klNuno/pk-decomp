/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EA340_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EA340_0;

void func_001EA340(unk_func_001EA340_0 *arg0) {
    if (arg0->unk_0C != 8) {
        arg0->unk_00.f = arg0->unk_00.i;
        arg0->unk_0C = 8;
    }
}
