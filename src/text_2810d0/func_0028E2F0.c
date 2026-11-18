#include "common.h"

typedef struct unk_func_0028E2F0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0028E2F0_0;

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];

void func_0028E2F0(unk_func_0028E2F0_0 *arg0) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp2 = arg0->unk_08;
    temp1 = arg0->unk_04;
    temp0 = arg0->unk_00;

    D_007B8460[0] = temp0;
    D_007B8464[0] = temp1;
    D_007B8468[0] = temp2;
}
