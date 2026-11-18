/* profile: o0_301_p */
#include "common.h"

void func_00198300(s32);
s32 func_001987D0(s32);
s32 func_001987F0(s32);
s32 func_00198810(s32);
s32 func_00198840(s32);

void func_001985A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 n;
    s32 p;
    s32 data;
    u8 found;
    s32 n2;
    s32 p2;
    s32 data2;
    s32 first2;
    s32 next2;
    s32 first;
    s32 next;
    s32 first3;
    s32 next3;

    n = func_00198840(arg1);
    first = p = func_00198810(arg1);
    while (n > 0) {
        found = 0;
        data = func_001987F0(p);
        if (data == arg2) {
            found = 1;
        } else {
            n2 = func_00198840(arg2);
            first2 = p2 = func_00198810(arg2);
            while (n2 > 0) {
                data2 = func_001987F0(p2);
                if (data2 == data) {
                    found = 1;
                }
                n2--;
                next2 = p2 = func_001987D0(p2);
                (void)next2;
            }
        }
        if ((u8)found == 0) {
            func_00198300(data);
        }
        n--;
        next = p = func_001987D0(p);
    }
    found = 0;
    n2 = func_00198840(arg2);
    first3 = p2 = func_00198810(arg2);
    while (n2 > 0) {
        data2 = func_001987F0(p2);
        if (data2 == arg1) {
            found = 1;
        }
        n2--;
        next3 = p2 = func_001987D0(p2);
    }
    if ((u8)found == 0) {
        func_00198300(arg1);
    }
}
