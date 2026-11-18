/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D0F20_0;

typedef struct {
    unk_func_001D0F20_0 unk_00;
    u8 pad_0C[0x4];
    s32 unk_10;
} unk_func_001D0F20_1;

typedef struct {
    u8 pad_00[0x60];
} unk_func_001D0F20_2;

s32 func_001979C0(s32);
void func_00154B00(unk_func_001D0F20_2 *, s32);
void func_001559E0(unk_func_001D0F20_0 *, unk_func_001D0F20_2 *, unk_func_001D0F20_0 *);

void func_001D0F20(unk_func_001D0F20_1 *arg0, unk_func_001D0F20_0 *arg1) {
    s32 temp;
    unk_func_001D0F20_2 m;
    unk_func_001D0F20_0 v;

    if (arg0->unk_10 != 0) {
        temp = func_001979C0(arg0->unk_10);
        func_00154B00(&m, temp);
        func_001559E0(&v, &m, arg1);
        arg0->unk_00 = v;
    } else {
        arg0->unk_00 = *arg1;
    }
}
