/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002BC100_0;

typedef struct {
    u8 pad_00[0x18];
    s16 unk_18;
    s16 unk_1A;
    s16 unk_1C;
    s16 unk_1E;
} unk_func_002BC100_1;

void func_002BC1D0(s32, s32, unk_func_002BC100_0 *);
extern unk_func_002BC100_0 D_007B0810;
extern unk_func_002BC100_1 *D_007B25B0[];

static inline void func_002BC100_h(s32 arg0, s32 arg1, s32 val) {
    unk_func_002BC100_1 *p = D_007B25B0[0];

    if (arg1 == 0x2500) {
        switch (arg0) {
        case 0x2000:
            p->unk_18 = val;
            break;
        case 0x2001:
            p->unk_1A = val;
            break;
        case 0x2002:
            p->unk_1C = val;
            break;
        case 0x2003:
            p->unk_1E = val;
            break;
        }
    }
}

void func_002BC100(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg1 == 0x2500) {
        func_002BC100_h(arg0, arg1, arg2[0]);
    } else {
        unk_func_002BC100_0 v = D_007B0810;

        v.unk_00 = arg2[0];
        v.unk_04 = arg2[1];
        v.unk_08 = arg2[2];
        v.unk_0C = arg2[3];
        func_002BC1D0(arg0, arg1, &v);
    }
}
