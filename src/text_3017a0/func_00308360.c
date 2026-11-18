/* profile: opt_300 */
#include "common.h"

extern char D_0035CE90[];
extern char D_0035CEB0[];
void func_0011CBB0();
void func_0011B418();

void func_00308360(s32 arg0, s32 arg1, s32 arg2) {
    char sp10[0x130];

    func_0011CBB0(sp10, D_0035CE90, arg1, arg2, arg0);
    func_0011B418(D_0035CEB0);
    func_0011B418(sp10);
    for (;;) {
    }
}
