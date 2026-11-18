#include "common.h"

typedef struct unk_func_002A3A40_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_002A3A40_0;

extern unk_func_002A3A40_0 D_007B84C0;
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A3A40(f32 arg0, f32 arg1, f32 arg2) {
    D_007B84C0.unk_00 = arg0;
    D_007B84C0.unk_04 = arg1;
    D_007B84C0.unk_08 = arg2;
    D_007B84C0.unk_0C = 0;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, &D_007B84C0);
    }
}
