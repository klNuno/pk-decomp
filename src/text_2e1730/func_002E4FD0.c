/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002E4FD0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002E4FD0_0;

typedef struct unk_func_002E4FD0_1 {
    u8 pad_00[4];
    s32 unk_04;
    unk_func_002E4FD0_0 *unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
    u8 pad_1C[0xC];
    s32 unk_28;
    u8 pad_2C[4];
    u32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
    u32 unk_40;
} unk_func_002E4FD0_1;

typedef struct unk_func_002E4FD0_2 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    s32 unk_10;
    u32 unk_14;
    s32 unk_18;
    u8 pad_1C[8];
    s32 unk_24;
    u8 pad_28[4];
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3C;
    u8 pad_40[4];
    s32 unk_44;
    unk_func_002E4FD0_1 *unk_48;
} unk_func_002E4FD0_2;

void func_002D2BB0();
s32 func_002D2BC0();
void func_002DF6A0();

s32 func_002E4FD0(unk_func_002E4FD0_2 *arg0, unk_func_002E4FD0_1 *arg1, s32 arg2) {
    unk_func_002E4FD0_0 *e;

    e = &arg1->unk_08[arg2];
    if (arg0->unk_18 != 0) {
        func_002D2BB0(arg0->unk_18);
    }
    arg0->unk_18 = func_002D2BC0(e->unk_08);
    arg0->unk_44 = arg0->unk_18;
    if (arg0->unk_18 == 0) {
        return 0;
    }
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_30 = e->unk_08;
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    arg0->unk_2C = e->unk_04;
    arg0->unk_24 = arg1->unk_28 + e->unk_00;
    arg0->unk_14 = arg1->unk_40;
    if (arg0->unk_14 < arg1->unk_30) {
        arg0->unk_3C = arg1->unk_18 + arg0->unk_14;
    } else {
        arg0->unk_3C = 0;
    }
    arg0->unk_48 = arg1;
    func_002DF6A0(arg0, arg1);
    return 1;
}
