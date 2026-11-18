/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00133B30_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00133B30_0;

typedef struct unk_func_00133B30_2 {
    s32 unk_00;
    s16 unk_04;
    u8 pad_06[2];
    unk_func_00133B30_0 unk_08;
    f32 unk_14;
} unk_func_00133B30_2;

s32 func_001E5240(unk_func_00133B30_0 *, unk_func_00133B30_0 *, unk_func_00133B30_0 *, s32, s32, s16 *, unk_func_00133B30_0 *);
void func_001559E0(unk_func_00133B30_0 *, s32, unk_func_00133B30_0 *);
f32 func_001E60E0(f32);
extern s32 D_0035F820;

s32 func_00133B30(unk_func_00133B30_0 *arg0, unk_func_00133B30_0 *arg1, s32 arg2, unk_func_00133B30_2 *arg3) {
    unk_func_00133B30_0 sp50;
    unk_func_00133B30_0 sp60;
    s16 count;
    s16 i;
    unk_func_00133B30_2 *p;
    s32 ret;
    f32 dz;
    f32 dx;
    f32 dy;

    ret = 0;
    sp50.unk_00 = arg0->unk_00 + arg1->unk_00;
    sp50.unk_04 = arg0->unk_04 + arg1->unk_04;
    sp50.unk_08 = arg0->unk_08 + arg1->unk_08;
    if ((u8)func_001E5240(arg0, &sp50, arg1, arg2, 3, &count, &arg3->unk_08)) {
        func_001559E0(&sp60, D_0035F820, arg0);
        for (i = 0; i < count; i++) {
            p = &arg3[i];
            func_001559E0(&p->unk_08, D_0035F820, &p->unk_08);
            dy = sp60.unk_04 - p->unk_08.unk_04;
            dx = sp60.unk_00 - p->unk_08.unk_00;
            dz = sp60.unk_08 - p->unk_08.unk_08;
            p->unk_14 = func_001E60E0(dx * dx + dy * dy + dz * dz);
        }
        arg3->unk_04 = count;
        arg3->unk_00 = 0;
        ret = 1;
    }
    return ret;
}
