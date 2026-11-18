#include "common.h"

typedef struct unk_func_002A6F00_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A6F00_0;

f32 int2dB__Fi(s64);
void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A6F00_0 D_007B8490[];

void func_002A6F00(s32 arg0, s64 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    w = int2dB__Fi(arg1[3]);
    z = int2dB__Fi(arg1[2]);
    y = int2dB__Fi(arg1[1]);
    x = int2dB__Fi(arg1[0]);
    D_007B8490[arg0].unk_00 = x;
    D_007B8490[arg0].unk_04 = y;
    D_007B8490[arg0].unk_08 = z;
    D_007B8490[arg0].unk_0C = w;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120);
    }
}
