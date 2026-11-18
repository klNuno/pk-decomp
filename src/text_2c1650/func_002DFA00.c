/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002DFA00_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
    u8 pad_1C[0x8];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34[0x10];
    s32 unk_44;
} unk_func_002DFA00_0;

typedef struct unk_func_002DFA00_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002DFA00_1;

typedef struct unk_func_002DFA00_2 {
    u8 pad_00[0x8];
    unk_func_002DFA00_1 *unk_08;
} unk_func_002DFA00_2;

void func_00304670(s32, s32);
s32 func_003046E0(s32, s32);
s32 func_003047A0();

s32 func_002DFA00(unk_func_002DFA00_0 *arg0, unk_func_002DFA00_2 *arg1) {
    unk_func_002DFA00_1 *p;
    s32 temp;

    arg0->unk_30 = 0;
    temp = arg0->unk_18;
    if (temp != 0) {
        func_00304670(func_003047A0(), temp);
        arg0->unk_18 = 0;
    }
    if (arg0->unk_28 == 0) {
        return 0;
    }
    p = arg1->unk_08;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_24 = arg0->unk_28 + p->unk_00;
    arg0->unk_2C = p->unk_04;
    temp = p->unk_08;
    if (temp != 0) {
        arg0->unk_18 = func_003046E0(func_003047A0(), temp);
        arg0->unk_44 = arg0->unk_18;
        if (arg0->unk_18 == 0) {
            return 0;
        }
    }
    arg0->unk_30 = p->unk_08;
    if (arg0->unk_10 == -1) {
        return 0;
    }
    if (arg0->unk_18 == 0) {
        arg0->unk_30 = 0;
    }
    return 1;
}
