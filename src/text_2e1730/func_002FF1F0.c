#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002FF1F0_0;

void func_00302AD0();
extern u8 D_0035EB20[];

unk_func_002FF1F0_0 *func_002FF1F0(unk_func_002FF1F0_0 *arg0) {
    func_00302AD0(arg0);
    arg0->unk_00 = D_0035EB20;
    return arg0;
}
