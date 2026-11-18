/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0020D6A0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0020D6A0_0;

typedef struct unk_func_0020D6A0_1 {
    u8 pad_00[0xC];
    s16 *unk_0C;
} unk_func_0020D6A0_1;

void func_001DCF20();
void func_001DB9F0();
void func_001DD290(void *, void *, s16);

u8 func_0020D6A0(unk_func_0020D6A0_1 *arg0, unk_func_0020D6A0_0 *arg1) {
    u8 ret;
    unk_func_0020D6A0_0 a;
    unk_func_0020D6A0_0 b;
    s32 sp48;
    s16 i;
    s16 j;

    switch ((s16)*arg0->unk_0C) {
    case 7:
        func_001DCF20(arg1, &sp48, arg0);
        ret = 1;
        break;
    case 8:
        func_001DB9F0(arg0, 0, 0, &i, &j);
        func_001DD290(arg0, &a, i);
        func_001DD290(arg0, &b, j);
        arg1->unk_00 = a.unk_00 + b.unk_00;
        arg1->unk_04 = a.unk_04 + b.unk_04;
        arg1->unk_08 = a.unk_08 + b.unk_08;
        arg1->unk_00 = 0.5f * arg1->unk_00;
        arg1->unk_04 = 0.5f * arg1->unk_04;
        arg1->unk_08 = 0.5f * arg1->unk_08;
        ret = 1;
        break;
    default:
        ret = 0;
        break;
    }
    return ret;
}
