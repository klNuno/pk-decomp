#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
} unk_func_002A8D10_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A8D10_1;

f32 int2dB__Fi(s64);
void func_0029D8F0();
extern u8 D_007B8488[];
extern unk_func_002A8D10_1 D_007B8490;

void func_002A8D10(unk_func_002A8D10_0 *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;

    temp_f22 = int2dB__Fi(arg0->unk_18);
    temp_f21 = int2dB__Fi(arg0->unk_10);
    temp_f20 = int2dB__Fi(arg0->unk_08);
    D_007B8490.unk_00 = int2dB__Fi(arg0->unk_00);
    D_007B8490.unk_04 = temp_f20;
    D_007B8490.unk_08 = temp_f21;
    D_007B8490.unk_0C = temp_f22;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
