#include "common.h"

typedef struct {
    u8 pad_00[0x14];
} unk_func_002E3EE0_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3EE0_1;

void func_002DDE50(unk_func_002E3EE0_0 *, unk_func_002E3EE0_1 *);
u8 func_002DDAF0(unk_func_002E3EE0_0 *);
void func_002DB850(unk_func_002E3EE0_1 *, u8 *);
void func_002DD6D0(unk_func_002E3EE0_0 *, u8);

void func_002E3EE0(unk_func_002E3EE0_1 *arg0) {
    unk_func_002E3EE0_0 sp30;
    u8 temp;
    u8 sp4E;
    u8 sp4F;

    func_002DDE50(&sp30, arg0);
    arg0->unk_10 += 4;
    temp = func_002DDAF0(&sp30);
    func_002DB850(arg0, &sp4E);
    func_002DB850(arg0, &sp4F);
    if (temp) {
        if (sp4F != 0) {
            func_002DD6D0(&sp30, sp4E / sp4F);
        } else {
            func_002DD6D0(&sp30, 0xFF);
        }
    }
}
