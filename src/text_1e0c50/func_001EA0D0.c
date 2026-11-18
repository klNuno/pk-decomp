/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_func_001EA0D0_0;

typedef struct {
    u8 pad_00[4];
    unk_func_001EA0D0_0 *unk_04;
} unk_func_001EA0D0_1;

typedef struct {
    unk_func_001EA0D0_1 **unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_001EA0D0_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001EA0D0_2 *unk_0C;
} unk_func_001EA0D0_3;

typedef void (*unk_func_001EA0D0_4)(s32, u8, s32);

unk_func_001EA0D0_4 func_00208E20(s32);

void func_001EA0D0(u8 arg0, u8 arg1, unk_func_001EA0D0_3 *arg2, s32 arg3) {
    s32 type;
    unk_func_001EA0D0_4 fn;
    s32 p;

    type = (*arg2->unk_0C->unk_00)->unk_04[arg0].unk_04;
    fn = func_00208E20(type);
    p = arg2->unk_0C->unk_08 + (*arg2->unk_0C->unk_00)->unk_04[arg0].unk_00;
    fn(p, arg1, arg3);
}
