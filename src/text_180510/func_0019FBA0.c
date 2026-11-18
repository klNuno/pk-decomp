/* profile: o0 */
#include "common.h"

typedef struct unk_func_0019FBA0_0 {
    u8 pad_00[0xC];
} unk_func_0019FBA0_0;

typedef struct unk_func_0019FBA0_1 {
    u8 pad_00[0x24];
    unk_func_0019FBA0_0 *unk_24;
} unk_func_0019FBA0_1;

unk_func_0019FBA0_0 *func_0019FBA0(unk_func_0019FBA0_1 *arg0, s16 arg1) {
    s32 temp;
    unk_func_0019FBA0_0 *temp2;

    temp = 0;
    temp2 = &arg0->unk_24[arg1];
    temp = 0;
    return temp2;
}
