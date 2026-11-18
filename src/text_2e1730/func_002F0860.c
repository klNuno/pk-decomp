#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002F0860_0;

void func_002EBE20(void *, f32);
extern u8 D_0035E780[];

unk_func_002F0860_0 *func_002F0860(unk_func_002F0860_0 *arg0) {
    func_002EBE20(arg0, 1.0f);
    arg0->unk_00 = D_0035E780;
    return arg0;
}
