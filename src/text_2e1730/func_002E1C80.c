#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E1C80_0;

void func_002DF290();
u8 func_002DEF70();
void func_002DCB20();
void func_002DEB50();

void func_002E1C80(unk_func_002E1C80_0 *arg0) {
    s32 sp20[7];
    s32 sp3C;
    u8 temp;

    func_002DF290(sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DEF70(sp20);
    func_002DCB20(arg0, &sp3C);
    if (temp) {
        func_002DEB50(sp20, -sp3C);
    }
}
