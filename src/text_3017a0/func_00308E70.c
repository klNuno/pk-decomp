#include "common.h"

typedef struct unk_func_00308E70_0 {
    u8 pad_00[0x8];
    void *unk_08;
} unk_func_00308E70_0;

extern char D_0035CEE8[];
void *func_002D2930();

s32 func_00308E70(unk_func_00308E70_0 *arg0, s32 arg1) {
    arg0->unk_08 = func_002D2930(arg1, D_0035CEE8);
    return !(arg0->unk_08 == 0);
}
