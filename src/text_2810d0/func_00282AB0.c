/* profile: o0_301_p */
#include "common.h"

void func_0011CBB0(char *, char *, ...);
void func_0027BC00();
void func_0027C5C0(s32, s32, s32);
s32 func_002808A0();
s32 func_00280BC0();
s32 func_00280E10();
s32 func_00281300(char *);
s32 func_00281720(s32, s32, s32, s32, s32, s32, s32);
s32 func_00281990();
s32 func_002819F0();
void func_00281A90();
s32 func_00281AB0(char *);
s32 func_00281B80(s32, s32);
s32 func_00281C80();
extern char D_00350548[];

s32 func_00282AB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    char buf[0x200];
    s32 unused = 0;
    s32 done = 0;
    s32 fail = 0;
    s32 res;

    func_0011CBB0(buf, D_00350548, arg2, arg2);
    do {
        done = 0;
        fail = 0;
        res = 0;
        if (!func_00281990()) {
            if (func_002808A0() == 4 && func_00280E10() == 2) {
                return 0;
            }
        } else {
            func_00281A90();
        }
        if (!func_002819F0() && !func_00280BC0() && func_00280E10() == 2) {
            return 0;
        }
        if (!func_00281C80() && func_002819F0() && func_00281990() && func_00281B80(0, 0) == 2 && func_00280E10() == 2) {
            return 0;
        }
        if (func_002819F0() && func_00281990() && func_00281C80()) {
            if (func_00281AB0(buf)) {
                if ((res = func_00281300(buf)) == 2) {
                    if ((res = func_00280E10()) == 2) {
                        return 0;
                    }
                } else if (res != 4) {
                    res = 3;
                }
            }
            if (res != 3) {
                res = func_00281720(arg0, arg1, arg2, arg3, arg4, arg5, 0);
                func_00281A90();
                func_0027BC00();
                if (res == 1) {
                    func_0027C5C0(arg0, arg1, arg2);
                    return 1;
                }
                if (res == 2 && func_00280E10() == 2) {
                    return 0;
                }
            }
        }
    } while (!fail && !done);
    return 0;
}
