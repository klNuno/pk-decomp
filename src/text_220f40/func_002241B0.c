/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} unk_func_002241B0_0;

s32 func_00139040(void *);

u8 func_002241B0(unk_func_002241B0_0 *arg0) {
    s32 ret;
    s32 ok;
    void *temp;

    ret = 0;
    ok = 0;
    temp = arg0->unk_04;
    if (temp != NULL && temp != NULL) {
        ok = 1;
    }
    if (ok && func_00139040(temp) == 1) {
        ret = 1;
    }
    return ret;
}
