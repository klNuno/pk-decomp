#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002F6A70_0;

void func_00305AB0(unk_func_002F6A70_0 *, s32);
void func_00304B00(void *);
extern u8 D_0035EDC0[];

unk_func_002F6A70_0 *func_002F6A70(unk_func_002F6A70_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EDC0;
        func_00305AB0(arg0, 0);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
