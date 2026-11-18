/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001E7540_0 {
    u8 pad_00[0x64];
    u8 unk_64;
    u8 unk_65;
    u8 pad_66[2];
} unk_func_001E7540_0;

typedef struct unk_func_001E7540_1 {
    unk_func_001E7540_0 *unk_00;
    u8 unk_04;
    u8 unk_05;
} unk_func_001E7540_1;

typedef struct unk_func_001E7540_2 {
    u8 pad_00[0x10];
    unk_func_001E7540_1 *unk_10;
} unk_func_001E7540_2;

void func_001E7270(unk_func_001E7540_2 *, u8, s32, s32, s32);

void func_001E7540(unk_func_001E7540_2 *arg0, u8 arg1) {
    unk_func_001E7540_0 *p;
    u8 i;
    unk_func_001E7540_0 *prev;
    u8 n;
    s32 flag;

    n = arg0->unk_10->unk_04;
    if ((s32)arg0->unk_10->unk_05 != 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag) {
        for (p = arg0->unk_10->unk_00, i = 0; i < n; i++, prev = p, p = prev + 1) {
            if (p->unk_64 && p->unk_65 > arg1) {
                func_001E7270(arg0, i, 0, 0, 0);
                arg0->unk_10->unk_05--;
            }
        }
    }
}
