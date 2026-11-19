/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001BFFF0_0;

typedef struct {
    u8 pad_00[4];
    unk_func_001BFFF0_0 *unk_04;
} unk_func_001BFFF0_1;

unk_func_001BFFF0_1 *HIE_fn_hGetSuperObjectObject(s32);

void func_001BFFF0(s32 arg0, s64 arg1, unk_func_001BFFF0_0 *arg2) {
    unk_func_001BFFF0_0 *temp_s0;

    if (arg1 < 2 && arg1 >= 0 && arg2 != NULL) {
        temp_s0 = (unk_func_001BFFF0_0 *)((u8 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_04 + (s32)arg1 * 12 + 0x4C);
        temp_s0->unk_00 = arg2->unk_00;
        temp_s0->unk_04 = arg2->unk_04;
        temp_s0->unk_08 = arg2->unk_08;
    }
}
