#include "common.h"

typedef struct unk_func_002FEF50_0 {
    void *unk_00;
} unk_func_002FEF50_0;

void func_002FEDD0();
extern u8 D_0035EAD0[];

unk_func_002FEF50_0 *func_002FEF50(unk_func_002FEF50_0 *arg0) {
    func_002FEDD0(arg0);
    arg0->unk_00 = D_0035EAD0;
    return arg0;
}
