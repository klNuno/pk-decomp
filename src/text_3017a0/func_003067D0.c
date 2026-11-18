#include "common.h"

typedef struct unk_func_003067D0_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_003067D0_0;

s32 func_002D2BC0(s32);
s32 func_00305520(s32, void *);

s32 func_003067D0(unk_func_003067D0_0 *arg0) {
    s32 temp;

    if (arg0->unk_1C != 0) {
        return 0;
    }
    arg0->unk_1C = func_002D2BC0(0x10);
    temp = arg0->unk_1C;
    if (temp != 0) {
        temp = func_00305520(temp, arg0);
    }
    arg0->unk_1C = temp;
    return arg0->unk_1C;
}
