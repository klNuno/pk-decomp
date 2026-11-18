/* profile: o0_301 */
#include "common.h"

void Mmg_fn_v_SetModeAlloc(u8, s32, s32);
void *fn_p_vGenAlloc(u32, s32);
void func_001D66D0(s32, char *);
void *memset(void *, s32, u32);
extern char D_0034BE00[];
extern u8 D_0035F574;

void *SAV2_fn_p_vMalloc(u32 arg0) {
    void *temp;
    Mmg_fn_v_SetModeAlloc(D_0035F574, 0, 0);
    temp = fn_p_vGenAlloc(arg0, 0);
    if (temp == 0) {
        func_001D66D0(0, D_0034BE00);
    } else {
        memset(temp, 0, arg0);
    }
    return temp;
}
