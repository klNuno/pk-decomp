#include "common.h"

typedef struct unk_func_0016B920_0 {
    u8 pad_00[2];
    u8 unk_02_0 : 1;
    u8 unk_02_1 : 2;
    u8 unk_02_3 : 5;
    u8 pad_03[0xD];
} unk_func_0016B920_0;

typedef struct unk_func_0016B920_1 {
    u8 unk_00_0 : 5;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 2;
    u8 pad_01[0xF];
} unk_func_0016B920_1;

typedef struct unk_func_0016B920_2 {
    u8 unk_00_0 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
    u8 pad_01[0xF];
} unk_func_0016B920_2;

void func_00285148(f32, f32, f32, f32);
void func_00285AC0(s32);
void func_00285B00(void);
extern s32 D_0035F488;
extern s32 D_0035FB88;
extern unk_func_0016B920_1 D_007B08C0;
extern unk_func_0016B920_0 D_007B0948;
extern unk_func_0016B920_2 D_007B09D2;
extern unk_func_0016B920_1 D_007B09D4;
extern s32 D_007B2370[];
extern s32 D_007B24E4[];
extern u8 *D_007B8F58[];

void func_0016B920(void) {
    if (D_0035FB88 != 2) {
        D_0035F488 = 1;
        D_007B24E4[0] &= ~0x400;
        D_007B2370[0] &= ~0x800;
        D_007B0948.unk_02_0 = 1;
        D_007B09D4.unk_00_5 = 1;
        D_007B0948.unk_02_1 = 1;
        D_007B09D4.unk_00_5 = 1;
        D_007B2370[0] &= ~0x80;
        D_007B08C0.unk_00_5 = 0;
        D_007B09D2.unk_00_4 = 1;
        *D_007B8F58[0] = 0;
        func_00285AC0(0x1701);
        func_00285B00();
        func_00285148(0.0f, 100.0f, 100.0f, 0.0f);
        func_00285AC0(0x1702);
        func_00285B00();
        func_00285AC0(0x1700);
        func_00285B00();
        D_0035FB88 = 2;
    }
}
