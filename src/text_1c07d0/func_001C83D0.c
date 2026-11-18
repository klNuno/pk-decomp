/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001C83D0_3 {
    struct unk_func_001C83D0_0 *unk_00;
    void *unk_04;
} unk_func_001C83D0_3;

typedef struct unk_func_001C83D0_2 {
    void *unk_00;
    s16 unk_04;
    u8 pad_06[6];
    unk_func_001C83D0_3 *unk_0C;
    u8 pad_10[8];
} unk_func_001C83D0_2;

typedef struct unk_func_001C83D0_1 {
    unk_func_001C83D0_2 *unk_00;
    u8 pad_04[0xC];
} unk_func_001C83D0_1;

typedef struct unk_func_001C83D0_0 {
    u8 pad_00[0x88];
    u8 unk_88[0x88];
    unk_func_001C83D0_3 unk_110;
    unk_func_001C83D0_1 **unk_118;
    unk_func_001C83D0_1 *unk_11C;
    unk_func_001C83D0_1 unk_120;
    unk_func_001C83D0_2 unk_130;
    s32 unk_148;
} unk_func_001C83D0_0;

void memcpy(void *, void *, s32);

void func_001C83D0(unk_func_001C83D0_0 *arg0, unk_func_001C83D0_1 **arg1, s32 arg2) {
    arg0->unk_118 = arg1;
    arg0->unk_11C = *arg1;
    arg0->unk_148 = arg2;
    memcpy(&arg0->unk_120, *arg1, 0x10);
    arg0->unk_120.unk_00 = &arg0->unk_130;
    memcpy(&arg0->unk_130, (*arg1)->unk_00, 0x18);
    arg0->unk_130.unk_04 = 1;
    arg0->unk_110.unk_00 = arg0;
    arg0->unk_110.unk_04 = arg0->unk_88;
    arg0->unk_130.unk_0C = &arg0->unk_110;
    memcpy(arg0, (*arg1)->unk_00->unk_0C->unk_00, 0x88);
    *arg1 = &arg0->unk_120;
}
