/* profile: o0_301_p */
#include "common.h"

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 fn_ucIsAnAlwaysObject(s32);
s32 func_0012DCA0(s32);
void func_0012DDD0(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
void func_00197200(s32);
void func_00197450(s32, s32);
s32 func_001BDC10(s32);

#define OBJ(x) (func_001971C0(x) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(x))

void func_00196EB0(s32 arg0) {
    s32 node;
    s32 next;
    s32 copy;
    s32 i;
    s32 first;

    i = 0;
    node = func_001971E0(arg0);
    first = next = func_0012DCA0(node);
    while (node != 0) {
        func_00196EB0(node);
        i++;
        node = next;
        copy = next = func_0012DCA0(node);
        (void)copy;
    }
    func_0012DDD0(arg0);
    switch (func_001971C0(arg0)) {
    case 2:
        if (!fn_ucIsAnAlwaysObject(OBJ(arg0))) {
            if (func_001BDC10(OBJ(arg0))) {
                func_00197450(OBJ(arg0), 1);
            } else {
                func_00197200(arg0);
            }
        }
        break;
    }
    if (func_001971C0(arg0) == 2 && !fn_ucIsAnAlwaysObject(OBJ(arg0))) {
        if (func_001BDC10(OBJ(arg0))) {
            func_00197450(OBJ(arg0), 1);
        }
    }
}
