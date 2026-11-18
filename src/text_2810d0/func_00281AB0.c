/* profile: o0_301 */
#include "common.h"

void strcpy();
s32 func_0027ECD0();

s32 func_00281AB0(char *arg0) {
    s32 ret;
    char buf[0x800];

    ret = 0;
    strcpy(buf, (void *)arg0);
    ret = func_0027ECD0(0, 0, buf, 0, 0);
    if (ret != 0) {
        return 1;
    }
    return 0;
}
