/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BBE50_1 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BBE50_1;

typedef struct unk_func_001BBE50_0 {
    unk_func_001BBE50_1 *unk_00;
    u8 pad_04[4];
    s8 unk_08;
} unk_func_001BBE50_0;

s32 WPG_fn_lGetLinkWeight(unk_func_001BBE50_1 *, s32, s32, s32 *);
s32 func_001BBA90(unk_func_001BBE50_0 *, s32);

s32 func_001BBE50(unk_func_001BBE50_0 *arg0, s32 arg1) {
    s32 n;
    s32 a;
    s32 b;
    s32 w;

    if (arg0 != NULL && arg0->unk_00 != NULL) {
        n = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            arg1 %= n;
            if (arg1 < 0) {
                arg1 += n;
            }
        }
        if (arg1 >= 0 && arg1 < n) {
            a = func_001BBA90(arg0, arg1);
            b = func_001BBA90(arg0, arg1 + 1);
            if (b != 0) {
                if (WPG_fn_lGetLinkWeight(arg0->unk_00, a, b, &w) == -1) {
                    return 0;
                }
                return w;
            }
        }
    }
    return 0;
}
