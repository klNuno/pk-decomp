#include "common.h"

extern s32 D_003600F4;
extern char D_005FFA40[];
char *strcpy(char *, const char *);
void func_0011F058();

void func_001DB950(char *arg0) {
    strcpy(D_005FFA40, arg0);
    func_0011F058(D_005FFA40);
    D_003600F4 = 1;
}
