/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00214790_0;

void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_0014FEA0(s32, unk_func_00214790_0 *);
s32 func_001979C0(s32);
s32 func_00208CC0(s32);

s32 *func_00214790(s32 arg0, s32 *arg1, unk_func_00214790_0 *arg2) {
    s32 temp;
    unk_func_00214790_0 *p;
    s32 sp3C;

    temp = arg1[-2];
    p = arg2;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp3C);
    func_0014FEA0(func_001979C0(sp3C), p);
    p->unk_00 = -p->unk_00;
    p->unk_04 = -p->unk_04;
    p->unk_08 = -p->unk_08;
    arg2->unk_0C = 0x15;
    return arg1;
}
