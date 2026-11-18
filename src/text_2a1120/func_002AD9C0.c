#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002AD9C0_0;

void func_002AD610(unk_func_002AD9C0_0 *);

void func_002AD9C0(s16 *arg0) {
    unk_func_002AD9C0_0 temp;

    temp.unk_00 = arg0[0];
    temp.unk_04 = arg0[1];
    temp.unk_08 = arg0[2];
    temp.unk_0C = 1.0f;
    func_002AD610(&temp);
}
