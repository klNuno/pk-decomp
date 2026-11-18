#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADDE0_0;

typedef struct {
    s64 unk_00;
    s64 unk_08;
} unk_func_002ADDE0_1;

f32 int2dB__Fi(s64);
void func_002AD610(unk_func_002ADDE0_0 *);

void func_002ADDE0(unk_func_002ADDE0_1 *arg0) {
    unk_func_002ADDE0_0 temp;

    temp.unk_00 = int2dB__Fi(arg0->unk_00);
    temp.unk_04 = int2dB__Fi(arg0->unk_08);
    temp.unk_08 = 0.0f;
    temp.unk_0C = 1.0f;
    func_002AD610(&temp);
}
