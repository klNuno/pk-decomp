/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001CA900_2 {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_func_001CA900_2;

typedef struct unk_func_001CA900_0 {
    u8 pad_00[0xC];
    unk_func_001CA900_2 **unk_0C;
    u8 *unk_10;
    u8 pad_14[0x10];
    u8 unk_24;
} unk_func_001CA900_0;

typedef struct unk_func_001CA900_1 {
    u8 pad_00[0xC];
} unk_func_001CA900_1;

unk_func_001CA900_1 *func_001CBDA0(unk_func_001CA900_2 *, s32, s32);
void func_001CA0A0(unk_func_001CA900_1 *, s32, s32);
u8 func_001CA430(unk_func_001CA900_1 *);

void func_001CA900(s32 arg0, unk_func_001CA900_0 *arg1) {
    unk_func_001CA900_1 *base;
    u8 count;
    u8 i;

    base = func_001CBDA0(*arg1->unk_0C, 0, 0);
    if (base != 0) {
        count = (*arg1->unk_0C)->unk_5E;
        for (i = arg1->unk_24; i < count; i++) {
            if (arg1->unk_10[i] == 0) {
                func_001CA0A0(&base[i], 0, arg0);
                arg1->unk_10[i] = func_001CA430(&base[i]);
            } else if (arg1->unk_10[i] != 0xFF) {
                arg1->unk_10[i] = (s8)arg1->unk_10[i] - 1;
            }
        }
        arg1->unk_24 = 0;
    }
}
