#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002FFB90_0;

void func_00302AD0();
extern u8 D_0035EBD0[];

unk_func_002FFB90_0 *func_002FFB90(unk_func_002FFB90_0 *arg0) {
    func_00302AD0(arg0);
    arg0->unk_00 = D_0035EBD0;
    return arg0;
}
