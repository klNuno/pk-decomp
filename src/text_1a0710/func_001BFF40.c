/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BFF40_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001BFF40_0;

typedef struct unk_func_001BFF40_1 {
    u8 pad_00[0x4C];
    unk_func_001BFF40_0 unk_4C[2];
} unk_func_001BFF40_1;

typedef struct unk_func_001BFF40_2 {
    u8 pad_00[4];
    unk_func_001BFF40_1 *unk_04;
} unk_func_001BFF40_2;

unk_func_001BFF40_2 *HIE_fn_hGetSuperObjectObject(s32);

void func_001BFF40(s32 arg0, s64 arg1, unk_func_001BFF40_0 *arg2) {
    unk_func_001BFF40_0 *p;
    if (arg1 < 2 && arg1 >= 0 && arg2 != 0) {
        p = (unk_func_001BFF40_0 *)((u8 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_04 + (s32)arg1 * 12 + 0x4C);
        arg2->unk_00 = p->unk_00;
        arg2->unk_04 = p->unk_04;
        arg2->unk_08 = p->unk_08;
    }
}
