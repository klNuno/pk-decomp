/* profile: o0_301 */
#include "common.h"

void func_0011CBB0();
s32 func_0019C070();
void func_001E6190();
char *strcpy(char *, const char *);
extern char *(*D_00337190[])();
extern char D_0034EBD8[];
extern char D_0034EBE0[];
extern char D_0034EBE8[];
extern char D_0034EBF0[];
extern char D_0034EBF8[];
extern s32 D_0035F5DC;
extern char D_005FFA40[];
extern char D_007A7E60[];
extern char D_007A7F60[];

char *func_00273E10(s32 arg0, s32 arg1) {
    char *dir;
    char *name;
    char *p;
    char *b;
    char *a;
    char buf[0x100];

    name = D_00337190[arg0](arg1);
    if (func_0019C070(2)) {
        func_001E6190(name, D_0034EBD8);
    }
    a = name;
    b = a;
    strcpy(buf, b);
    if (D_0035F5DC) {
        dir = D_005FFA40;
    } else {
        dir = D_0034EBE0;
    }
    func_0011CBB0(D_007A7E60, D_0034EBE8, dir, D_0034EBF0);
    p = D_007A7E60;
    func_0011CBB0(D_007A7F60, D_0034EBF8, p, buf);
    return D_007A7F60;
}
