#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[8];
    s32 unk_0C;
} unk_func_003030B0_1;

typedef struct {
    u8 pad_00[0x18];
    unk_func_003030B0_1 *unk_18;
} unk_func_003030B0_0;

unk_func_003030B0_0 **func_003030A0();
unk_func_003030B0_0 *func_00302FE0();
void func_002D72A0();
void func_002CFEF0();

void func_003030B0(u8 *arg0, s32 arg1) {
    s32 tmp[3];
    unk_func_003030B0_0 *it;
    unk_func_003030B0_0 *end;
    unk_func_003030B0_1 *p;

    for (it = *func_003030A0(arg0 + 0xC); end = func_00302FE0(arg0 + 0xC), it != end; func_002CFEF0(&it)) {
        p = it->unk_18;
        if (p->unk_00 > 0 && p->unk_0C == 0) {
            func_002D72A0(tmp, arg1, p->unk_04);
        }
    }
}
