/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FDD00_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001FDD00_0;

typedef struct unk_func_001FDD00_1 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x2C];
    s32 unk_34[3];
} unk_func_001FDD00_1;

typedef struct unk_func_001FDD00_2 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001FDD00_2;

unk_func_001FDD00_2 *HIE_fn_hGetSuperObjectObject();
unk_func_001FDD00_1 *func_00138760();
s32 func_001B84B0();

s32 func_001FDD00(s32 arg0, unk_func_001FDD00_0 *arg1) {
    unk_func_001FDD00_1 *c;
    s32 a;
    s32 b;

    a = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (a == 0) {
        return 0;
    }
    b = func_001B84B0(a);
    if (b == 0) {
        return 0;
    }
    c = func_00138760(b);
    if (c == NULL) {
        return 0;
    }
    if (!(c->unk_04 & 1)) {
        return 0;
    }
    arg1->unk_00 = ((s32 *)&c->unk_34)[0];
    arg1->unk_04 = ((s32 *)&c->unk_34)[1];
    arg1->unk_08 = ((s32 *)&c->unk_34)[2];
    return 1;
}
