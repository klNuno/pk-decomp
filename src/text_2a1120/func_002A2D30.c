#include "common.h"

typedef struct unk_func_002A2D30_0 {
    void (*unk_00)();
    u8 pad_04[4];
    s16 unk_08;
    s16 unk_0A;
} unk_func_002A2D30_0;

unk_func_002A2D30_0 *func_0029DA50(s32);
void func_002A2D80();

void func_002A2D30(s32 arg0, s32 arg1) {
    unk_func_002A2D30_0 *p = func_0029DA50(4);
    p->unk_08 = arg0;
    p->unk_0A = arg1;
    p->unk_00 = func_002A2D80;
}
