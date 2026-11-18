#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
} unk_func_0028E000_0;

f32 int2dB__Fi(s64);
extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
extern f32 D_007B846C[];

void func_0028E000(unk_func_0028E000_0 *arg0) {
    f32 c;
    f32 b;
    f32 a;

    a = int2dB__Fi(arg0->unk_18);
    b = int2dB__Fi(arg0->unk_10);
    c = int2dB__Fi(arg0->unk_08);
    D_007B8460[0] = int2dB__Fi(arg0->unk_00);
    D_007B8464[0] = c;
    D_007B8468[0] = b;
    D_007B846C[0] = a;
}
