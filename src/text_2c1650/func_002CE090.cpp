/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002CE090_1 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 *unk_0C;
} unk_func_002CE090_1;

typedef struct unk_func_002CE090_0 {
    unk_func_002CE090_1 *unk_00;
} unk_func_002CE090_0;

inline const u32 &func_002CE090_min(const u32 &a, const u32 &b) {
    return b < a ? b : a;
}

extern "C" {

void func_00116450(void);
void func_00118218(s32, char *);
void func_002CD300(void *, s16);
void func_002D2BB0(void *);
void *func_002D2BC0(u32);
void *memcpy(void *, const void *, u32);
void *memmove(void *, const void *, u32);
void *memset(void *, s32, u32);
extern s32 *D_0032F73C[];
extern char D_0035AC90[];
extern char D_0035ACC0[];
extern s8 D_0035F664;
extern s8 D_0035F668;

unk_func_002CE090_0 *func_002CE090(unk_func_002CE090_0 *arg0, u32 arg1, u32 arg2, u32 arg3, u8 arg4) {
    u32 n;
    u32 len;
    unk_func_002CE090_1 *p;
    unk_func_002CE090_1 *r;
    void *a;

    if (arg0->unk_00->unk_00 < arg1) {
        func_00118218(D_0032F73C[0][3], D_0035AC90);
        func_00116450();
    }
    {
        u32 rest = arg0->unk_00->unk_00 - arg1;
        n = func_002CE090_min(arg2, rest);
    }
    if (arg3 > (u32)-2 || arg0->unk_00->unk_00 - n > (u32)-2 - arg3) {
        func_00118218(D_0032F73C[0][3], D_0035ACC0);
        func_00116450();
    }
    len = arg3 + (arg0->unk_00->unk_00 - n);
    if (arg0->unk_00->unk_08 >= 2 || arg0->unk_00->unk_04 < len) {
        p = (unk_func_002CE090_1 *)func_002D2BC0(0x10);
        if (p != 0) {
            unk_func_002CE090_1 *volatile q = p;
            u32 sz;
            p->unk_04 = (len + 3) - (len & 3);
            q->unk_08 = 1;
            sz = q->unk_04 + 1;
            q->unk_0C = sz != 0 ? (u8 *)func_002D2BC0(sz) : 0;
        }
        memcpy(p->unk_0C, arg0->unk_00->unk_0C, arg1);
        if (arg3 != 0) {
            memset(p->unk_0C + arg1, arg4, arg3);
        }
        memcpy(p->unk_0C + arg1 + arg3, arg0->unk_00->unk_0C + arg1 + n, arg0->unk_00->unk_00 - (arg1 + n));
        p->unk_0C[len] = D_0035F664;
        p->unk_00 = len;
        r = arg0->unk_00;
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
        arg0->unk_00 = p;
    } else {
        memmove(arg0->unk_00->unk_0C + arg1 + arg3, arg0->unk_00->unk_0C + arg1 + n, arg0->unk_00->unk_00 - (arg1 + n));
        if (arg3 != 0) {
            memset(arg0->unk_00->unk_0C + arg1, arg4, arg3);
        }
        arg0->unk_00->unk_0C[len] = D_0035F668;
        arg0->unk_00->unk_00 = len;
    }
    return arg0;
}

}
