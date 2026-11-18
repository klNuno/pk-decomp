#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
} unk_func_002F8CD0_0;

typedef struct {
    u8 pad_00[0x18];
    u32 unk_18;
    u8 pad_1C[0x18];
    unk_func_002F8CD0_0 *unk_34;
} unk_func_002F8CD0_1;

s32 func_002F8CD0(unk_func_002F8CD0_1 *arg0, s32 arg1) {
    unk_func_002F8CD0_0 *e;
    s32 temp;
    u32 i;

    e = arg0->unk_34;
    if (e == NULL) {
        return 0;
    }
    temp = 0;
    if (arg1 != 0) {
        temp = arg0->unk_18 * 0x18 + 0xC;
        temp += 8;
    }
    temp += 4;
    i = 0;
    while (i < arg0->unk_18) {
        if (e[i].unk_04 != 0) {
            temp += 0x1C;
        }
        i++;
    }
    i = 0;
    while (i < arg0->unk_18) {
        temp += 0xC;
        temp += *e[i].unk_00 + 1;
        if (temp & 1) {
            temp++;
        }
        i++;
    }
    return temp;
}
