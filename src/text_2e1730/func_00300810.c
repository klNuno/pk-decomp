#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_00300810_0;

void func_003023B0();
extern u8 D_0035EC30[];

unk_func_00300810_0 *func_00300810(unk_func_00300810_0 *arg0) {
    func_003023B0(arg0);
    arg0->unk_00 = D_0035EC30;
    return arg0;
}
