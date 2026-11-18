#include "common.h"

typedef struct unk_func_002A18A0_0 {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_002A18A0_0;

extern unk_func_002A18A0_0 D_007B84D0;
extern u8 D_007B8488[];
f32 int2dB__Fi();
void func_0029D8F0();

void func_002A18A0(s64 arg0, s64 arg1) {
    D_007B84D0.unk_00 = int2dB__Fi(arg0);
    D_007B84D0.unk_04 = int2dB__Fi(arg1);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, &D_007B84D0);
    }
}
