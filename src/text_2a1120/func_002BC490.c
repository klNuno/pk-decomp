/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s16 unk_18;
    s16 unk_1A;
    s16 unk_1C;
    s16 unk_1E;
} unk_func_002BC490_0;

extern unk_func_002BC490_0 *D_007B25B0[];

void func_002BC490(s32 arg0, s32 arg1, s16 arg2) {
    unk_func_002BC490_0 *p = D_007B25B0[0];
    if (arg1 == 0x2500) {
        switch (arg0) {
        case 0x2000:
            p->unk_18 = arg2;
            break;
        case 0x2001:
            p->unk_1A = arg2;
            break;
        case 0x2002:
            p->unk_1C = arg2;
            break;
        case 0x2003:
            p->unk_1E = arg2;
            break;
        }
    }
}
