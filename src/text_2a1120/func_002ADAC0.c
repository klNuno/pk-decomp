#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADAC0_0;

void func_002AD610(unk_func_002ADAC0_0 *);

void func_002ADAC0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002ADAC0_0 v;

    v.unk_00 = arg0;
    v.unk_04 = arg1;
    v.unk_08 = arg2;
    v.unk_0C = 1.0f;
    func_002AD610(&v);
}
