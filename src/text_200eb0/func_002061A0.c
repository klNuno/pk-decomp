/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002061A0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002061A0_0;

typedef struct unk_func_002061A0_1 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002061A0_1;

typedef struct unk_func_002061A0_2 {
    unk_func_002061A0_1 *unk_00;
    u8 pad_04[8];
} unk_func_002061A0_2;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002061A0_2 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_001F1370(s32, unk_func_002061A0_0 *);
s32 func_00205FA0(s32, unk_func_002061A0_0 *, s32, unk_func_002061A0_0 *);
s32 func_00208B20(s32);

s32 *func_002061A0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 type;
    s32 perso;
    s32 obj;
    unk_func_002061A0_2 sp40;
    unk_func_002061A0_0 sp50;
    unk_func_002061A0_0 sp60;
    s32 sp6C;

    type = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(type), arg0, &sp6C);
    switch (type) {
    case 0x3A:
        perso = sp6C;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        obj = fn_h_StandardGameGetSuperObject(sp40.unk_00->unk_04);
        func_001F1370(perso, &sp50);
        func_001F1370(obj, &sp60);
        *arg2 = !func_00205FA0(perso, &sp50, obj, &sp60);
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
