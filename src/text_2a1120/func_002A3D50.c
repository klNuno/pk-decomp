#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s32 unk_08;
} unk_func_002A3D50_0;

unk_func_002A3D50_0 *func_0029DA50();
s32 func_0029DB20();
void func_002A3DA0();

void func_002A3D50(s32 arg0) {
    unk_func_002A3D50_0 *temp;

    temp = func_0029DA50(4);
    temp->unk_08 = func_0029DB20(arg0, 0x80);
    temp->unk_00 = func_002A3DA0;
}
