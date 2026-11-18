/* profile: o0_301 */
#include "common.h"

void func_0011B418();
void func_0011CBB0();
u32 func_0011D3F8();
void func_0011D8F0(char *, const char *, s32);
void *memset();
char *strcpy();
extern char D_0034F330[];
extern char D_0034F340[];
extern char D_0034F348[];
extern char D_0034F350[];
extern char D_0034F360[];
extern char D_007AEB00[];

char *func_0027BC20(char *arg0) {
    if (func_0011D3F8(arg0) < 9) {
        func_0011CBB0(D_007AEB00, D_0034F330, D_0034F340, D_0034F348, D_0034F350, arg0);
        return D_007AEB00;
    }
    func_0011B418(D_0034F360, arg0);
    func_0011D8F0(D_007AEB00, arg0, 8);
    strcpy(arg0, D_007AEB00);
    memset(D_007AEB00, 0, 0x15);
    func_0011CBB0(D_007AEB00, D_0034F330, D_0034F340, D_0034F348, D_0034F350, arg0);
    return D_007AEB00;
}
