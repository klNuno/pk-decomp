#include "common.h"

typedef struct unk_func_002FE990_0 {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
} unk_func_002FE990_0;

unk_func_002FE990_0 *func_002FE990(unk_func_002FE990_0 *arg0, u8 *arg1) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    *(u8 *)((u8 *)arg0 + 0x8) = *arg1;
    arg0->unk_08 = &arg0->unk_04;
    return arg0;
}
