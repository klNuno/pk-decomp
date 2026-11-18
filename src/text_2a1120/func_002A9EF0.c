#include "common.h"

typedef struct unk_func_002A9EF0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A9EF0_0;

extern unk_func_002A9EF0_0 D_007B8490;
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A9EF0(f32 arg0, f32 arg1, f32 arg2) {
    D_007B8490.unk_00 = arg0;
    D_007B8490.unk_04 = arg1;
    D_007B8490.unk_08 = arg2;
    D_007B8490.unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
