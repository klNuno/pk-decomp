#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADA70_0;

void func_002AD610(unk_func_002ADA70_0 *);

void func_002ADA70(s32 *arg0) {
    unk_func_002ADA70_0 v;

    v.unk_00 = arg0[0];
    v.unk_04 = arg0[1];
    v.unk_08 = arg0[2];
    v.unk_0C = 1.0f;
    func_002AD610(&v);
}
