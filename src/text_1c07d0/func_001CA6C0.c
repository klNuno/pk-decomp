/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001CA6C0_0 {
    u8 pad_00[6];
    u16 unk_06;
    u8 pad_08[4];
} unk_func_001CA6C0_0;

typedef struct unk_func_001CA6C0_1 {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_func_001CA6C0_1;

typedef struct unk_func_001CA6C0_2 {
    unk_func_001CA6C0_1 *unk_00;
} unk_func_001CA6C0_2;

typedef struct unk_func_001CA6C0_3 {
    u8 pad_00[0xC];
    unk_func_001CA6C0_2 *unk_0C;
    u8 *unk_10;
    u8 pad_14[0xC];
    f32 unk_20;
    u8 unk_24;
} unk_func_001CA6C0_3;

void func_001CA0A0();
u8 func_001CA430();
unk_func_001CA6C0_0 *func_001CBDA0();

void func_001CA6C0(s32 arg0, unk_func_001CA6C0_3 *arg1) {
    unk_func_001CA6C0_0 *s0;
    u8 s1;

    s0 = func_001CBDA0(arg1->unk_0C->unk_00, 0, 0);
    if (s0 == NULL) {
        return;
    }
    s1 = arg1->unk_0C->unk_00->unk_5E;
    while (arg1->unk_24 != s1 && s0[arg1->unk_24].unk_06 <= arg1->unk_20) {
        if (arg1->unk_10[arg1->unk_24] == 0) {
            func_001CA0A0(&s0[arg1->unk_24], 0, arg0);
            arg1->unk_10[arg1->unk_24] = func_001CA430(&s0[arg1->unk_24]);
        } else if (arg1->unk_10[arg1->unk_24] != 0xFF) {
            arg1->unk_10[arg1->unk_24] = (s8)arg1->unk_10[arg1->unk_24] - 1;
        }
        arg1->unk_24 = (s8)arg1->unk_24 + 1;
    }
}
