#include "common.h"

typedef struct unk_func_002FF480_0 {
    void *unk_00;
} unk_func_002FF480_0;

void func_002FEDD0();
extern u8 D_0035EB30[];

unk_func_002FF480_0 *func_002FF480(unk_func_002FF480_0 *arg0) {
    func_002FEDD0(arg0);
    arg0->unk_00 = D_0035EB30;
    return arg0;
}
