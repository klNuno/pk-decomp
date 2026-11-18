#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0025F580_0;

typedef struct {
    u8 pad_00[0x60];
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
    u8 pad_6C[8];
    f32 unk_74;
} unk_func_0025F580_1;

s32 func_001273A8(f32);
f32 func_001E60E0(f32);
s32 rand(void);
unk_func_0025F580_1 *func_00266E40(s32, unk_func_0025F580_0 *, unk_func_0025F580_0 *, s32, f32, f32, f32);
extern s8 D_00360218;
extern f32 D_003602A8;
extern f32 D_003602B0;
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633300[];
extern f32 D_00633308[];
extern f32 D_0063330C[];
extern f32 D_00633310[];

void func_0025F580(unk_func_0025F580_0 *arg0, unk_func_0025F580_0 *arg1, s32 arg2, f32 arg3) {
    unk_func_0025F580_0 pos;
    unk_func_0025F580_0 vel;
    unk_func_0025F580_0 dir;
    unk_func_0025F580_1 *p;
    f32 x;
    f32 y;
    f32 z;
    f32 len;
    f32 inv;
    f32 r;
    f32 d;
    s32 count;

    if (D_00360218 == 0) {
        D_00633308[0] = 1.0f;
        D_00633310[0] = 0.5f;
        D_003602A8 = 0.0f;
        D_006332F8[0] = 4.0f;
        D_006332FC[0] = 255.0f;
        D_0063330C[0] = 1.0f;
        D_00633300[0] = 1.0f;
    }
    vel.unk_00 = 0.0f;
    vel.unk_04 = 0.0f;
    vel.unk_08 = 2.0f * D_003602A8;
    dir = *arg1;
    y = dir.unk_04;
    x = dir.unk_00;
    z = dir.unk_08;
    len = func_001E60E0(x * x + y * y + z * z);
    if (0.0f != len) {
        inv = 1.0f / len;
        dir.unk_00 = inv * dir.unk_00;
        dir.unk_04 = inv * dir.unk_04;
        dir.unk_08 = inv * dir.unk_08;
    }
    D_003602B0 = D_00633300[0];
    count = func_001273A8(arg3);
    while (count--) {
        r = D_00633308[0];
        d = -r + ((r + r) * (f32)rand()) / 2147483648.0f;
        pos.unk_00 = arg0->unk_00 - d * dir.unk_04;
        pos.unk_04 = arg0->unk_04 + d * dir.unk_00;
        pos.unk_08 = arg0->unk_08;
        r = D_00633310[0];
        d = -r + ((r + r) * (f32)rand()) / 2147483648.0f;
        d = D_0063330C[0] + d;
        p = func_00266E40(0xC703, &pos, &vel, arg2, 2.0f, d, d);
        if (p != NULL) {
            p->unk_60 = D_003602A8;
            p->unk_64 = D_003602A8;
            p->unk_68 = 255.0f / D_006332F8[0];
            p->unk_74 = D_006332FC[0];
        }
    }
}
