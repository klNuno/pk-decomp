#include "common.h"

void func_0031A340(s32);
void func_0031A360(s32);
void func_0031D408(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern u8 D_00342020[];
extern s32 *D_003607C0;
extern s32 D_003607C8;

void func_00308090(s32 arg0, s32 arg1, s32 arg2) {
    s32 *buf;

    func_0031A360(D_003607C8);
    buf = D_003607C0;
    buf[0] = arg0;
    buf[1] = arg1;
    buf[2] = arg2;
    func_0031D408(D_00342020, 4, 0, buf, 0xC, 0, 0, 0, 0);
    func_0031A340(D_003607C8);
}
