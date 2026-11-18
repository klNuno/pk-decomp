/* profile: opt_300 */
#include "common.h"

void *memcpy(void *, void *, u32);
extern s32 D_0035FB64;
extern s32 D_0035FB68;
extern void *D_0036A450[];

s32 func_00169A40(s16 arg0, void *arg1) {
    void *temp_v0;

    D_0035FB68 = 1;
    while (D_0035FB64 != 0) {
    }
    temp_v0 = D_0036A450[arg0];
    if (temp_v0 == NULL) {
        return 0;
    }
    memcpy(arg1, temp_v0, 0x60);
    D_0035FB68 = 0;
    return 1;
}
