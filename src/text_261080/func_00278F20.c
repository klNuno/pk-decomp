#include "common.h"

void func_00119548(s32);
void func_002774D0(void *);
void func_00278610();
void func_002788E0(s32);
void func_00278C60(void *, s32, void *, s32);
void func_002793B0(s32);
void func_00279440(void *);
void func_0027AD60(void *);
void func_0027AEE0(s32);
void func_0031A130(s32);
void func_0031A170(s32);
extern s32 D_00360344;
extern s32 D_00360348;
extern s32 D_0036034C;
extern s32 D_0036035C;
extern u8 D_007A81C0[];
extern u8 D_007A81E0[];
extern u8 D_007A82A0[];
extern s32 D_007AB2E0[];

s32 func_00278F20(s32 arg0, s32 arg1) {
    s32 i;

    func_002788E0(arg0);
    func_00278C60(D_007A81E0, D_0036035C, D_007A82A0, arg1);
    func_0027AEE0(0xC80001);
    func_002793B0(D_0036035C);
    func_002774D0(D_007A81C0);
    func_0031A170(D_0036034C);
    func_0031A130(D_0036034C);
    func_0031A170(D_00360348);
    func_0031A130(D_00360348);
    func_0027AD60(D_007A81E0);
    func_00278610();
    func_00279440(D_007A82A0);
    for (i = 0; i < 8; i++) {
        func_00119548(D_007AB2E0[i]);
    }
    return D_00360344;
}
