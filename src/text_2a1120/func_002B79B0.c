#include "common.h"

typedef struct {
    u32 unk_00_0 : 14;
    u32 unk_00_1 : 2;
    u32 unk_00_2 : 6;
    u32 unk_00_3 : 2;
    u32 unk_00_4 : 6;
    u32 unk_00_5 : 2;
    u8 pad_04[0xC];
    u32 unk_10_0 : 11;
    u32 unk_10_1 : 5;
    u32 unk_10_2 : 11;
    u32 unk_10_3 : 5;
    u8 pad_14[0x8];
    u32 unk_1C_0 : 12;
    u32 unk_1C_1 : 20;
    u32 unk_20_0 : 12;
    u32 unk_20_1 : 20;
    u8 pad_24[0x8];
    u32 unk_2C_0 : 2;
    u32 unk_2C_1 : 30;
} unk_func_002B79B0_0;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    s32 unk_48;
} unk_func_002B79B0_1;

void func_002BBB90();
extern unk_func_002B79B0_0 D_007B25D4;
extern s32 D_007B7B80[];
extern s32 D_007B7B88[];

void func_002B79B0(unk_func_002B79B0_1 *arg0, s32 arg1) {
    s32 size;
    s32 tex;

    if (arg0 == NULL) {
        size = D_007B7B80[0];
        tex = D_007B7B88[0];
    } else {
        tex = arg0->unk_48;
        if (tex == 0) {
            return;
        }
        size = arg0->unk_44;
    }
    D_007B25D4.unk_00_4 = 0;
    D_007B25D4.unk_00_0 = arg1;
    D_007B25D4.unk_00_2 = 1;
    D_007B25D4.unk_2C_0 = 0;
    D_007B25D4.unk_10_0 = 0;
    D_007B25D4.unk_10_2 = 0;
    if (size == 0x100) {
        D_007B25D4.unk_1C_0 = 0x10;
        D_007B25D4.unk_20_0 = 0x10;
        func_002BBB90(tex, 0x10, 0x10, 4);
    } else {
        D_007B25D4.unk_1C_0 = 8;
        D_007B25D4.unk_20_0 = 2;
        func_002BBB90(tex, 8, 2, 4);
    }
}
