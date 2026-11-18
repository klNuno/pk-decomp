#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002D9C10_0;

extern s32 D_0035E518[];
void func_00302260(unk_func_002D9C10_0 *, s32);
void func_002D2BB0(void *);

unk_func_002D9C10_0 *func_002D9C10(unk_func_002D9C10_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E518;
        func_00302260(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
