/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002062D0_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_002062D0_0;

s32 func_00208B20();
void fn_vGetUltraOperatorPerso();
s32 func_001971C0();
unk_func_002062D0_0 *HIE_fn_hGetSuperObjectObject();
u8 func_001B97E0();
u8 func_001B9BC0();
u8 func_001B9B50();

s32 *func_002062D0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp5C;
    s32 o;
    unk_func_002062D0_0 *obj;
    s32 res;
    s32 temp;

    temp = arg1[-2];
    res = 0;
    fn_vGetUltraOperatorPerso(func_00208B20(temp), arg0, &sp5C);
    if (func_001971C0(sp5C) != 2) {
        obj = NULL;
    } else {
        obj = HIE_fn_hGetSuperObjectObject(sp5C);
    }
    o = obj->unk_1C;
    if (o != 0) {
        switch (temp) {
        case 0x3E:
            res = func_001B97E0(o);
            break;
        case 0x3F:
            res = func_001B9BC0(o);
            break;
        case 0x40:
            res = func_001B9B50(o);
            break;
        }
    }
    *arg2 = res;
    return arg1;
}
