/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00205350_0 {
    u8 pad_00[0x4];
    u32 unk_04;
    u8 pad_08[0x44];
    s32 unk_4C;
    u8 pad_50[0x24];
    s32 unk_74;
    u8 pad_78[0x74];
    s32 unk_EC;
} unk_func_00205350_0;

s32 func_00208B20();
void fn_vGetUltraOperatorPerso();
unk_func_00205350_0 *func_001F19D0();
s32 *fn_p_stEvalTree();
u8 func_00203AA0();

s32 *func_00205350(s32 arg0, s32 *arg1, s32 *arg2) {
    unk_func_00205350_0 *obj;
    u32 flags;
    s32 val;
    s32 temp;
    u16 sp50[0xE];
    s32 sp6C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp), arg0, &sp6C);
    if ((obj = func_001F19D0(sp6C)) == 0) {
        *arg2 = 0;
        return arg1;
    }
    flags = obj->unk_04;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    val = sp50[0];
    switch (temp) {
    case 0x22:
        if ((flags & 1) == 1) {
            *arg2 = func_00203AA0(obj->unk_4C, val);
        } else {
            *arg2 = 0;
        }
        return arg1;
    case 0x23:
        if ((flags & 4) == 4) {
            *arg2 = func_00203AA0(obj->unk_74, val);
        } else {
            *arg2 = 0;
        }
        return arg1;
    case 0x24:
        if (flags != 0) {
            if ((flags & 1) == 1) {
                *arg2 = !func_00203AA0(obj->unk_4C, val);
            } else if ((flags & 4) == 4) {
                *arg2 = !func_00203AA0(obj->unk_74, val);
            } else if ((flags & 0x10) == 0x10) {
                *arg2 = !func_00203AA0(obj->unk_EC, val);
            } else {
                *arg2 = 1;
            }
        } else {
            *arg2 = 1;
        }
        return arg1;
    case 0x25:
        if ((flags & 0x10) == 0x10) {
            *arg2 = func_00203AA0(obj->unk_EC, val);
        } else {
            *arg2 = 0;
        }
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
