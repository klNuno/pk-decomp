#include "common.h"

typedef struct unk_func_002E3080_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3080_0;

void func_002DF290();
u8 func_002DEBA0();
void func_002DCB20();
void func_002DEB50();

void func_002E3080(unk_func_002E3080_0 *arg0) {
    u8 sp20[0x18];
    s32 sp38;
    s32 sp3C;
    u8 temp;

    func_002DF290(sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DEBA0(sp20, &sp38);
    func_002DCB20(arg0, &sp3C);
    if (temp) {
        func_002DEB50(sp20, sp38 + sp3C);
    }
}
