#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
} unk_func_0028E580_0;

f32 int2dB__Fi(s64);
extern f32 D_007B8460[];
extern f32 D_007B8464[];

void func_0028E580(unk_func_0028E580_0 *arg0) {
    f32 temp;

    temp = int2dB__Fi(arg0->unk_08);
    D_007B8460[0] = int2dB__Fi(arg0->unk_00);
    D_007B8464[0] = temp;
}
