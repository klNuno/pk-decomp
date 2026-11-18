/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A6B90_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A6B90_1;

typedef struct unk_func_002A6B90_0 {
    u8 pad_00[0x6120];
    unk_func_002A6B90_1 unk_6120[1];
} unk_func_002A6B90_0;

typedef struct unk_func_002A6B90_2 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
} unk_func_002A6B90_2;

void func_0029D9A0(s32, s32, unk_func_002A6B90_1 *, unk_func_002A6B90_1 *);
extern unk_func_002A6B90_0 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A6B90_1 D_007B8490[];

static inline void func_002A6B90_set(s32 i, f32 r, f32 g, f32 b, f32 a) {
    D_007B8490[i].unk_00 = r;
    D_007B8490[i].unk_04 = g;
    D_007B8490[i].unk_08 = b;
    D_007B8490[i].unk_0C = a;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, i, &D_007B2370.unk_6120[i], &D_007B8490[i]);
    }
}

void func_002A6B90(s32 arg0, unk_func_002A6B90_2 *arg1) {
    func_002A6B90_set(arg0, arg1->unk_00 / 255.0f, arg1->unk_01 / 255.0f, arg1->unk_02 / 255.0f, arg1->unk_03 / 255.0f);
}
