/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BBBE0_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BBBE0_0;

typedef struct unk_func_001BBBE0_1 {
    unk_func_001BBBE0_0 *unk_00;
    u8 pad_04[4];
    s8 unk_08;
} unk_func_001BBBE0_1;

s32 WPG_fn_lGetLinkCapabilities(unk_func_001BBBE0_0 *, s32, s32, s32 *);
s32 func_001BBA90(unk_func_001BBBE0_1 *, s32);

s32 func_001BBBE0(unk_func_001BBBE0_1 *arg0, s32 arg1) {
    s32 caps;
    s32 n;
    s32 to;
    s32 from;

    if (arg0 != NULL && arg0->unk_00 != NULL) {
        n = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            arg1 %= n;
            if (arg1 < 0) {
                arg1 += n;
            }
        }
        if (arg1 >= 0 && arg1 < n) {
            from = func_001BBA90(arg0, arg1);
            to = func_001BBA90(arg0, arg1 + 1);
            if (to != 0) {
                if (WPG_fn_lGetLinkCapabilities(arg0->unk_00, from, to, &caps) == -1) {
                    return 0;
                }
                return caps;
            }
        }
    }
    return 0;
}
