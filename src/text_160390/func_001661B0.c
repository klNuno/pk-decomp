/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001661B0_0 {
    u8 pad_00[4];
    s8 unk_04;
    u8 pad_05[3];
    u32 unk_08;
} unk_func_001661B0_0;

typedef struct unk_func_001661B0_1 {
    u8 pad_00[0x10];
    s32 *unk_10;
    u32 unk_14;
} unk_func_001661B0_1;

typedef struct unk_func_001661B0_2 {
    u8 pad_00[0x4C];
    unk_func_001661B0_1 *unk_4C;
    u8 pad_50[0x34];
    s32 unk_84;
    unk_func_001661B0_0 unk_88;
} unk_func_001661B0_2;

s32 func_001661B0(unk_func_001661B0_2 *arg0) {
    s32 result = 0;
    unk_func_001661B0_0 *s;
    unk_func_001661B0_1 *u;
    u32 flags;

    if (arg0 != 0) {
        if (arg0->unk_84 != 0) {
            s = &arg0->unk_88;
            if (s != 0 && s->unk_04 != 2 && s->unk_04 != 6 && s->unk_04 != 8) {
                result = 1;
            }
        } else {
            u = arg0->unk_4C;
            if (u != 0 && u->unk_10 != 0 && *u->unk_10 != 0 && &arg0->unk_88 != 0) {
                flags = u->unk_14;
                if ((flags & 2) == 2 || (flags & 0x100) == 0x100 || (arg0->unk_88.unk_08 & 0x40)) {
                    result = 0;
                } else if ((flags & 8) == 8 || (flags & 0x20) == 0x20) {
                    result = 1;
                } else if (arg0->unk_88.unk_08 & 0x20) {
                    result = 1;
                }
            }
        }
    }
    return result;
}
