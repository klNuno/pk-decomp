#include "common.h"

typedef struct unk_func_002A5170_0 {
    void (*unk_00)();
    u8 pad_04[4];
    f32 unk_08;
} unk_func_002A5170_0;

f32 int2dB__Fi();
unk_func_002A5170_0 *func_0029DA50(s32);
void func_002A5160();

void func_002A5170(s64 *arg0) {
    f32 temp = int2dB__Fi(*arg0);
    unk_func_002A5170_0 *p = func_0029DA50(4);
    p->unk_08 = temp;
    p->unk_00 = func_002A5160;
}
