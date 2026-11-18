/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_001A70E0();
void func_002D4F30();
void func_001A7A40();
extern s32 D_0035F53C;

void func_001A7BD0(s32 arg0) {
    s32 temp;

    temp = func_001A70E0(*HIE_fn_hGetSuperObjectObject(arg0));
    if (temp != 0) {
        func_002D4F30(arg0, D_0035F53C);
    }
    func_001A7A40(*HIE_fn_hGetSuperObjectObject(arg0), 0);
}
