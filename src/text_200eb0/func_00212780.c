/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00212780_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00212780_0;

typedef struct unk_func_00212780_1 {
    u8 unk_00;
    u8 pad_01[0xB];
    s32 unk_0C;
} unk_func_00212780_1;

unk_func_00212780_0 *HIE_fn_hGetSuperObjectObject(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
s32 func_00208CC0(s32);
u8 func_00212870(s32);

s32 *func_00212780(s32 arg0, s32 *arg1, unk_func_00212780_1 *arg2) {
    s32 op = arg1[-2];
    u8 res = 0;
    s32 so;
    unk_func_00212780_0 *obj;

    fn_vGetUltraOperatorPerso(func_00208CC0(op), arg0, &so);
    obj = func_001971C0(so) != 2 ? NULL : HIE_fn_hGetSuperObjectObject(so);
    switch (op) {
    case 0xD1:
        res = func_00212870(obj->unk_04);
        break;
    }
    arg2->unk_00 = res;
    arg2->unk_0C = 3;
    return arg1;
}
