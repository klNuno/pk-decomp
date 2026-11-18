#include "common.h"

typedef struct unk_func_002F7AB0_0 {
    void *unk_00;
    u8 pad_04[0x48];
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
} unk_func_002F7AB0_0;

void func_002FBA70(unk_func_002F7AB0_0 *);
extern u8 D_0035E890[];

unk_func_002F7AB0_0 *func_002F7AB0(unk_func_002F7AB0_0 *arg0) {
    func_002FBA70(arg0);
    arg0->unk_00 = D_0035E890;
    arg0->unk_4C = 0;
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    return arg0;
}
