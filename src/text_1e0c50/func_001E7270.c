/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001E7270_2 {
    u8 pad_00[0x60];
    s32 unk_60;
    u8 unk_64;
    u8 unk_65;
    u8 unk_66;
    u8 unk_67;
} unk_func_001E7270_2;

typedef struct unk_func_001E7270_1 {
    unk_func_001E7270_2 *unk_00;
} unk_func_001E7270_1;

typedef struct unk_func_001E7270_0 {
    u8 pad_00[0x10];
    unk_func_001E7270_1 *unk_10;
} unk_func_001E7270_0;

extern u8 D_00360120;
extern u8 D_00360124;
void memset();

void func_001E7270(unk_func_001E7270_0 *arg0, u8 arg1, u8 arg2, s32 arg3, u8 arg4) {
    arg0->unk_10->unk_00[arg1].unk_66 = D_00360120;
    arg0->unk_10->unk_00[arg1].unk_67 = D_00360124;
    arg0->unk_10->unk_00[arg1].unk_64 = arg4;
    arg0->unk_10->unk_00[arg1].unk_60 = arg3;
    arg0->unk_10->unk_00[arg1].unk_65 = arg2;
    memset(&arg0->unk_10->unk_00[arg1], 0, 0x60);
}
