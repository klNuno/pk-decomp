/* profile: opt_noprop */
#include "common.h"

void func_00100DB8();
void func_00100DD0();
void func_00100F48(s32);
void func_00101258();
void func_00101510();
void func_0011B418(char *);
void func_0028A160();
void func_002BFD60();
void func_002CC610();
s32 func_00323000(s32, s32);
extern char D_00350ED0[];
extern s64 D_007B09D0[];
extern s32 D_007B2434[];

void func_00297C20(void) {
    s64 *unk_00;

    D_007B2434[0]++;
    while (func_00323000(1, 0) & 4) {
        if (func_00323000(0, 0x64) != 0) {
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
    unk_00 = D_007B09D0;
    if (*unk_00 != 0) {
        func_002BFD60();
    }
    func_002CC610();
}
