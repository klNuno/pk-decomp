/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0029DC80_1 {
    struct unk_func_0029DC80_1 *unk_00;
} unk_func_0029DC80_1;

typedef struct unk_func_0029DC80_2 {
    struct unk_func_0029DC80_2 *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
} unk_func_0029DC80_2;

typedef struct unk_func_0029DC80_3 {
    struct unk_func_0029DC80_3 *unk_00;
    u8 pad_04[8];
    void *unk_0C;
    void *unk_10;
} unk_func_0029DC80_3;

typedef struct {
    u8 pad_00[4];
    unk_func_0029DC80_1 *unk_04;
    unk_func_0029DC80_2 *unk_08;
    unk_func_0029DC80_3 *unk_0C;
    u8 pad_10[4];
    u32 unk_14;
    u8 pad_18[4];
    u32 unk_1C;
} unk_func_0029DC80_0;

extern void (*D_0035F64C)(void *);

void func_0029DC80(unk_func_0029DC80_0 *arg0) {
    unk_func_0029DC80_2 *b;
    unk_func_0029DC80_3 *c;
    unk_func_0029DC80_1 *a;
    void *next;

    if (arg0 != NULL) {
        a = arg0->unk_04;
        b = arg0->unk_08;
        c = arg0->unk_0C;
        if (arg0->unk_14 > 1) {
            D_0035F64C((void *)arg0->unk_14);
            arg0->unk_14 = 0;
            if (arg0->unk_1C != 0) {
                D_0035F64C((void *)arg0->unk_1C);
                arg0->unk_1C = 0;
            }
        }
        if (a != NULL) {
            do {
                next = a->unk_00;
                D_0035F64C(a);
                a = next;
            } while (next != NULL);
        }
        if (b != NULL) {
            do {
                next = b->unk_00;
                if (b->unk_04 != NULL) {
                    D_0035F64C(b->unk_04);
                }
                if (b->unk_08 != NULL) {
                    D_0035F64C(b->unk_08);
                }
                if (b->unk_0C != NULL) {
                    D_0035F64C(b->unk_0C);
                }
                D_0035F64C(b);
                b = next;
            } while (next != NULL);
        }
        if (c != NULL) {
            do {
                next = c->unk_00;
                if (c->unk_0C != NULL) {
                    D_0035F64C(c->unk_0C);
                }
                if (c->unk_10 != NULL) {
                    D_0035F64C(c->unk_10);
                }
                D_0035F64C(c);
                c = next;
            } while (next != NULL);
        }
        D_0035F64C(arg0);
    }
}
