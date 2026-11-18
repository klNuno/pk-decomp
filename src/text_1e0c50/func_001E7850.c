/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    u8 pad_64[2];
    u8 unk_66;
    u8 unk_67;
} unk_func_001E7850_0;

typedef struct {
    unk_func_001E7850_0 *unk_00;
} unk_func_001E7850_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001E7850_1 *unk_10;
} unk_func_001E7850_2;

extern u8 D_00360120;
extern u8 D_00360124;

s32 func_001E7850(unk_func_001E7850_2 *arg0, u8 arg1) {
    D_00360120 = arg0->unk_10->unk_00[arg1].unk_66;
    D_00360124 = arg0->unk_10->unk_00[arg1].unk_67;
    return arg0->unk_10->unk_00[arg1].unk_60;
}
