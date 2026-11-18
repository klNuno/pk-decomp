/* profile: o0_301 */
#include "common.h"

char *strcpy(void *, void *);
extern s32 D_003603BC;
extern char D_0034F4C8[];
extern char D_007AEBC0[][0x21];

s32 func_0027F060(s32 arg0, char *arg1) {
    if (arg0 >= D_003603BC || D_003603BC <= 0) {
        strcpy(arg1, D_0034F4C8);
        return -1;
    } else {
        strcpy(arg1, (void *)D_007AEBC0[arg0]);
        return 0;
    }
}
