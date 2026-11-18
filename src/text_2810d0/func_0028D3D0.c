#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028D3D0_0;

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
} unk_func_0028D3D0_1;

f32 int2dB__Fi(s64);
extern unk_func_0028D3D0_0 D_007B8460[];
extern unk_func_0028D3D0_0 D_007B8464[];
extern unk_func_0028D3D0_0 D_007B8468[];
extern unk_func_0028D3D0_0 D_007B846C[];

void func_0028D3D0(s32 arg0, unk_func_0028D3D0_1 *arg1) {
    f32 b;
    f32 c;
    f32 d;

    d = int2dB__Fi(arg1->unk_18);
    c = int2dB__Fi(arg1->unk_10);
    b = int2dB__Fi(arg1->unk_08);
    D_007B8460[arg0].unk_00 = int2dB__Fi(arg1->unk_00);
    D_007B8464[arg0].unk_00 = b;
    D_007B8468[arg0].unk_00 = c;
    D_007B846C[arg0].unk_00 = d;
}
