/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00246920_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00246920_0;

typedef struct unk_func_00246920_1 {
    u8 pad_00[0x1D];
    u8 unk_1D;
    u8 pad_1E[0x16];
    unk_func_00246920_0 unk_34;
    u8 pad_40[0x28];
    unk_func_00246920_0 unk_68;
} unk_func_00246920_1;

void func_00246690();
void func_0025CD20(s32, f32 *, f32 *, s32, f32);
void func_00246630();
extern f32 D_006053D0[];
extern f32 D_006053D4[];
extern f32 D_006053D8[];
extern s32 D_00617310[];

void func_00246920(unk_func_00246920_1 *arg0) {
    unk_func_00246920_0 sp10;

    sp10.unk_00 = arg0->unk_68.unk_00 - arg0->unk_34.unk_00;
    sp10.unk_04 = arg0->unk_68.unk_04 - arg0->unk_34.unk_04;
    sp10.unk_08 = arg0->unk_68.unk_08 - arg0->unk_34.unk_08;
    func_00246690(arg0, &arg0->unk_34, &sp10, 0);
    if (0.0f != D_006053D0[0] || 0.0f != D_006053D4[0] || 0.0f != D_006053D8[0]) {
        func_0025CD20(0x2D, D_006053D0, D_006053D0, (u32)D_00617310[arg0->unk_1D], 4.0f);
        func_00246630(arg0, 3, 1);
    }
}
