#include "common.h"

extern "C" {
extern u8 D_0035BDA0[];
extern u8 D_0035BDB0[];
extern u8 D_0035BDB8[];
extern u8 D_0035BDC8[];
extern u8 D_0035BDD8[];
extern u8 D_0035BDE0[];
extern u8 D_0035BDF0[];
extern u8 D_0035BE18[];

void func_002CDB60(void *, void *, void *);
void func_002F2410(void *, void *, void *);
void *func_002F26B0();
s32 func_002F2630(void *, void *);
void func_002F13A0(void *, s32);
void func_002F15F0(void *, s32, void *, s32);
void c4sdk_malloc(void *, s32);
}

namespace usnd {
class CActorResType {
public:
    u8 pad_00[0x40];
    CActorResType *fs_roGetInst();
};

CActorResType *CActorResType::fs_roGetInst() {
    CActorResType *volatile sp2C;
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
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 temp_s0;

    sp2C = this;
    func_002CDB60(&sp30, D_0035BDA0, &sp50);
    func_002CDB60(&sp34, D_0035BDB0, &sp54);
    func_002F2410(sp2C, &sp30, &sp34);
    c4sdk_malloc(&sp34, 0);
    c4sdk_malloc(&sp30, 0);
    func_002CDB60(&sp38, D_0035BDB8, &sp58);
    temp_s0 = func_002F2630(func_002F26B0(), &sp38);
    c4sdk_malloc(&sp38, 0);
    func_002F13A0(sp2C->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp3C, D_0035BDC8, &sp5C);
    temp_s0 = func_002F2630(func_002F26B0(), &sp3C);
    c4sdk_malloc(&sp3C, 0);
    func_002F13A0(sp2C->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp40, D_0035BDD8, &sp60);
    temp_s0 = func_002F2630(func_002F26B0(), &sp40);
    c4sdk_malloc(&sp40, 0);
    func_002F13A0(sp2C->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp44, D_0035BDE0, &sp64);
    temp_s0 = func_002F2630(func_002F26B0(), &sp44);
    c4sdk_malloc(&sp44, 0);
    func_002F13A0(sp2C->pad_00 + 0x10, temp_s0);
    func_002CDB60(&sp48, D_0035BDF0, &sp68);
    func_002F15F0(sp2C->pad_00 + 0x10, 0x44C, &sp48, 0);
    c4sdk_malloc(&sp48, 0);
    func_002CDB60(&sp4C, D_0035BE18, &sp6C);
    func_002F15F0(sp2C->pad_00 + 0x10, 0x44D, &sp4C, 0);
    c4sdk_malloc(&sp4C, 0);
    return sp2C;
}
}
