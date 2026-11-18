/* profile: o0 */
#include "common.h"

typedef struct unk_func_001F49F0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F49F0_0;

typedef struct unk_func_001F49F0_1 {
    u8 pad_00[0x58];
    f32 unk_58;
} unk_func_001F49F0_1;

typedef struct unk_func_001F49F0_2 {
    u8 pad_00[0x68];
    s32 unk_68;
    s32 unk_6C;
    u8 pad_70[0x2];
    u16 unk_72;
} unk_func_001F49F0_2;

typedef struct unk_func_001F49F0_3 {
    u8 pad_00[0x8];
    unk_func_001F49F0_1 *unk_08;
    unk_func_001F49F0_2 *unk_0C;
    u8 pad_10[0x34];
    unk_func_001F49F0_0 unk_44;
    unk_func_001F49F0_0 unk_50;
    unk_func_001F49F0_0 unk_5C;
    unk_func_001F49F0_0 unk_68;
} unk_func_001F49F0_3;

void func_001F4730(unk_func_001F49F0_3 *, s32, unk_func_001F49F0_0 *, unk_func_001F49F0_0 *);

void func_001F49F0(unk_func_001F49F0_3 *arg0) {
    if (arg0->unk_0C->unk_6C != 0) {
        arg0->unk_0C->unk_72 |= 2;
    }
    func_001F4730(arg0, arg0->unk_0C->unk_68, &arg0->unk_50, &arg0->unk_44);
    if (arg0->unk_0C->unk_6C != 0) {
        func_001F4730(arg0, arg0->unk_0C->unk_6C, &arg0->unk_68, &arg0->unk_5C);
        arg0->unk_50.unk_00 = arg0->unk_50.unk_00 + arg0->unk_08->unk_58 * (arg0->unk_68.unk_00 - arg0->unk_50.unk_00);
        arg0->unk_50.unk_04 = arg0->unk_50.unk_04 + arg0->unk_08->unk_58 * (arg0->unk_68.unk_04 - arg0->unk_50.unk_04);
        arg0->unk_50.unk_08 = arg0->unk_50.unk_08 + arg0->unk_08->unk_58 * (arg0->unk_68.unk_08 - arg0->unk_50.unk_08);
        arg0->unk_44.unk_00 = arg0->unk_44.unk_00 + arg0->unk_08->unk_58 * (arg0->unk_5C.unk_00 - arg0->unk_44.unk_00);
        arg0->unk_44.unk_04 = arg0->unk_44.unk_04 + arg0->unk_08->unk_58 * (arg0->unk_5C.unk_04 - arg0->unk_44.unk_04);
        arg0->unk_44.unk_08 = arg0->unk_44.unk_08 + arg0->unk_08->unk_58 * (arg0->unk_5C.unk_08 - arg0->unk_44.unk_08);
    }
}
