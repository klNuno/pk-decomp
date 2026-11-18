/* profile: o0 */
#include "common.h"

typedef struct unk_func_001BF7A0_0 {
    u8 pad_00[0x1D];
    u8 unk_1D;
    u8 unk_1E;
    u8 pad_1F[0x1];
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x1];
    u8 unk_29;
    u8 pad_2A[0x2];
    s32 unk_2C;
    s32 unk_30;
    u8 unk_34;
    u8 unk_35;
    u8 unk_36;
} unk_func_001BF7A0_0;

void func_001BF7A0(unk_func_001BF7A0_0 *arg0) {
    arg0->unk_34 = arg0->unk_1D;
    arg0->unk_35 = arg0->unk_1E;
    arg0->unk_36 = (s8)arg0->unk_29 & 7;
    arg0->unk_2C = arg0->unk_20;
    arg0->unk_30 = arg0->unk_24;
}
