/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001CD790_0 {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
} unk_func_001CD790_0;

typedef struct unk_func_001CD790_1 {
    u8 pad_00[0x34];
    u16 unk_34;
} unk_func_001CD790_1;

typedef struct unk_func_001CD790_2 {
    u8 pad_00[0x4];
    u16 unk_04;
    u16 unk_06;
    u8 pad_08[0x6];
} unk_func_001CD790_2;

unk_func_001CD790_1 *func_001CAAA0(s32, s32);
extern unk_func_001CD790_2 *D_00360050;
extern s32 *D_00360058;

s32 *func_001CD790(unk_func_001CD790_0 *arg0, u16 arg1, s32 *arg2) {
    s32 a;
    unk_func_001CD790_1 *b;
    unk_func_001CD790_2 *c;

    if (arg1 >= arg0->unk_50) {
        arg1 = (s16)arg0->unk_50 - 1;
    }
    a = arg0->unk_5C;
    b = func_001CAAA0(a, arg1);
    c = &D_00360050[b->unk_34 + arg1];
    *arg2 = c->unk_04;
    if (c->unk_04) {
        return &D_00360058[c->unk_06];
    }
    return 0;
}
