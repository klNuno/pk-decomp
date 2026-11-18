#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_002A76B0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A76B0_1;

f32 int2dB__Fi(s64);
void func_0029D9A0(s32, s32, void *);
extern unk_func_002A76B0_1 D_007B8490[];
extern u8 D_007B8488[];
extern unk_func_002A76B0_1 D_007B2370[];

void func_002A76B0(s32 arg0, unk_func_002A76B0_0 *arg1) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg1->unk_10);
    temp_f20 = int2dB__Fi(arg1->unk_08);
    D_007B8490[arg0].unk_00 = int2dB__Fi(arg1->unk_00);
    D_007B8490[arg0].unk_04 = temp_f20;
    D_007B8490[arg0].unk_08 = temp_f21;
    D_007B8490[arg0].unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, (u8 *)&D_007B2370[arg0] + 0x6120);
    }
}
