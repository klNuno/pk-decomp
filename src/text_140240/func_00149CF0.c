#include "common.h"

typedef struct unk_func_00149CF0_3 {
    u8 pad_00[2];
    u16 unk_02;
} unk_func_00149CF0_3;

typedef struct unk_func_00149CF0_2 {
    u8 pad_00[4];
    unk_func_00149CF0_3 *unk_04;
} unk_func_00149CF0_2;

typedef struct unk_func_00149CF0_0 {
    u8 pad_00[4];
    f32 unk_04[3];
    u8 pad_10[0xC];
    unk_func_00149CF0_2 *unk_1C;
    u8 pad_20[0xE];
    s16 unk_2E;
    u8 pad_30[0x38];
} unk_func_00149CF0_0;

typedef struct unk_func_00149CF0_1 {
    u8 pad_00[0x18];
    f32 unk_18;
} unk_func_00149CF0_1;

static inline f32 func_00149CF0_dot(f32 *a, f32 *b) {
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static inline u8 func_00149CF0_inl1(f32 *v, unk_func_00149CF0_1 *arg2) {
    f32 up[3];

    up[0] = 0.0f;
    up[1] = 0.0f;
    up[2] = 1.0f;
    return (func_00149CF0_dot(v, up) >= arg2->unk_18) ? 1 : 0;
}

static inline u8 func_00149CF0_inl0(unk_func_00149CF0_0 *p) {
    return p->unk_2E != 0x63;
}

static inline u8 func_00149CF0_inl2(unk_func_00149CF0_3 *p) {
    return p != (unk_func_00149CF0_3 *)-1 && (p->unk_02 & 0x10) == 0x10;
}

void func_00149CF0(s32 arg0, unk_func_00149CF0_0 *arg1, unk_func_00149CF0_1 *arg2) {
    s32 i;
    unk_func_00149CF0_0 *e;

    for (i = 0; i < arg0; i++) {
        e = &arg1[i];
        if (func_00149CF0_inl0(e)) {
            if (func_00149CF0_inl1(e->unk_04, arg2)) {
                if (func_00149CF0_inl2(e->unk_1C->unk_04)) {
                    e->unk_2E = 0x63;
                }
            }
        }
    }
}
