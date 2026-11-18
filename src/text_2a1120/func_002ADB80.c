#include "common.h"

typedef struct unk_func_002ADB80_0 {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_002ADB80_0;

typedef struct unk_func_002ADB80_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADB80_1;

f32 int2dB__Fi();
void func_002AD610(unk_func_002ADB80_1 *);

void func_002ADB80(unk_func_002ADB80_0 *arg0) {
    unk_func_002ADB80_1 temp;

    temp.unk_00 = int2dB__Fi(arg0->unk_00);
    temp.unk_04 = int2dB__Fi(arg0->unk_08);
    temp.unk_08 = int2dB__Fi(arg0->unk_10);
    temp.unk_0C = 1.0f;
    func_002AD610(&temp);
}
