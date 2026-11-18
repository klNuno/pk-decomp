#include "common.h"

void func_0011CBB0(char *, char *, s32);
void func_0011B418(char *);
extern char D_0034CA00[];
extern char D_0034CA10[];

char *itoa(s32 arg0, char *arg1, s32 arg2) {
    if (arg2 == 10) {
        func_0011CBB0(arg1, D_0034CA00, arg0);
        return arg1;
    }
    func_0011B418(D_0034CA10);
    return NULL;
}
