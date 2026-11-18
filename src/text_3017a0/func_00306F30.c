#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_00306F30_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0xC];
    unk_func_00306F30_1 *unk_18;
} unk_func_00306F30_0;

s32 func_0030D050(s32);

s32 func_00306F30(unk_func_00306F30_0 *arg0) {
    if (func_0030D050(arg0->unk_18->unk_0C) == 0 || func_0030D050(arg0->unk_08) == 0) {
        arg0->unk_18->unk_08 = 0;
    }
    return arg0->unk_18->unk_08 != 0;
}
