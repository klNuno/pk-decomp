/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AAC70_0 {
    s32 *unk_00;
    u8 pad_04[0x6C];
} unk_func_001AAC70_0;

typedef struct unk_func_001AAC70_1 {
    u8 pad_00[0x3C8];
    unk_func_001AAC70_0 unk_3C8[4];
    u8 pad_588[0x30];
    s32 unk_5B8[4];
} unk_func_001AAC70_1;

void func_0016EDC0(s32 *, s32);
void func_0016DF10(s32, f32, f32);
void func_0016DFE0(s32, f32, f32);
void func_001AAD30(s32);
extern unk_func_001AAC70_1 D_005AB790;

void func_001AAC70(u8 arg0) {
    s32 sp1C;

    func_0016EDC0(&sp1C, 0x67);
    D_005AB790.unk_5B8[arg0] = sp1C;
    func_0016DF10(sp1C, 1.5f, 0.75f);
    func_0016DFE0(sp1C, 0.1f, 1000.0f);
    func_001AAD30(sp1C);
    *D_005AB790.unk_3C8[arg0].unk_00 = sp1C;
}
