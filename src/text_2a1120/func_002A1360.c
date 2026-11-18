#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_002A1360_0;

f32 int2dB__Fi();
void func_0029D8F0();
extern f32 D_007B84D0[];
extern u8 D_007B8488[];

void func_002A1360(unk_func_002A1360_0 *arg0) {
    f32 temp1;
    f32 temp2;

    temp2 = int2dB__Fi(arg0->unk_10);
    temp1 = int2dB__Fi(arg0->unk_08);
    D_007B84D0[0] = int2dB__Fi(arg0->unk_00);
    D_007B84D0[1] = temp1;
    D_007B84D0[2] = temp2;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
