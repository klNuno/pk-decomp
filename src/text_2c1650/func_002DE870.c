#include "common.h"

typedef struct unk_func_002DE870_0 {
    void *unk_00;
    s32 unk_04;
} unk_func_002DE870_0;

extern u8 D_0035E580[];
extern u8 D_0035E560[];
extern u8 D_0035E540[];

unk_func_002DE870_0 *func_002DE870(unk_func_002DE870_0 *arg0, s32 arg1) {
    arg0->unk_00 = D_0035E580;
    arg0->unk_00 = D_0035E560;
    arg0->unk_00 = D_0035E540;
    arg0->unk_04 = arg1;
    return arg0;
}
