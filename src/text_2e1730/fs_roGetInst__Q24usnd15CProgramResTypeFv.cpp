#include "common.h"

extern "C" {
extern u8 D_0035BC00[];
extern u8 D_0035BC10[];
extern u8 D_0035BC18[];
extern u8 D_0035BC28[];
extern u8 D_0035BC30[];
extern u8 D_0035BC40[];
extern u8 D_0035BC70[];

void func_002CDB60(void *, void *, void *);
void func_002F2410(void *, void *, void *);
void *func_002F26B0();
s32 func_002F2630(void *, void *);
void func_002F13A0(void *, s32);
void func_002F15F0(void *, s32, void *, s32);
void c4sdk_malloc(void *, s32);
}

namespace usnd {
class CProgramResType {
public:
    u8 pad_00[0x40];
    CProgramResType *fs_roGetInst();
};

CProgramResType *CProgramResType::fs_roGetInst() {
    CProgramResType *volatile sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 temp_s0;

    sp24 = this;
    func_002CDB60(&sp28, D_0035BC00, &sp44);
    func_002CDB60(&sp2C, D_0035BC10, &sp48);
    func_002F2410(sp24, &sp28, &sp2C);
    c4sdk_malloc(&sp2C, 0);
    c4sdk_malloc(&sp28, 0);
    func_002CDB60(&sp30, D_0035BC18, &sp4C);
    temp_s0 = func_002F2630(func_002F26B0(), &sp30);
    c4sdk_malloc(&sp30, 0);
    func_002F13A0(sp24->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp34, D_0035BC28, &sp50);
    temp_s0 = func_002F2630(func_002F26B0(), &sp34);
    c4sdk_malloc(&sp34, 0);
    func_002F13A0(sp24->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp38, D_0035BC30, &sp54);
    temp_s0 = func_002F2630(func_002F26B0(), &sp38);
    c4sdk_malloc(&sp38, 0);
    func_002F13A0(sp24->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp3C, D_0035BC40, &sp58);
    func_002F15F0(sp24->pad_00 + 0x10, 0x3EE, &sp3C, 0);
    c4sdk_malloc(&sp3C, 0);
    func_002CDB60(&sp40, D_0035BC70, &sp5C);
    func_002F15F0(sp24->pad_00 + 0x10, 0x3EF, &sp40, 0);
    c4sdk_malloc(&sp40, 0);
    return sp24;
}
}
