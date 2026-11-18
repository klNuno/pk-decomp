/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00202730_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00202730_0;

typedef struct unk_func_00202730_1 {
    u8 pad_00[0x1C];
    unk_func_00202730_0 unk_1C;
    u8 pad_28[0x38];
    s32 unk_60;
} unk_func_00202730_1;

typedef struct unk_func_00202730_2 {
    u8 pad_00[0x8];
    unk_func_00202730_1 *unk_08;
    u8 pad_0C[0x10];
    s32 unk_1C;
    unk_func_00202730_0 unk_20;
    u8 pad_2C[0x74];
    u8 unk_A0[0x18];
    u8 unk_B8[0x4];
} unk_func_00202730_2;

void func_001FD890(s32, unk_func_00202730_0 *);
void func_001FD930();
void func_002034B0(unk_func_00202730_2 *, unk_func_00202730_0 *);

void func_00202730(unk_func_00202730_2 *arg0) {
    if (arg0->unk_08->unk_60 == 2) {
        func_001FD890(arg0->unk_1C, &arg0->unk_08->unk_1C);
        func_001FD930(arg0->unk_1C, arg0->unk_A0, arg0->unk_B8);
        ((s32 *)((u8 *)arg0 + 0x20))[0] = ((s32 *)((u8 *)arg0->unk_08 + 0x1C))[0];
        ((s32 *)((u8 *)arg0 + 0x20))[1] = ((s32 *)((u8 *)arg0->unk_08 + 0x1C))[1];
        ((s32 *)((u8 *)arg0 + 0x20))[2] = ((s32 *)((u8 *)arg0->unk_08 + 0x1C))[2];
        func_002034B0(arg0, &arg0->unk_08->unk_1C);
    }
}
