#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x34];
    s32 unk_38;
} unk_func_002F6B70_0;

void func_002F9B20();
extern u8 D_0035E850[];

unk_func_002F6B70_0 *func_002F6B70(unk_func_002F6B70_0 *arg0) {
    func_002F9B20(arg0);
    arg0->unk_00 = D_0035E850;
    arg0->unk_38 = 0;
    return arg0;
}
