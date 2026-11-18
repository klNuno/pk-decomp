/* profile: o1_p */
#include "common.h"

extern char *D_007B0064[];

void func_00280180(void);
void func_0011CBB0(char *, char *, s32);
void func_00280270(char *, f32);
void func_00162A40(void);
void func_0017E8D0(void);
s32 func_0027FF10(void);
s32 func_00281C80(void);

s32 func_002810D0(void) {
    char buf[0xE0];
    s32 ret;
    char *src;

    func_00280180();
    src = D_007B0064[0];
    func_0011CBB0(buf, src, 0x140);
    func_00280270(buf, 450.0f);
    func_00162A40();
    func_0017E8D0();
    func_00280270(buf, 450.0f);
    func_00162A40();
    func_00280180();
    do {
        func_0017E8D0();
        func_00280270(buf, 450.0f);
        func_00162A40();
    } while ((ret = func_0027FF10()) == 0 && func_00281C80() == 0);
    if (func_00281C80() != 0) {
        ret = 1;
    }
    if (ret == 4) {
        return 0;
    }
    return 3;
}
