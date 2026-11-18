#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_00279000_0;

void func_00278C30();
s32 func_002D8BB0(s32, s32);

s32 func_00279000(s32 arg0, unk_func_00279000_0 *arg1) {
    while (func_002D8BB0(arg1->unk_08 + 4, arg1->unk_0C - 4) < 0) {
        func_00278C30();
    }
    return 1;
}
