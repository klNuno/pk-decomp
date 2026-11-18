#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002F6BB0_0;

extern s32 D_0035E870[];
void func_002FAB50(unk_func_002F6BB0_0 *, s32);
void func_002D2BB0(void *);

unk_func_002F6BB0_0 *func_002F6BB0(unk_func_002F6BB0_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E870;
        func_002FAB50(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
