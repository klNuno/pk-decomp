#include "common.h"

typedef struct unk_func_002A5A00_0 {
    void (*unk_00)();
    u8 pad_04[4];
    f32 unk_08;
} unk_func_002A5A00_0;

f32 int2dB__Fi();
unk_func_002A5A00_0 *func_0029DA50(s32);
void func_002A59B0();

void func_002A5A00(s32 arg0) {
    unk_func_002A5A00_0 *p = func_0029DA50(4);
    p->unk_08 = int2dB__Fi(arg0);
    p->unk_00 = func_002A59B0;
}
