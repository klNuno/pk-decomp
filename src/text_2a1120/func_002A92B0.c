#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A92B0_0;

void func_0029D8F0(s32, unk_func_002A92B0_0 *);
extern u8 D_007B8488[];
extern unk_func_002A92B0_0 D_007B8490;

void func_002A92B0(f32 *arg0) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp0 = arg0[0];
    temp2 = arg0[2];
    temp1 = arg0[1];
    D_007B8490.unk_00 = temp0;
    D_007B8490.unk_04 = temp1;
    D_007B8490.unk_08 = temp2;
    D_007B8490.unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
