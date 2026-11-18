#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2A50_0;

typedef struct {
    u8 pad_00[0x10];
} unk_func_002E2A50_1;

void c4sdk_malloc();
s32 func_002CEA20(s32 *);
s32 func_002CEAF0();
void func_002D0DA0();
void func_002DC050();
void func_002DD2F0();
u8 func_002DD340();
void func_002DD690();

void func_002E2A50(unk_func_002E2A50_0 *arg0) {
    unk_func_002E2A50_1 sp30;
    s32 *sp40;
    s32 *sp44;
    s32 sp48;
    s32 sp4C;
    u8 temp;
    s32 temp2;

    func_002D0DA0(&sp40, &sp48);
    func_002D0DA0(&sp44, &sp4C);
    func_002DD690(&sp30, arg0);
    arg0->unk_10 += 4;
    temp = func_002DD340(&sp30);
    func_002DC050(arg0, &sp40);
    func_002DC050(arg0, &sp44);
    if (temp) {
        temp2 = *sp40;
        func_002DD2F0(&sp30, !(func_002CEAF0(&sp44, 0, *sp44, func_002CEA20(sp40), temp2) < 0));
    }
    c4sdk_malloc(&sp44, 0);
    c4sdk_malloc(&sp40, 0);
}
