/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00209520_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00209520_0;

typedef struct unk_func_00209520_1 {
    u8 pad_00[0x3C];
    unk_func_00209520_0 unk_3C;
} unk_func_00209520_1;

typedef struct unk_func_00209520_2 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00209520_2;

typedef struct unk_func_00209520_3 {
    f32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00209520_3;

unk_func_00209520_2 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00209520_1 *func_001B84B0(s32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);

s32 func_00209520(s32 arg0, unk_func_00209520_3 *arg1) {
    s32 h;
    unk_func_00209520_1 *o;
    unk_func_00209520_0 *v;

    h = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    arg1->unk_0C = 8;
    if (h != 0) {
        o = func_001B84B0(h);
        if (o != 0) {
            v = &o->unk_3C;
            arg1->unk_00 = func_001E60E0(func_00151360(v->unk_00) + func_00151360(v->unk_04) + func_00151360(v->unk_08));
            return 1;
        }
    }
    arg1->unk_00 = 0.0f;
    return 1;
}
