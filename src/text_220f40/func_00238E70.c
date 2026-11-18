/* profile: o0 */
#include "common.h"

s32 func_00238E70(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;

    a = arg0;
    b = arg1;
    return *b > *a ? -1 : (*b == *a ? 0 : 1);
}
