#include "common.h"

extern char D_00349198[];
extern u32 D_0035FA40;
extern s32 D_0035FA3C;
extern s32 D_0035FA38;
s8 func_0011F0D0(s8);
s32 func_0011DB00(char *, char *);

void func_00162AB0(char *arg0) {
    char buf[0x100];
    s32 i;

    if (arg0 != NULL) {
        for (i = 0; arg0[i] != 0; i++) {
            buf[i] = func_0011F0D0(arg0[i]);
        }
        buf[i] = 0;
        if ((func_0011DB00(buf, D_00349198) ? 1 : 0) != 0) {
            D_0035FA40 = 0x11E1A300;
        } else {
            D_0035FA40 = 0x1E;
        }
    } else if (D_0035FA40 < 0x1E) {
        D_0035FA40 = 0x1E;
    }
    D_0035FA3C = 0;
    D_0035FA38 = 0;
}
