/* profile: opt_300_noprop */
#include "common.h"

void func_00308BE0();
void func_00308B80();
s32 func_0031D5F8();
void func_0031D408();
s32 func_0011D738(char *, char *, s32);
char *strcpy(char *, const char *);
extern u8 D_00341FF0[];
extern char D_0035CE88[];
extern char *D_003607B0;
extern s32 *D_003607B4;
extern s32 D_003607B8;
extern s32 D_003607BC;

s32 func_00307CA0(const char *arg0) {
    char *buf;
    s32 *out;

    func_00308BE0(D_003607BC);
    if (D_003607B8 == 1) {
        while (func_0031D5F8(D_00341FF0) != 0) {
        }
    }
    buf = D_003607B0;
    out = D_003607B4;
    strcpy(buf, arg0);
    if (func_0011D738(buf, D_0035CE88, 7) == 0) {
        buf[4] = '1';
    }
    func_0031D408(D_00341FF0, 2, 0, buf, 0x40, out, 4, 0, 0);
    D_003607B8 = 0;
    func_00308B80(D_003607BC);
    return *out;
}
