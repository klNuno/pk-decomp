/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00167160_0 {
    u8 pad_00[0x4];
    s16 unk_04;
} unk_func_00167160_0;

typedef struct unk_func_00167160_1 {
    u8 pad_00[0x10];
    unk_func_00167160_0 **unk_10;
    u8 pad_14[0xC];
    s16 unk_20;
} unk_func_00167160_1;

typedef struct unk_func_00167160_2 {
    u8 pad_00[0x4];
    unk_func_00167160_1 *unk_04;
    u8 pad_08[0x4];
    s32 unk_0C;
    s32 unk_10;
} unk_func_00167160_2;

void func_00167CC0(unk_func_00167160_2 *, s16);
void func_00167AE0(unk_func_00167160_2 *, s16);

void func_00167160(unk_func_00167160_2 *arg0, s16 arg1) {
    unk_func_00167160_0 *p;
    s32 i;

    p = arg0->unk_04->unk_10[arg1];
    if (!(arg0->unk_0C & 0x40)) {
        for (i = 0; i < p->unk_04; i++) {
        }
        return;
    }
    if (!(arg0->unk_0C & 0x80)) {
        for (i = 0; i < p->unk_04; i++) {
            if (arg0->unk_10 & 0x4000000) {
                func_00167CC0(arg0, arg0->unk_04->unk_20);
            } else {
                func_00167AE0(arg0, arg0->unk_04->unk_20);
            }
        }
    }
}
