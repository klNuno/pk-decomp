#include "common.h"

void *malloc(u32);
void func_00133A50(void *);
extern u8 D_0035F920;
extern u8 D_0035F921;
extern void *D_0035F924;
extern void *D_0035F928;
extern u8 D_00367100[];
extern s32 D_00367210[];

void func_00136BB0(u8 arg0) {
    u8 i;

    D_0035F928 = malloc(arg0 * 8);
    D_0035F924 = malloc(arg0 * 8);
    D_0035F921 = arg0;
    D_0035F920 = 1;
    for (i = 0; i < 0xFF; i++) {
        D_00367210[i] = 0;
    }
    func_00133A50(D_00367100);
}
