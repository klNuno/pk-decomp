/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001CC920_0 {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
} unk_func_001CC920_0;

typedef struct unk_func_001CC920_1 {
    u8 pad_00[0x1C];
    u16 unk_1C;
    u8 pad_1E[0x16];
    u16 unk_34;
} unk_func_001CC920_1;

typedef struct unk_func_001CC920_2 {
    u16 unk_00;
    u8 pad_02[0xC];
} unk_func_001CC920_2;

typedef struct unk_func_001CC920_3 {
    u8 pad_00[8];
} unk_func_001CC920_3;

typedef struct unk_func_001CC920_4 {
    u8 pad_00[0x10];
} unk_func_001CC920_4;

unk_func_001CC920_1 *func_001CAAA0(u16, s32);
void func_001CAC50(unk_func_001CC920_4 *, unk_func_001CC920_3 *);
void func_001CAD10(void *, unk_func_001CC920_4 *);
extern unk_func_001CC920_2 *D_00360050;
extern unk_func_001CC920_3 *D_0036005C;

void *func_001CC920(unk_func_001CC920_0 *arg0, u16 arg1, void *arg2) {
    unk_func_001CC920_1 *temp_s0;
    unk_func_001CC920_2 *temp_s1;
    u16 temp_s2;
    unk_func_001CC920_4 sp40;

    if (!(arg1 < arg0->unk_50)) {
        return NULL;
    }
    temp_s2 = arg0->unk_5C;
    temp_s0 = func_001CAAA0(temp_s2, arg1);
    arg1 -= temp_s0->unk_1C;
    temp_s1 = &D_00360050[temp_s0->unk_34 + arg1];
    if (temp_s1->unk_00 == 0xFFFF) {
        return NULL;
    }
    func_001CAC50(&sp40, &D_0036005C[temp_s1->unk_00]);
    func_001CAD10(arg2, &sp40);
    return arg2;
}
