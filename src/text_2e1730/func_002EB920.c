#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002EB920_0;

void func_002F23A0(unk_func_002EB920_0 *, s32);
void func_002D2BB0(void *);
extern u8 D_0035E6A0[];

unk_func_002EB920_0 *func_002EB920(unk_func_002EB920_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E6A0;
        func_002F23A0(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
