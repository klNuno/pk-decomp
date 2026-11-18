/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0025F320_0;

typedef struct {
    u8 pad_00[0x60];
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
    u8 pad_6C[8];
    f32 unk_74;
} unk_func_0025F320_1;

extern s32 func_00127318(f32);
extern f32 func_00114D70(f32);
extern f32 func_00115110(f32);
extern s32 rand(void);
extern unk_func_0025F320_1 *func_00266E40(s32, unk_func_0025F320_0 *, unk_func_0025F320_0 *, s32, f32, f32, f32);
extern s8 D_00360218;
extern f32 D_003602A8;
extern f32 D_003602B0;
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633300[];
extern f32 D_00633308[];
extern f32 D_0063330C[];
extern f32 D_00633310[];

static inline f32 func_0025F320_00(f32 arg0) {
    return -arg0 + ((arg0 + arg0) * (f32)rand()) / 2147483648.0f;
}

void func_0025F320(unk_func_0025F320_0 *arg0, unk_func_0025F320_0 *arg1, s32 arg2, f32 arg3) {
    s32 n;
    s32 i;
    f32 r;

    if (D_00360218 == 0) {
        D_003602A8 = 0.0f;
        D_00633308[0] = 1.05f;
        D_0063330C[0] = 0.25f;
        D_00633310[0] = 1.0f;
        D_006332F8[0] = 100.0f;
        D_006332FC[0] = 160.0f;
        D_00633300[0] = 1.53f;
    }
    r = arg1->unk_00;
    n = func_00127318(arg3);
    for (i = 0; i < n; i++) {
        unk_func_0025F320_0 sp80;
        unk_func_0025F320_0 sp90;
        f32 a;
        f32 c;
        f32 s;
        f32 z;
        unk_func_0025F320_1 *o;

        a = (6.2831998f * (f32)i) / (f32)n;
        c = func_00114D70(a);
        s = func_00115110(a);
        D_003602B0 = D_00633308[0] + func_0025F320_00(D_0063330C[0]);
        sp80.unk_00 = arg0->unk_00 + r * c;
        sp80.unk_04 = arg0->unk_04 + r * s;
        sp80.unk_08 = arg0->unk_08;
        sp90.unk_00 = D_00633310[0] * (r * c);
        sp90.unk_04 = D_00633310[0] * (r * s);
        sp90.unk_08 = D_00633300[0];
        z = arg1->unk_04 + func_0025F320_00(arg1->unk_08);
        o = func_00266E40(0xC703, &sp80, &sp90, arg2, arg3, z, z);
        if (o != NULL) {
            o->unk_60 = D_003602A8;
            o->unk_64 = D_003602A8;
            o->unk_74 = D_006332FC[0];
            o->unk_68 = 255.0f / D_006332F8[0];
        }
    }
}
