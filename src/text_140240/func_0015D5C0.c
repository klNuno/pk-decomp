/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015D5C0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
    f32 unk_14;
} unk_func_0015D5C0_0;

typedef struct unk_func_0015D5C0_1 {
    s32 unk_00;
    unk_func_0015D5C0_0 *unk_04;
    struct unk_func_0015D5C0_1 *unk_08;
    u8 pad_0C[0x8];
    struct unk_func_0015D5C0_1 *unk_14;
} unk_func_0015D5C0_1;

void func_0015CDE0(unk_func_0015D5C0_0 *, f32, f32);
void func_0015D070(unk_func_0015D5C0_0 *, f32);
void func_0015D410(unk_func_0015D5C0_0 *, f32);
void func_001765C0(unk_func_0015D5C0_0 *);
extern s8 D_0035F978;
extern s32 D_0035F97C;
extern f32 D_0035F990;
extern f32 D_0035F994;

static inline s32 func_0015D5C0_same(unk_func_0015D5C0_0 *p) {
    if (p->unk_10 != D_0035F97C) {
        return 0;
    }
    if (p->unk_14 != D_0035F994) {
        return 0;
    }
    return 1;
}

static inline f32 func_0015D5C0_get(unk_func_0015D5C0_0 *p) {
    if (D_0035F978 == 2) {
        if (p->unk_10 != D_0035F97C) {
            return 0.0f;
        }
        return p->unk_14;
    }
    if (D_0035F978 == 1) {
        return 0.0f;
    }
    return 0.0f;
}

static inline void func_0015D5C0_set(unk_func_0015D5C0_0 *p) {
    p->unk_14 = D_0035F990;
    p->unk_10 = D_0035F97C;
    func_001765C0(p);
}

void func_0015D5C0(unk_func_0015D5C0_1 *arg0) {
    unk_func_0015D5C0_1 *n;
    unk_func_0015D5C0_1 *c;
    unk_func_0015D5C0_0 *p;

    for (n = arg0->unk_08; n != 0; n = n->unk_14) {
        for (c = n->unk_08; c != 0; c = c->unk_14) {
            func_0015D5C0(c);
        }
        if (n->unk_00 == 0x20) {
            if (!func_0015D5C0_same(n->unk_04)) {
                func_0015D410(n->unk_04, D_0035F990);
            }
        }
    }
    if (arg0->unk_00 == 0x20) {
        p = arg0->unk_04;
        if (!func_0015D5C0_same(p)) {
            f32 f = D_0035F990;
            if (D_0035F978 == 1) {
                func_0015D070(p, f);
                func_0015D5C0_set(p);
            } else if (D_0035F978 == 2) {
                func_0015CDE0(p, f, func_0015D5C0_get(p));
                func_0015D5C0_set(p);
            }
        }
    }
}
