/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
} unk_func_001C7210_0;

typedef struct {
    u8 pad_00[0x50];
    unk_func_001C7210_0 *unk_50;
} unk_func_001C7210_1;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001C7210_1 *func_00197860(s32);

u16 func_001C7210(s32 arg0) {
    s32 temp;

    temp = *HIE_fn_hGetSuperObjectObject(arg0);
    return func_00197860(temp)->unk_50->unk_50;
}
