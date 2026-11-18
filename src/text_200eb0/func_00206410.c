/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00206410_0;

s32 func_00208B20(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
unk_func_00206410_0 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_00197E40(s32);

s32 *func_00206410(s32 arg0, s32 *arg1, s32 *arg2) {
    unk_func_00206410_0 *obj;
    s32 temp;
    s32 sp3C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp), arg0, &sp3C);
    if (func_001971C0(sp3C) != 2) {
        obj = NULL;
    } else {
        obj = HIE_fn_hGetSuperObjectObject(sp3C);
    }
    *arg2 = func_00197E40(obj->unk_04) == 1;
    return arg1;
}
