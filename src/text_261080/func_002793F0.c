#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x2C];
    s32 unk_30;
} unk_func_002793F0_0;

s32 func_0010D500(s32, s32, s32, s32 *);
s32 func_0031EA60(s32);

s32 func_002793F0(unk_func_002793F0_0 *arg0, s32 arg1, s32 arg2) {
    s32 err;
    s32 ret;

    if (arg0->unk_00 != 0) {
        ret = func_0010D500(arg2 >> 11, arg1, 1, &err) << 11;
        if (err != 0) {
            ret = -1;
        }
    } else {
        ret = func_0031EA60(arg0->unk_30);
    }
    return ret;
}
