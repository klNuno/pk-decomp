/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F95F0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_001F95F0_1;

typedef struct unk_func_001F95F0_2 {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_001F95F0_2;

typedef struct unk_func_001F95F0_3 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001F95F0_3;

typedef struct unk_func_001F95F0_4 {
    u8 pad_00[0xC];
    unk_func_001F95F0_2 *unk_0C;
    unk_func_001F95F0_3 *unk_10;
    u8 pad_14[0x8C];
    s32 unk_A0[3];
    u8 pad_AC[0x30];
} unk_func_001F95F0_4;

typedef struct unk_func_001F95F0_5 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001F95F0_5;

extern "C" {
unk_func_001F95F0_5 *HIE_fn_hGetSuperObjectObject(...);
void fn_vGetUltraOperatorPerso(...);
void func_001B4D70(...);
void func_001F49F0(...);
void func_001F4BF0(...);
void func_001FF6A0(...);
s32 func_00208CC0(...);

s32 *func_001F95F0(s32 arg0, s32 *arg1, unk_func_001F95F0_1 *arg2) {
    unk_func_001F95F0_4 sp40;
    s32 sp11C;
    s32 temp_s0;
    s32 temp_s1;
    u16 temp_s2;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s1), arg0, &sp11C);
    temp_s0 = HIE_fn_hGetSuperObjectObject(sp11C)->unk_10;
    func_001B4D70(temp_s0);
    func_001FF6A0(sp11C, &sp40);
    if (sp40.unk_10->unk_68 == 0) {
        arg2->unk_00 = ((s32 *)NULL)[0];
        arg2->unk_04 = ((s32 *)NULL)[1];
        arg2->unk_08 = ((s32 *)NULL)[2];
        arg2->unk_0C = 0x15;
        return arg1;
    }
    temp_s2 = sp40.unk_0C->unk_72;
    sp40.unk_0C->unk_72 |= 1;
    sp40.unk_0C->unk_72 &= 0xEFFF;
    func_001F49F0(&sp40);
    func_001F4BF0(&sp40);
    sp40.unk_0C->unk_72 = temp_s2;
    arg2->unk_00 = ((s32 *)&sp40.unk_A0)[0];
    arg2->unk_04 = ((s32 *)&sp40.unk_A0)[1];
    arg2->unk_08 = ((s32 *)&sp40.unk_A0)[2];
    arg2->unk_0C = 0x15;
    return arg1;
}
}
