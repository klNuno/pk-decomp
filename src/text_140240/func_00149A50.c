#include "common.h"

typedef struct unk_func_00149A50_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x12];
    s16 unk_2E;
    u8 pad_30[0x38];
} unk_func_00149A50_0;

typedef struct unk_func_00149A50_1 {
    u8 pad_00[0x18];
    f32 unk_18;
} unk_func_00149A50_1;

typedef struct unk_func_00149A50_2 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00149A50_2;

typedef struct unk_func_00149A50_3 {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 pad_14[0x94];
    unk_func_00149A50_2 *unk_A8;
} unk_func_00149A50_3;

typedef struct unk_func_00149A50_4 {
    u8 pad_00[0x8];
    f32 unk_08;
} unk_func_00149A50_4;

unk_func_00149A50_3 *func_001387B0(unk_func_00149A50_1 *);
unk_func_00149A50_4 *func_00155EE0(s32);

static inline u8 func_00149A50_alive(s16 t) {
    return t != 0x63;
}

static inline f32 func_00149A50_dot(unk_func_00149A50_0 *e, f32 x, f32 y, f32 z) {
    return e->unk_04 * x + e->unk_08 * y + e->unk_0C * z;
}

static inline u8 func_00149A50_above(unk_func_00149A50_0 *e, unk_func_00149A50_1 *arg2) {
    s32 r;
    if (func_00149A50_dot(e, 0.0f, 0.0f, 1.0f) >= arg2->unk_18) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

static inline u8 func_00149A50_kind(s16 t) {
    s32 r = 1;
    if ((u32)(t - 7) > 1) {
        r = 0;
    }
    return r;
}

static inline u8 func_00149A50_nonnull(void *p) {
    return p != 0;
}

void func_00149A50(s32 arg0, unk_func_00149A50_0 *arg1, unk_func_00149A50_1 *arg2) {
    s32 i;
    unk_func_00149A50_0 *e;
    unk_func_00149A50_0 *best;
    f32 bestz;
    f32 limit;
    s16 t;

    bestz = 3.402822e38f;
    best = 0;
    for (i = 0; i < arg0; i++) {
        e = &arg1[i];
        if (func_00149A50_alive(e->unk_2E)) {
            if (func_00149A50_above(e, arg2)) {
                if (e->unk_18 < bestz) {
                    best = e;
                    bestz = e->unk_18;
                }
            }
        }
    }
    if (func_00149A50_nonnull(func_001387B0(arg2)->unk_A8)) {
        limit = func_001387B0(arg2)->unk_10 + func_00155EE0(func_001387B0(arg2)->unk_A8->unk_24)->unk_08;
    } else {
        limit = func_001387B0(arg2)->unk_10;
    }
    for (i = 0; i < arg0; i++) {
        e = &arg1[i];
        t = e->unk_2E;
        if (func_00149A50_alive(t)) {
            if (!func_00149A50_above(e, arg2) && e->unk_00 <= 1.0f && !func_00149A50_kind(t)) {
                if (best != 0) {
                    if (best->unk_04 * (e->unk_10 - best->unk_10) + best->unk_08 * (e->unk_14 - best->unk_14) +
                            best->unk_0C * (e->unk_18 - best->unk_18) < 0.005f) {
                        e->unk_2E = 0x63;
                    }
                } else if (e->unk_18 <= limit) {
                    e->unk_2E = 0x63;
                }
            } else {
                e->unk_2E = 0x63;
            }
        }
    }
}
