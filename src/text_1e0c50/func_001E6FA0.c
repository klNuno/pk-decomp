/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001E6FA0_0 {
    u8 pad_00[0x64];
    u8 unk_64;
    u8 unk_65;
    u8 pad_66[2];
} unk_func_001E6FA0_0;

typedef struct unk_func_001E6FA0_1 {
    unk_func_001E6FA0_0 *unk_00;
    u8 unk_04;
    u8 unk_05;
} unk_func_001E6FA0_1;

typedef struct unk_func_001E6FA0_2 {
    u8 pad_00[0x10];
    unk_func_001E6FA0_1 *unk_10;
} unk_func_001E6FA0_2;

u8 func_001E6FA0(unk_func_001E6FA0_2 *arg0, u8 arg1) {
    unk_func_001E6FA0_0 *p;
    u8 i;
    unk_func_001E6FA0_0 *q;
    u8 count;
    s32 enabled;

    count = arg0->unk_10->unk_04;
    if (arg0->unk_10->unk_05 != 0) {
        enabled = 1;
    } else {
        enabled = 0;
    }
    if (enabled) {
        p = arg0->unk_10->unk_00;
        for (i = 0; i < count; i++, q = p, p = q + 1) {
            if (p->unk_64 && p->unk_65 == arg1) {
                return i;
            }
        }
    }
    return count;
}
