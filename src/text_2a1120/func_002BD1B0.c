#include "common.h"

typedef struct unk_func_002BD1B0_0 {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0xA];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[4];
} unk_func_002BD1B0_0;

typedef struct unk_func_002BD1B0_1 {
    s32 unk_00_0 : 21;
    s32 unk_00_21 : 11;
} unk_func_002BD1B0_1;

typedef struct unk_func_002BD1B0_2 {
    u8 pad_00[0x398];
    unk_func_002BD1B0_0 unk_398[0x200];
    u8 pad_3B98[0xC];
    unk_func_002BD1B0_1 unk_3BA4[1];
} unk_func_002BD1B0_2;

s32 func_002B4230(s32, s32);
void func_002B44E0(s32);
void func_002BD2D0(s32);
extern unk_func_002BD1B0_2 D_007B2370;

static inline void func_002BD1B0_inl(s32 *arg0) {
    if (*arg0 != 0) {
        func_002BD2D0(*arg0);
        *arg0 = 0;
    }
}

void func_002BD1B0(s32 arg0, u32 *arg1) {
    s32 i;
    u32 id;
    unk_func_002BD1B0_0 *e;
    s32 temp;

    for (i = 0; i < arg0; i++) {
        id = *arg1++;
        if (id == 0 || id >= 0x200) {
            continue;
        }
        if (D_007B2370.unk_398[id].unk_00 == 0) {
            continue;
        }
        e = &D_007B2370.unk_398[id];
        if (e->unk_01 != 0) {
            temp = D_007B2370.unk_3BA4[e->unk_0C].unk_00_21;
            if (func_002B4230(e->unk_0C, -1)) {
                func_002B44E0(temp);
            }
        }
        e->unk_01 = 0;
        func_002BD1B0_inl(&D_007B2370.unk_398[id].unk_10);
        func_002BD1B0_inl(&D_007B2370.unk_398[id].unk_14);
        e->unk_00 = 0;
    }
}
