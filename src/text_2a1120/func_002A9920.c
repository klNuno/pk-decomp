#include "common.h"

typedef struct unk_func_002A9920_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A9920_0;

f32 int2dB__Fi(s64);
void func_0029D8F0(s32, unk_func_002A9920_0 *);
extern u8 D_007B8488[];
extern unk_func_002A9920_0 D_007B8490;

void func_002A9920(s64 arg0, s64 arg1, s64 arg2, s64 arg3) {
    D_007B8490.unk_00 = int2dB__Fi(arg0);
    D_007B8490.unk_04 = int2dB__Fi(arg1);
    D_007B8490.unk_08 = int2dB__Fi(arg2);
    D_007B8490.unk_0C = int2dB__Fi(arg3);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
