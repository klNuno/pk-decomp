/* profile: o0_301 */
#include "common.h"

s32 func_00158BD0(s32);
s32 func_00158C30(s32);
void func_0015A820(s32);
void func_0017E950();
void func_001A6810();
void func_0027FAA0();
void func_002813E0(s32);
extern s8 D_0035F534;
extern u8 D_005AB7EB[];
extern s32 D_005AB800[];

void func_001A6F00(void) {
    func_0017E950();
    func_0027FAA0();
    func_002813E0(0);
    if (D_005AB7EB[0] == 0) {
        func_0015A820(D_005AB800[0]);
        if ((func_00158BD0(0x1000) && func_00158C30(0x10)) || (func_00158C30(0x1000) && func_00158BD0(0x10))) {
            D_0035F534 = 1 - D_0035F534;
        }
        func_001A6810();
    }
}
