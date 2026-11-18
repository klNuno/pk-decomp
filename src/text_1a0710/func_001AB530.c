/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001AB530_0 {
    u8 pad_00[0x14];
} unk_func_001AB530_0;

typedef struct unk_func_001AB530_1 {
    unk_func_001AB530_0 *unk_00;
} unk_func_001AB530_1;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001AB530_1 *func_001A7060(s32);
void *memcpy(void *, const void *, s32);

void func_001AB530(s32 arg0, u16 arg1, u16 arg2) {
    unk_func_001AB530_0 temp;

    if (func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0)) != NULL) {
        memcpy(&temp, &func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0))->unk_00[arg2], 0x14);
        memcpy(&func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0))->unk_00[arg2], &func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0))->unk_00[arg1], 0x14);
        memcpy(&func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0))->unk_00[arg1], &temp, 0x14);
    }
}
