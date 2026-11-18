#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E1000_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E1000_1;

void func_002DB850(unk_func_002E1000_1 *, u8 *);
void func_002DD6D0(unk_func_002E1000_0 *, u8);
u8 func_002DDAF0(unk_func_002E1000_0 *);
void func_002DDE50(unk_func_002E1000_0 *, unk_func_002E1000_1 *);

void func_002E1000(unk_func_002E1000_1 *arg0) {
    unk_func_002E1000_0 sp30;
    u8 a;
    u8 b;
    u8 temp;

    func_002DDE50(&sp30, arg0);
    arg0->unk_10 += 4;
    temp = func_002DDAF0(&sp30);
    func_002DB850(arg0, &a);
    func_002DB850(arg0, &b);
    if (temp) {
        func_002DD6D0(&sp30, a - b);
    }
}
