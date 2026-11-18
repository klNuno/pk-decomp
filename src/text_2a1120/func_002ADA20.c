#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADA20_0;

void func_002AD610(unk_func_002ADA20_0 *);

void func_002ADA20(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002ADA20_0 temp;

    temp.unk_00 = arg0;
    temp.unk_04 = arg1;
    temp.unk_08 = arg2;
    temp.unk_0C = 1.0f;
    func_002AD610(&temp);
}
