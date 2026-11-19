/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A2ED0_0 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_001A2ED0_0;

unk_func_001A2ED0_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001987D0();
s32 func_001987F0();
s32 func_00198810();
s32 func_00198840();
s32 func_001A2DF0();
s32 func_001A7D60();
s32 func_001A7D80();
s32 func_001BE470();

s32 func_001A2ED0(void) {
    s32 obj;
    s32 sum;
    s32 n;
    s32 it;
    s32 a;
    s32 b;

    obj = func_001BE470(HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))->unk_20);
    sum = func_001A2DF0(obj);
    for (n = func_00198840(obj), a = it = func_00198810(obj); n > 0; n--, b = it = func_001987D0(it), (void)b) {
        sum += func_001A2DF0(func_001987F0(it));
    }
    return sum;
}
