#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002EBCE0_0;

unk_func_002EBCE0_0 **func_002EBE10(void *);
unk_func_002EBCE0_0 *func_002EBE00(void *);
void func_003020B0(s32, void *);
void func_002CFEF0(unk_func_002EBCE0_0 **);
void func_002EBDA0(void *, s32);
void func_002D2BB0(void *);
extern u8 D_0035E6B0[];

void **func_002EBCE0(void **arg0, s16 arg1) {
    unk_func_002EBCE0_0 *it;
    unk_func_002EBCE0_0 *e;
    void *p;

    if (arg0 != NULL) {
        *arg0 = D_0035E6B0;
        it = *func_002EBE10(arg0 + 2);
        while (e = func_002EBE00(arg0 + 2), it != e) {
            func_003020B0(it->unk_14, arg0);
            func_002CFEF0(&it);
        }
        p = arg0 + 2;
        if (p != NULL) {
            if (p != NULL) {
                if (p != NULL) {
                    func_002EBDA0(p, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
