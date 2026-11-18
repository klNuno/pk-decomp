#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} unk_func_002ADD70_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADD70_1;

void func_002AD610();

void func_002ADD70(unk_func_002ADD70_0 *arg0) {
    unk_func_002ADD70_1 temp;

    temp.unk_00 = arg0->unk_00;
    temp.unk_04 = arg0->unk_04;
    temp.unk_08 = 0.0f;
    temp.unk_0C = 1.0f;
    func_002AD610(&temp);
}
