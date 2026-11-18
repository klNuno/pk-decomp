/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 *unk_04;
} unk_func_001ECAB0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
s32 func_00199130(s32);
void func_001EC3E0(unk_func_001ECAB0_0 *, s32);

void func_001ECAB0(unk_func_001ECAB0_0 *arg0, s32 arg1) {
    u8 i;
    s32 obj;
    u8 n;
    s32 *buf;
    s32 r;

    n = 0;
    buf = HMU_fn_p_vMalloc(arg0->unk_00, 1);
    for (i = 0; i < arg0->unk_00; i++) {
        obj = arg0->unk_04[i];
        r = func_00199130(*HIE_fn_hGetSuperObjectObject(obj));
        if (r == arg1) {
            buf[n++] = obj;
        }
    }
    arg0->unk_00 = 0;
    for (i = 0; i < n; i++) {
        func_001EC3E0(arg0, buf[i]);
    }
    HMU_fn_vFree(&buf, 1);
}
