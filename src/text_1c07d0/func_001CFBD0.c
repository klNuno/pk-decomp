/* profile: o0 */
#include "common.h"

s32 func_001CFBD0(void *arg0, void *arg1) {
    u32 *a;
    u32 *b;

    a = arg0;
    b = arg1;
    return *a > *b ? -1 : (*a < *b ? 1 : 0);
}
