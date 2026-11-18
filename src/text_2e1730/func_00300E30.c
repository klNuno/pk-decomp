#include "common.h"

typedef struct unk_func_00300E30_0 {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[4];
    u8 unk_0C[4];
} unk_func_00300E30_0;

typedef struct unk_func_00300E30_1 {
    u8 unk_00[4];
    unk_func_00300E30_0 unk_04;
} unk_func_00300E30_1;

typedef struct unk_func_00300E30_2 {
    s32 unk_00;
    s32 unk_04;
} unk_func_00300E30_2;

void __ct__Q24usnd14CObjectVarTypeFPCc(void *, void *);
void func_002CDC10(void *, void *);
void func_003014B0(unk_func_00300E30_2 *, s32, void *);
void c4sdk_malloc(void *, s32);
void func_002CD2A0(void *, s32);
extern u8 D_0035EC70[];
extern u8 D_0035EC90[];

s32 func_00300E30(s32 arg0, void *arg1) {
    unk_func_00300E30_0 a;
    unk_func_00300E30_1 b;
    unk_func_00300E30_2 res;
    unk_func_00300E30_1 *volatile p;
    unk_func_00300E30_0 *volatile q;
    unk_func_00300E30_0 *r;
    s32 ret;

    __ct__Q24usnd14CObjectVarTypeFPCc(&a, arg1);
    p = &b;
    func_002CDC10(p->unk_00, arg1);
    q = &p->unk_04;
    r = q;
    r->unk_00 = D_0035EC90;
    r->unk_04 = a.unk_04;
    func_002CDC10(r->unk_08, a.unk_08);
    q->unk_00 = D_0035EC70;
    func_002CDC10(q->unk_0C, a.unk_0C);
    func_003014B0(&res, arg0, &b);
    ret = res.unk_00;
    r = &b.unk_04;
    if (r != NULL) {
        r->unk_00 = D_0035EC70;
        if (r->unk_0C != NULL) {
            c4sdk_malloc(r->unk_0C, 0);
        }
        if (r != NULL) {
            r->unk_00 = D_0035EC90;
            func_002CD2A0(b.unk_04.unk_08, -1);
        }
    }
    c4sdk_malloc(b.unk_00, 0);
    a.unk_00 = D_0035EC70;
    if (a.unk_0C != NULL) {
        c4sdk_malloc(a.unk_0C, 0);
    }
    a.unk_00 = D_0035EC90;
    if (a.unk_08 != NULL) {
        c4sdk_malloc(a.unk_08, 0);
    }
    return ret + 0x10;
}
