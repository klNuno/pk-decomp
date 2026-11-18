#include "common.h"

typedef struct unk_func_002FF950_0 {
    void *unk_00;
} unk_func_002FF950_0;

void func_002FEDD0();
extern u8 D_0035EB90[];

unk_func_002FF950_0 *func_002FF950(unk_func_002FF950_0 *arg0) {
    func_002FEDD0(arg0);
    arg0->unk_00 = D_0035EB90;
    return arg0;
}
