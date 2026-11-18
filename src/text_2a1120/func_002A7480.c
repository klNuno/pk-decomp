#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A7480_0;

typedef struct {
    s32 unk_00[4];
} unk_func_002A7480_1;

typedef struct {
    u8 pad_00[0x6120];
    unk_func_002A7480_1 unk_6120[1];
} unk_func_002A7480_2;

void func_0029D9A0(s32, s32, unk_func_002A7480_1 *);
extern unk_func_002A7480_2 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A7480_0 D_007B8490[];

void func_002A7480(s32 arg0, s16 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    z = (f32)arg1[2] / 32767.0f;
    y = (f32)arg1[1] / 32767.0f;
    x = (f32)arg1[0] / 32767.0f;
    D_007B8490[arg0].unk_00 = x;
    D_007B8490[arg0].unk_04 = y;
    D_007B8490[arg0].unk_08 = z;
    D_007B8490[arg0].unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
