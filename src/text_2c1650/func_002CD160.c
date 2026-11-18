#include "common.h"

void __register_global_object();
void c4sdk_malloc();
void func_002CD230();
void func_002CD2A0();
void func_002CD610();
void func_002CD690();
void func_002CDB60();
extern u8 D_0035AB98[];
extern char D_0035ABA0[];
extern s8 D_003604FC;
extern u8 D_007BDF00[];

s32 func_002CD160(s32 arg0, s32 arg1) {
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    u8 sp30[0x100];

    if (D_003604FC == 0) {
        func_002CDB60(D_0035AB98, D_0035ABA0, &sp130);
        __register_global_object(D_0035AB98, func_002CD2A0, D_007BDF00);
        D_003604FC = 1;
    }
    func_002CD610(sp30, arg0);
    func_002CDB60(&sp138, sp30, &sp13C);
    func_002CD230(&sp134, D_0035AB98, &sp138);
    func_002CD690(arg1, &sp134, 0, -1);
    c4sdk_malloc(&sp134, 0);
    c4sdk_malloc(&sp138, 0);
    return 1;
}
