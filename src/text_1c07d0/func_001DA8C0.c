/* profile: opt_300 */
#include "common.h"

void func_0011CBB0(char *, char *);
s32 func_0010CC80(s32);
s32 func_0010C218(u8 *, char *);
extern char D_0034C2A0[];

s32 func_001DA8C0(void) {
    u8 sp10[0x30];
    char sp40[0x70];


    func_0011CBB0(sp40, D_0034C2A0);
    return (func_0010CC80(1) == 2) ? (func_0010C218(sp10, sp40) == 1) : 1;
}
