/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002BCF00_0 {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x6];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
} unk_func_002BCF00_0;

typedef struct unk_func_002BCF00_1 {
    s32 unk_00_0 : 21;
    s32 unk_00_21 : 11;
} unk_func_002BCF00_1;

typedef struct unk_func_002BCF00_2 {
    u8 pad_00[0x398];
    unk_func_002BCF00_0 unk_398[0x200];
    u8 pad_3B98[0xC];
    unk_func_002BCF00_1 unk_3BA4[1];
} unk_func_002BCF00_2;

s32 func_002B4230(s32, s32);
void func_002B44E0(s32);
extern unk_func_002BCF00_2 D_007B2370;
extern u32 D_007B26F4[];
extern u32 D_007B26FC[];
extern u32 D_007B2704[];
extern s32 D_007B5F08[];
extern u32 D_007B5F0C[];
extern u8 D_007B7B98[];
extern u8 D_007B7B9A[];
extern u8 D_007B7B9C[];
extern volatile s32 D_007B8480[];

static inline void func_002BCF00_inl(unk_func_002BCF00_0 *e) {
    s32 temp;

    if (e->unk_01 != 0) {
        temp = D_007B2370.unk_3BA4[e->unk_0C].unk_00_21;
        if (func_002B4230(e->unk_0C, -1)) {
            func_002B44E0(temp);
        }
    }
    e->unk_01 = 0;
}

void func_002BCF00(s32 arg0, u32 arg1) {
    unk_func_002BCF00_0 *e;

    if (arg0 == 0x8514) {
        arg0 = 0x8513;
    }
    if (arg0 == D_007B5F08[0] && arg1 == D_007B5F0C[0]) {
        return;
    }
    if (arg1 >= 0x200) {
        return;
    }
    e = &D_007B2370.unk_398[arg1];
    if (e->unk_08 != arg0) {
        func_002BCF00_inl(e);
        e->unk_01 = 0;
    }
    switch (arg0) {
    case 0xDE0:
        D_007B7B98[D_007B8480[0]] = 1;
        D_007B26F4[D_007B8480[0]] = arg1;
        break;
    case 0xDE1:
        D_007B7B9A[D_007B8480[0]] = 1;
        D_007B26FC[D_007B8480[0]] = arg1;
        break;
    case 0x8513:
        D_007B2704[0] = arg1;
        D_007B7B9C[0] = 1;
        break;
    default:
        return;
    }
    e->unk_08 = arg0;
    e->unk_00 = 1;
    D_007B5F08[0] = arg0;
    D_007B5F0C[0] = arg1;
}
