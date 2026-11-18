#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} unk_func_002D5AE0_0;

typedef struct {
    unk_func_002D5AE0_0 *unk_00;
} unk_func_002D5AE0_1;

unk_func_002D5AE0_1 *func_002D59F0(void *);
unk_func_002D5AE0_0 *func_002D5840(void *);
void func_002D2BB0(void *);
void func_002CFEF0(unk_func_002D5AE0_1 *);
void func_002D5EA0(void *);
void func_002D5B90(void *, s32);

void *func_002D5AE0(void *arg0, s16 arg1) {
    unk_func_002D5AE0_1 it;
    unk_func_002D5AE0_0 *e;

    if (arg0 != NULL) {
        for (it.unk_00 = func_002D59F0(arg0)->unk_00; e = func_002D5840(arg0), it.unk_00 != e; func_002CFEF0(&it)) {
            func_002D2BB0(it.unk_00->unk_10);
        }
        func_002D5EA0(arg0);
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                func_002D5B90(arg0, -1);
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
