#include "common.h"

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
} unk_func_0030E080_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    unk_func_0030E080_0 *unk_08;
} unk_func_0030E080_1;

typedef struct {
    u8 pad_00[0x8];
    u32 (*unk_08)(s32, u32);
} unk_func_0030E080_2;

void func_0030E080(unk_func_0030E080_2 *arg0, unk_func_0030E080_1 *arg1, s32 arg2, s32 *arg3) {
    u32 size;
    u32 ret;

    size = arg1->unk_08->unk_0E * arg1->unk_04;
    ret = arg0->unk_08(arg1->unk_00, size);
    if (ret != size) {
        arg1->unk_04 = ret / arg1->unk_08->unk_0E;
    }
    if (arg3 != NULL) {
        if (ret != size) {
            *arg3 = 1;
        } else {
            *arg3 = 0;
        }
    }
}
