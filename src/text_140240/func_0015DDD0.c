/* profile: opt_300 */
#include "common.h"

s32 StrICmp(char *, char *);
extern u8 D_0035F974;
extern char *D_00369040[];

u8 func_0015DDD0(char *arg0) {
    s32 i;

    for (i = 0; i < D_0035F974; i++) {
        if (D_00369040[i] != NULL && StrICmp(D_00369040[i], arg0) == 0) {
            return i;
        }
    }
    return 0xFF;
}
