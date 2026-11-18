/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002CD690_1 {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    u8 *unk_0C;
} unk_func_002CD690_1;

typedef struct unk_func_002CD690_0 {
    unk_func_002CD690_1 *unk_00;
} unk_func_002CD690_0;

extern "C" {
void func_002CD980(void *, const void *);
u32 func_002CD990(u32);
u8 *func_002CD900(void *, u32, u32);
void *memcpy(void *, const void *, u32);
}

inline const u32 &func_002CD690_min(const u32 &a, const u32 &b) {
    return b < a ? b : a;
}

extern "C" {

void func_00116450(void);
void func_00118218(s32, char *);
void func_002CDD10(unk_func_002CD690_0 *, u32, bool);
void func_002CE090(unk_func_002CD690_0 *, u32, u32, u32, u32);
void func_002CD300(void *, s16);
void func_002D2BB0(void *);
void *func_002D2BC0(u32);
extern s32 *D_0032F73C[];
extern char D_0035ABC0[];

unk_func_002CD690_0 *func_002CD690(unk_func_002CD690_0 *arg0, const unk_func_002CD690_0 *arg1, u32 arg2, u32 arg3) {
    u32 n;
    unk_func_002CD690_1 *r;
    unk_func_002CD690_1 *s;
    unk_func_002CD690_1 *q;
    unk_func_002CD690_1 *p;
    void *a;

    if (arg1->unk_00->unk_00 < arg2) {
        func_00118218(D_0032F73C[0][3], D_0035ABC0);
        func_00116450();
    }
    {
        u32 len = arg1->unk_00->unk_00 - arg2;
        n = func_002CD690_min(arg3, len);
    }
    s = arg1->unk_00;
    if (n == s->unk_00 && s->unk_08 != 0) {
        r = arg0->unk_00;
        if (r == s) {
            return arg0;
        }
        if (r->unk_08 == 0) {
            r->unk_08 = r->unk_08 != 0 ? r->unk_08 : 1;
        }
        arg0->unk_00 = --r->unk_08 == 0 ? r : 0;
        r = arg0->unk_00;
        if (r != 0) {
            if (r != 0) {
                func_002D2BB0(r->unk_0C);
                a = &r->unk_04;
                if (a != 0) {
                    func_002CD300(a, 0);
                }
            }
            func_002D2BB0(arg0->unk_00);
        }
        q = arg1->unk_00;
        if (q->unk_08 != 0) {
            (*(volatile s32 *)&q->unk_08)++;
        } else {
            p = (unk_func_002CD690_1 *)func_002D2BC0(0x10);
            if (p != 0) {
                unk_func_002CD690_1 *volatile t = p;
                u32 c;
                u32 *pr;

                p->unk_00 = q->unk_00;
                c = func_002CD990(q->unk_00);
                pr = &t->unk_04;
                func_002CD980(pr, &q->unk_04);
                *pr = c;
                t->unk_08 = 1;
                {
                    unk_func_002CD690_1 *u = t;
                    unk_func_002CD690_1 *w;
                    u8 *d = func_002CD900(&u->unk_04, u->unk_04 + 1, 0);
                    t->unk_0C = d;
                    w = t;
                    memcpy(w->unk_0C, q->unk_0C, w->unk_00 + 1);
                }
            }
            q = p;
        }
        arg0->unk_00 = q;
    } else if (arg0 == arg1) {
        func_002CE090(arg0, 0, arg2, 0, 0);
        func_002CDD10(arg0, n, 1);
    } else {
        func_002CDD10(arg0, n, 0);
        memcpy(arg0->unk_00->unk_0C, arg1->unk_00->unk_0C + arg2, n);
    }
    return arg0;
}

}
