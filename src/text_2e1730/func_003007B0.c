#include "common.h"

typedef struct unk_func_003007B0_0 {
    void *unk_00;
} unk_func_003007B0_0;

void func_00302AD0();
extern u8 D_0035EC40[];

unk_func_003007B0_0 *func_003007B0(unk_func_003007B0_0 *arg0) {
    func_00302AD0(arg0);
    arg0->unk_00 = D_0035EC40;
    return arg0;
}
