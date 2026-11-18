/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x78];
    f32 unk_78;
    f32 unk_7C;
} unk_func_001F75D0_0;

f32 func_001FE8E0(f32);
extern f32 D_005AD910[];

f32 func_001F75D0(unk_func_001F75D0_0 *arg0) {
    f32 temp;

    temp = 2.0f * D_005AD910[0];
    if (arg0->unk_7C > 0.0f) {
        temp = -temp;
    }
    temp = arg0->unk_78 + temp;
    temp = func_001FE8E0(temp);
    return temp;
}
