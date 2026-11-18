/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001E71B0_2 {
    u8 pad_00[0x64];
    u8 unk_64;
    u8 pad_65[3];
} unk_func_001E71B0_2;

typedef struct unk_func_001E71B0_1 {
    unk_func_001E71B0_2 *unk_00;
    u8 unk_04;
    u8 unk_05;
} unk_func_001E71B0_1;

typedef struct unk_func_001E71B0_0 {
    u8 pad_00[0x10];
    unk_func_001E71B0_1 *unk_10;
} unk_func_001E71B0_0;

u8 func_001E71B0(unk_func_001E71B0_0 *arg0) {
    u8 n;
    u8 i;
    unk_func_001E71B0_2 *p;
    unk_func_001E71B0_2 *temp;

    n = arg0->unk_10->unk_04;
    if (arg0->unk_10->unk_05 < n) {
        p = arg0->unk_10->unk_00;
        for (i = 0; i < n; i++, temp = p, p = temp + 1) {
            if (!p->unk_64) {
                return i;
            }
        }
    }
    return n;
}
