/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectFather(s32 *);
s32 *HIE_fn_hGetSuperObjectObject(s32 *);
s32 func_001971C0(s32 *);
u8 func_0019ABE0(s32);
extern s32 *D_0035FF70;

u8 func_001A2FF0(s32 *arg0) {
    s32 ret;
    s32 ok;

    ret = 0;
    ok = 1;
    if (HIE_fn_hGetSuperObjectFather(arg0) != D_0035FF70 && HIE_fn_hGetSuperObjectFather(HIE_fn_hGetSuperObjectFather(arg0)) != D_0035FF70) {
        ok = 0;
    }
    if (ok) {
        if (func_0019ABE0((func_001971C0(arg0) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(arg0))[1]) == 1) {
            ret = 1;
        }
    }
    return ret;
}
