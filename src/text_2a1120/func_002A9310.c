#include "common.h"

typedef struct unk_func_002A9310_0 {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_002A9310_0;

typedef struct unk_func_002A9310_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A9310_1;

f32 int2dB__Fi(s64);
void func_0029D8F0(s32, unk_func_002A9310_1 *);
extern u8 D_007B8488[];
extern unk_func_002A9310_1 D_007B8490;

void func_002A9310(unk_func_002A9310_0 *arg0) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg0->unk_10);
    temp_f20 = int2dB__Fi(arg0->unk_08);
    D_007B8490.unk_00 = int2dB__Fi(arg0->unk_00);
    D_007B8490.unk_04 = temp_f20;
    D_007B8490.unk_08 = temp_f21;
    D_007B8490.unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
