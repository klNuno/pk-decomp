#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002F3F50_0;

void func_002F4D10(unk_func_002F3F50_0 *, s32);
void func_002D2BB0(void *);
extern u8 D_0035E830[];

unk_func_002F3F50_0 *func_002F3F50(unk_func_002F3F50_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E830;
        func_002F4D10(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
