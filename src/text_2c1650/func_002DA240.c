#include "common.h"

typedef struct unk_func_002DA240_0 {
    void *unk_00;
} unk_func_002DA240_0;

void func_003023B0();
extern u8 D_0035E518[];

unk_func_002DA240_0 *func_002DA240(unk_func_002DA240_0 *arg0) {
    func_003023B0(arg0);
    arg0->unk_00 = D_0035E518;
    return arg0;
}
