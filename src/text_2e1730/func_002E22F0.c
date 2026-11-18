#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E22F0_0;

typedef struct {
    s32 unk_00[7];
} unk_func_002E22F0_1;

void func_002DDE50();
u8 func_002DDAF0();
void func_002DB850();
void func_002DD6D0();

void func_002E22F0(unk_func_002E22F0_0 *arg0) {
    unk_func_002E22F0_1 obj;
    u8 a;
    u8 b;
    u8 flag;

    func_002DDE50(&obj, arg0);
    arg0->unk_10 += 4;
    flag = func_002DDAF0(&obj);
    func_002DB850(arg0, &a);
    func_002DB850(arg0, &b);
    if (flag) {
        func_002DD6D0(&obj, (u8)(a * b));
    }
}
