#include "common.h"

typedef struct unk_func_00296C70_0 {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_00296C70_0;

typedef struct unk_func_00296C70_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00296C70_1;

f32 int2dB__Fi();
extern unk_func_00296C70_1 D_007B8420;

void func_00296C70(unk_func_00296C70_0 *arg0) {
    f32 temp2;
    f32 temp;

    temp = int2dB__Fi(arg0->unk_10);
    temp2 = int2dB__Fi(arg0->unk_08);
    D_007B8420.unk_00 = int2dB__Fi(arg0->unk_00);
    D_007B8420.unk_04 = temp2;
    D_007B8420.unk_08 = temp;
    D_007B8420.unk_0C = 1.0f;
}
