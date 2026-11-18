/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FBD40_0 {
    u8 pad_00[0x74];
    u8 unk_74;
    u8 pad_75[0x107];
    u8 unk_17C;
} unk_func_001FBD40_0;

typedef struct unk_func_001FBD40_1 {
    u8 pad_00[0x10];
    unk_func_001FBD40_0 *unk_10;
} unk_func_001FBD40_1;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001FBD40_1 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
s16 func_00127318(f32);
extern f32 D_005AD8A0[];
extern s16 D_005AD8E0[];
extern f32 D_005AD8EC[];
extern f32 D_005AD910[];
extern s16 D_005AD91C[];

s32 *func_001FBD40(s32 arg0, s32 *arg1) {
    s32 a;
    unk_func_001FBD40_0 *obj;
    s32 flag;
    s32 temp;
    union {
        s32 i;
        f32 f;
        u8 pad[0x18];
    } sp50;
    s32 sp68;
    f32 val;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp68);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    a = sp50.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    val = sp50.f;
    if (a == 0x27) {
        obj = HIE_fn_hGetSuperObjectObject(sp68)->unk_10;
        if (func_00127318(val) & 2) {
            obj->unk_74 &= 0xFE;
            D_005AD91C[0] &= ~func_00127318(val);
            return arg1;
        }
        D_005AD91C[0] |= func_00127318(val);
        return arg1;
    }
    if (a < 0x11) {
        D_005AD8A0[a - 1] = val;
        return arg1;
    }
    if (a < 0x17) {
        D_005AD8E0[a - 0x11] = func_00127318(val);
        return arg1;
    }
    if (a < 0x1E) {
        return arg1;
    }
    if (a < 0x27) {
        D_005AD8EC[a - 0x1E] = val;
        return arg1;
    }
    if (a == 0x28) {
        D_005AD91C[0] &= ~func_00127318(val);
        return arg1;
    }
    if (a < 0x2C) {
        D_005AD910[a - 0x29] = val;
        return arg1;
    }
    if (a == 0x2C) {
        obj = HIE_fn_hGetSuperObjectObject(sp68)->unk_10;
        if (val) {
            flag = 1;
        } else {
            flag = 0;
        }
        obj->unk_17C = flag;
        return arg1;
    }
    return arg1;
}
