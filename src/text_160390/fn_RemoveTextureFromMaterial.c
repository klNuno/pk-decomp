#include "common.h"

void func_0011B418();
extern s32 D_0035FC18;
extern char D_003493C0[];
extern char D_00349400[];

void fn_RemoveTextureFromMaterial(void) {
    if (D_0035FC18++ < 10) {
        func_0011B418(D_003493C0, D_00349400);
    }
}
