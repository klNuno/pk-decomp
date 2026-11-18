#include "common.h"

typedef struct unk_func_0030E120_0 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_0030E120_0;

void func_00305B60(unk_func_0030E120_0 *);
extern u8 D_0035F150[];

unk_func_0030E120_0 *func_0030E120(unk_func_0030E120_0 *arg0, s32 arg1) {
    func_00305B60(arg0);
    arg0->unk_00 = D_0035F150;
    arg0->unk_08 = arg1;
    return arg0;
}
