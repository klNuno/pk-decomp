/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A6880_0 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
} unk_func_002A6880_0;

typedef struct unk_func_002A6880_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A6880_1;

typedef struct unk_func_002A6880_2 {
    u8 pad_00[0x6120];
    unk_func_002A6880_1 unk_6120[1];
} unk_func_002A6880_2;

void func_0029D9A0();
extern unk_func_002A6880_2 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A6880_1 D_007B8490[];

void func_002A6880(s32 arg0, unk_func_002A6880_0 *arg1) {
    f32 r;
    f32 g;
    f32 b;
    f32 a;

    a = (f32)(u32)arg1->unk_06 / 65535.0f;
    b = (f32)(u32)arg1->unk_04 / 65535.0f;
    g = (f32)(u32)arg1->unk_02 / 65535.0f;
    r = (f32)(u32)arg1->unk_00 / 65535.0f;
    D_007B8490[arg0].unk_00 = r;
    D_007B8490[arg0].unk_04 = g;
    D_007B8490[arg0].unk_08 = b;
    D_007B8490[arg0].unk_0C = a;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0], &D_007B8490[arg0]);
    }
}
