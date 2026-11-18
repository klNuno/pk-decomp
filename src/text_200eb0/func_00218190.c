/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00218190_0 {
    s32 unk_00;
    u8 pad_04[0x10];
    s32 unk_14;
} unk_func_00218190_0;

typedef struct unk_func_00218190_1 {
    u8 unk_00;
    u8 pad_01[0xB];
    s32 unk_0C;
} unk_func_00218190_1;

unk_func_00218190_0 *HIE_fn_hGetSuperObjectObject();
void fn_vGetUltraOperatorPerso();
u8 func_001B7100(s32);
void func_001EDBB0(s32, s32);
s32 func_00208CC0();
u8 func_002182F0(s32);
u8 func_00218340(s32);

s32 *func_00218190(s32 arg0, s32 *arg1, unk_func_00218190_1 *arg2) {
    s32 sp3C;
    s32 temp;
    u8 r;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp3C);
    switch (temp) {
    case 0x140:
        r = func_00218340(HIE_fn_hGetSuperObjectObject(sp3C)->unk_00);
        arg2->unk_00 = r;
        arg2->unk_0C = 3;
        break;
    case 0x13F:
        r = func_001B7100(HIE_fn_hGetSuperObjectObject(sp3C)->unk_14);
        arg2->unk_00 = r;
        arg2->unk_0C = 3;
        break;
    case 0x141:
        r = func_002182F0(HIE_fn_hGetSuperObjectObject(sp3C)->unk_00);
        arg2->unk_00 = r;
        arg2->unk_0C = 3;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
