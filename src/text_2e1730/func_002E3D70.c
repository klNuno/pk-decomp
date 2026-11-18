#include "common.h"

typedef struct unk_func_002E3D70_0 {
    u8 pad_00[0x18];
} unk_func_002E3D70_0;

typedef struct unk_func_002E3D70_1 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3D70_1;

void func_002DCB20(unk_func_002E3D70_1 *, s32 *);
void func_002DEB50(unk_func_002E3D70_0 *, s32);
u8 func_002DEF70(unk_func_002E3D70_0 *);
void func_002DF290(unk_func_002E3D70_0 *, unk_func_002E3D70_1 *);

void func_002E3D70(unk_func_002E3D70_1 *arg0) {
    unk_func_002E3D70_0 sp30;
    s32 sp48;
    s32 sp4C;
    u8 temp_s0;
    func_002DF290(&sp30, arg0);
    arg0->unk_10 += 4;
    temp_s0 = func_002DEF70(&sp30);
    func_002DCB20(arg0, &sp48);
    func_002DCB20(arg0, &sp4C);
    if (temp_s0) {
        if (sp4C != 0) {
            func_002DEB50(&sp30, sp48 / sp4C);
        } else {
            func_002DEB50(&sp30, 0x7FFF7FFF);
        }
    }
}
