/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001C65D0(s32, s32, s32, s32, s32, s32, f32);
void func_001C6BD0(s32, s32);
s32 *func_001E62D0(s32, s32 *);
void func_001E6970(s32, s32, u8);
s32 func_001E6A60(s32, s32);
void func_001E6B50(s32, s32, s32);
s32 func_001E6C40(s32, s32);

s32 *func_001F0E80(s32 arg0, s32 *arg1) {
    s32 temp1;
    s32 temp0;
    s64 temp2;

    temp1 = arg1[-2];
    arg1 = func_001E62D0(arg0, arg1);
    temp0 = func_001E6C40(0, arg0);
    func_001C6BD0(*HIE_fn_hGetSuperObjectObject(arg0), 0);
    switch (temp1) {
    case 1:
        func_001E6970(0, arg0, func_001C65D0(arg0, temp0, 0, 0, 0, 0, 0.0f));
        break;
    case 2:
        temp2 = func_001E6A60(1, arg0);
        func_001E6970(0, arg0, func_001C65D0(arg0, temp0, 0, 0, 0, temp2, 0.0f));
        break;
    }
    func_001E6B50(1, arg0, temp0);
    return arg1;
}
