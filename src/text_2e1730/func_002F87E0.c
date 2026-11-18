#include "common.h"

typedef struct unk_func_002F87E0_0 {
    void *unk_00;
} unk_func_002F87E0_0;

void func_002D2BB0(unk_func_002F87E0_0 *);
extern s32 D_0035E9D0[];

unk_func_002F87E0_0 *func_002F87E0(unk_func_002F87E0_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E9D0;
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
