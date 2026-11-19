/* profile: opt_noprop */
#include "common.h"

void func_00100DB8();
void func_00100DD0();
void func_00100F48();
void func_00101258();
void func_00101510();
void func_0011B418();
void func_0028A160();
void func_002BFD60();
void func_002CC610();
s32 func_00323000();
extern char D_00350ED0[];
extern char D_00350F20[];
extern char D_00350F40[];
extern s64 D_007B09D0[];
extern s32 D_007B2434[];

void func_00297B20(void) {
    s32 temp;
    s64 *p;

    D_007B2434[0]++;
    while (func_00323000(1, 0) & 4) {
        if (func_00323000(0, 0x64)) {
            func_0011B418(D_00350ED0);
            func_00100DD0();
            func_00101510();
            func_00100DB8();
            func_00101258();
            func_00100F48(0);
            break;
        }
    }
    func_0028A160();
    p = D_007B09D0;
    if (*p != 0) {
        func_002BFD60();
    }
    func_002CC610();
    temp = func_00323000(0, 0);
    if (temp) {
        func_0011B418(D_00350F20);
    }
    if (temp) {
        func_0011B418(D_00350F40);
    }
}
