/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015E750_0 {
    u8 pad_00[8];
    u8 *unk_08;
} unk_func_0015E750_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00348D40[];
extern u8 D_0035F3F8;
extern u8 D_0035F9B0;
extern s16 D_0035F9B4;
extern unk_func_0015E750_0 *D_0035F9C0[2];

static inline s32 func_0015E750_inline0(void) {
    if (D_0035F9B0 == 0) {
        Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 4, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
        return 0;
    }
    return 1;
}

static inline s32 func_0015E750_inline1(unk_func_0015E750_0 *arg0) {
    s16 i;
    unk_func_0015E750_0 **p;

    if (arg0 != NULL && func_0015E750_inline0()) {
        i = D_0035F9B4 - 1;
        p = &D_0035F9C0[i];
        for (; i >= 0; i--, p--) {
            if (*p == arg0) {
                return 1;
            }
        }
    }
    return 0;
}

u8 func_0015E750(unk_func_0015E750_0 *arg0) {
    if (func_0015E750_inline0()) {
        if (func_0015E750_inline1(arg0)) {
            *arg0->unk_08 &= ~2;
            return 1;
        }
    }
    return 0;
}
