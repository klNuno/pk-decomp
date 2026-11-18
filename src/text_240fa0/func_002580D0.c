/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002580D0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002580D0_0;

typedef struct unk_func_002580D0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002580D0_1;

f32 func_00115110(f32);
f32 func_00114D70(f32);
void func_00157260(f32 (*)[4], f32, f32, f32, f32);
void func_0021D140(unk_func_002580D0_0 *, f32 (*)[4], unk_func_002580D0_0 *);

void func_002580D0(unk_func_002580D0_0 *arg0, f32 arg1, unk_func_002580D0_0 *arg2) {
    f32 sp10[4][4];
    unk_func_002580D0_0 sp50;

    ((unk_func_002580D0_1 *)&sp50)->unk_00 = ((unk_func_002580D0_1 *)arg2)->unk_00;
    ((unk_func_002580D0_1 *)&sp50)->unk_04 = ((unk_func_002580D0_1 *)arg2)->unk_04;
    ((unk_func_002580D0_1 *)&sp50)->unk_08 = ((unk_func_002580D0_1 *)arg2)->unk_08;
    if (0.0f != arg1) {
        arg1 = -0.5f * arg1;
        sp50.unk_00 = sp50.unk_00 * func_00115110(arg1);
        sp50.unk_04 = sp50.unk_04 * func_00115110(arg1);
        sp50.unk_08 = sp50.unk_08 * func_00115110(arg1);
        func_00157260(sp10, sp50.unk_00, sp50.unk_04, sp50.unk_08, func_00114D70(arg1));
        func_0021D140(&sp50, sp10, arg0);
        ((unk_func_002580D0_1 *)arg0)->unk_00 = ((unk_func_002580D0_1 *)&sp50)->unk_00;
        ((unk_func_002580D0_1 *)arg0)->unk_04 = ((unk_func_002580D0_1 *)&sp50)->unk_04;
        ((unk_func_002580D0_1 *)arg0)->unk_08 = ((unk_func_002580D0_1 *)&sp50)->unk_08;
    }
}
