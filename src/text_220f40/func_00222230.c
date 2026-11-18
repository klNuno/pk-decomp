/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00222230_0;

void func_002221A0(u8, unk_func_00222230_0 *, f32);

void func_00222230(u8 arg0, unk_func_00222230_0 *arg1, f32 arg2) {
    unk_func_00222230_0 *p;

    p = arg1;
    p->unk_08 = p->unk_04 = p->unk_00 = 0.0f;
    func_002221A0(arg0, p, arg2);
    arg1->unk_0C = 0x15;
}
