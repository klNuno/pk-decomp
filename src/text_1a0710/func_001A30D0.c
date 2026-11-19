/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A30D0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001A30D0_0;

unk_func_001A30D0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012DCA0(s32);
void func_0012DDD0(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
void func_001979E0(s32, s32);
void func_00197B50(s32, s32);
s32 func_00197CC0(s32);
s32 func_001987D0(s32);
s32 func_001987F0(s32);
s32 func_00198810(s32);
s32 func_00198840(s32);
void func_001A32F0(s32, s8);
s32 func_001AEF20(s32);
extern s32 D_0035FF68;
extern s32 D_0035FF70;
extern u8 D_005AB7F8[];

void func_001A30D0(s32 arg0) {
    s32 elem;
    s32 i;
    s32 elem2;
    s32 next;
    s32 obj;
    s32 t1;
    s32 t3;
    s8 c;
    s32 t0;
    s32 t2;

    i = 0;
    for (elem = func_001971E0(D_0035FF70), t0 = next = func_0012DCA0(elem); elem != 0; i++, elem = next, t1 = next = func_0012DCA0(elem), (void)t1) {
        if (func_001971C0(elem) == 2 && func_001AEF20(elem) == 0) {
            func_0012DDD0(elem);
            if ((u8)func_00197CC0(HIE_fn_hGetSuperObjectObject(elem)->unk_04)) {
                func_00197B50(D_0035FF68, elem);
            } else {
                func_001979E0(D_0035FF68, elem);
            }
        }
    }
    if (arg0 != 0) {
        c = D_005AB7F8[0];
        func_001A32F0(arg0, c);
        for (i = func_00198840(arg0), t2 = elem2 = func_00198810(arg0); i > 0; i--, t3 = elem2 = func_001987D0(elem2), (void)t3) {
            obj = func_001987F0(elem2);
            func_001A32F0(obj, c);
        }
    }
}
