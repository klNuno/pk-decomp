#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} unk_func_002A16D0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[0x8];
} unk_func_002A16D0_1;

void func_0029D8F0();
extern u8 D_007B8488[];
extern unk_func_002A16D0_1 D_007B84D0;

void func_002A16D0(unk_func_002A16D0_0 *arg0) {
    f32 a;
    f32 b;

    b = arg0->unk_04;
    a = arg0->unk_00;
    D_007B84D0.unk_00 = a;
    D_007B84D0.unk_04 = b;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, &D_007B84D0);
    }
}
