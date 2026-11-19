/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_Q_0;

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
    s32 unk_10;
} unk_Q_1;

unk_Q_1 *HIE_fn_hGetSuperObjectObject();
u16 func_00165650();
void func_00165610();
s32 func_00129C50();
s32 func_00127318(f32);
void func_00169240();

void func_001A0230(s32 arg0) {
    s32 *p;
    s16 i;
    s32 *q;
    unk_Q_1 *obj;
    s16 j;
    unk_Q_0 v;

    obj = HIE_fn_hGetSuperObjectObject(arg0);
    p = obj->unk_0C;
    j = i = 0;
    for (; i < obj->unk_10; i++, q = ++p, (void)q) {
        if (func_00165650(*p) == 6) {
            func_00165610(*p, &v);
            v.unk_00 = v.unk_00;
            v.unk_04 = v.unk_04;
            v.unk_08 = v.unk_08;
            func_00169240(func_00129C50(0), (u8)(u8)func_00127318(255.0f * v.unk_00) | ((u16)(u8)(u8)func_00127318(255.0f * v.unk_04) << 8) | ((u8)(u8)func_00127318(255.0f * v.unk_08) << 16));
            return;
        }
    }
}
