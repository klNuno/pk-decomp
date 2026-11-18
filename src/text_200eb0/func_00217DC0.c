/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00217DC0_0;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
unk_func_00217DC0_0 *HIE_fn_hGetSuperObjectObject();
s32 HIE_fn_hGetSuperObjectFather();
s32 func_001B84B0();
s32 func_001971C0();
void func_001EDBB0();

s32 *func_00217DC0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 obj;
    s32 temp;
    s32 perso;
    s32 so;
    s32 v;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_08;
    if (obj == 0) {
        return arg1;
    }
    v = func_001B84B0(obj);
    switch (temp) {
    case 0x13A:
        so = perso;
        do {
            so = HIE_fn_hGetSuperObjectFather(so);
        } while (so != 0 && func_001971C0(so) != 2);
        arg2[0] = so == 0 ? 0 : (func_001971C0(so) != 2 ? 0 : (s32)HIE_fn_hGetSuperObjectObject(so));
        arg2[3] = 0xB;
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
