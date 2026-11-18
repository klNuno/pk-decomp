/* profile: o0_301 */
#include "common.h"

char *strcpy(char *, const char *);
void func_0011CBB0(char *, char *, ...);
extern s32 D_0035F5DC;
extern char D_005FFA40[];
extern char D_0034EBE0[];
extern char D_0034EBE8[];
extern char D_0034EBF0[];
extern char D_0034EBF8[];
extern char D_007A7E60[];
extern char D_007A7F60[];

char *func_00273F50(char *arg0) {
    char *temp;
    char *temp2;
    char buf[0x100];

    strcpy(buf, arg0);
    if (D_0035F5DC != 0) {
        temp = D_005FFA40;
    } else {
        temp = D_0034EBE0;
    }
    func_0011CBB0(D_007A7E60, D_0034EBE8, temp, D_0034EBF0);
    temp2 = D_007A7E60;
    func_0011CBB0(D_007A7F60, D_0034EBF8, temp2, buf);
    return D_007A7F60;
}
