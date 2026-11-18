/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_fn_ucGetDsgVar_0;

typedef struct {
    u8 pad_00[4];
    unk_fn_ucGetDsgVar_0 *unk_04;
} unk_fn_ucGetDsgVar_1;

typedef struct {
    unk_fn_ucGetDsgVar_1 **unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_fn_ucGetDsgVar_2;

typedef struct {
    u8 pad_00[0xC];
    unk_fn_ucGetDsgVar_2 *unk_0C;
} unk_fn_ucGetDsgVar_3;

u8 fn_ucGetDsgVarValue(s32, u8, s32, s32);

u8 fn_ucGetDsgVar(u8 arg0, u8 arg1, unk_fn_ucGetDsgVar_3 *arg2, s32 arg3) {
    return fn_ucGetDsgVarValue(arg2->unk_0C->unk_08 + (*arg2->unk_0C->unk_00)->unk_04[arg0].unk_00, arg1,
                               (*arg2->unk_0C->unk_00)->unk_04[arg0].unk_04, arg3);
}
