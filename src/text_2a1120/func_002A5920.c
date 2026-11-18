#include "common.h"

typedef struct unk_func_002A5920_0 {
    void (*unk_00)();
    u8 pad_04[4];
    s32 unk_08;
} unk_func_002A5920_0;

unk_func_002A5920_0 *func_0029DA50();
void func_002A5960();

void func_002A5920(s32 arg0) {
    unk_func_002A5920_0 *temp = func_0029DA50(4);
    temp->unk_08 = arg0;
    temp->unk_00 = func_002A5960;
}
