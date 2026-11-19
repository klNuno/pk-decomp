/* profile: o0 */
#include "common.h"

typedef struct unk_func_0019E9A0_0 {
    u8 pad_00[0x30];
    u32 unk_30;
} unk_func_0019E9A0_0;

u8 func_0019E9A0(unk_func_0019E9A0_0 *arg0) {
    return arg0->unk_30 & 0x10;
}
