#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002FF680_0;

void func_00302AD0();
extern u8 D_0035EB80[];

unk_func_002FF680_0 *func_002FF680(unk_func_002FF680_0 *arg0) {
    func_00302AD0(arg0);
    arg0->unk_00 = D_0035EB80;
    return arg0;
}
