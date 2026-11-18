/* profile: o0_301 */
#include "common.h"

typedef union unk_func_0020BB90_0 {
    s32 unk_00;
    u8 pad_00[0x18];
} unk_func_0020BB90_0;

typedef struct unk_func_0020BB90_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0020BB90_1;

typedef struct unk_func_0020BB90_2 {
    u8 pad_00[8];
    unk_func_0020BB90_1 *unk_08;
    s16 *unk_0C;
} unk_func_0020BB90_2;

typedef struct unk_func_0020BB90_3 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_0020BB90_3;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0020BB90_0 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_0020BB90_2 *func_001B0B00(s32, u16, s32);
void func_001DB9F0(unk_func_0020BB90_2 *, s32, s32, s16 *, s16 *);
void func_001DD290(unk_func_0020BB90_2 *, unk_func_0020BB90_1 *, s16);
void func_001EDBB0(s32, s32);
s32 func_00208CC0(s32);

s32 *func_0020BB90(s32 arg0, s32 *arg1, unk_func_0020BB90_3 *arg2) {
    unk_func_0020BB90_2 *obj;
    s32 val;
    s32 type;
    unk_func_0020BB90_0 sp40;
    unk_func_0020BB90_1 sp58;
    s32 sp68;
    s16 sp6C;
    s16 sp6E;

    type = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(type), arg0, &sp68);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    val = sp40.unk_00;
    switch (type) {
    case 0xE4:
        obj = func_001B0B00(1, val - 1, sp68);
        break;
    case 0xE5:
        obj = func_001B0B00(2, val - 1, sp68);
        break;
    case 0xE6:
        obj = func_001B0B00(0, val - 1, sp68);
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    if (obj != 0) {
        switch (*obj->unk_0C) {
        case 7:
            ((s32 *)arg2)[0] = ((s32 *)obj->unk_08)[0];
            ((s32 *)arg2)[1] = ((s32 *)obj->unk_08)[1];
            ((s32 *)arg2)[2] = ((s32 *)obj->unk_08)[2];
            arg2->unk_0C = 0x15;
            return arg1;
        case 8:
            func_001DB9F0(obj, 0, 0, &sp6E, &sp6C);
            func_001DD290(obj, &sp58, sp6E);
            ((s32 *)arg2)[0] = ((s32 *)&sp58)[0];
            ((s32 *)arg2)[1] = ((s32 *)&sp58)[1];
            ((s32 *)arg2)[2] = ((s32 *)&sp58)[2];
            arg2->unk_0C = 0x15;
            return arg1;
        }
    }
    return arg1;
}
