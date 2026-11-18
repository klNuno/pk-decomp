/* profile: o0 */
#include "common.h"

typedef struct unk_func_001D9F80_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001D9F80_0;

s32 func_0027D260(s32, s32, s32 *);
extern unk_func_001D9F80_0 D_003313F0[];

s32 func_001D9F80(s32 arg0) {
    s32 sp2C;
    s32 temp;

    sp2C = 0;
    temp = func_0027D260(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, &sp2C);
    if (temp == 0) {
        return 0;
    }
    return 1;
}
