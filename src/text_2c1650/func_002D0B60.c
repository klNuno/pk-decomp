#include "common.h"

typedef struct unk_func_002D0B60_0 {
    u32 unk_00;
    u8 pad_04[8];
    s8 *unk_0C;
} unk_func_002D0B60_0;

s32 func_002D0B60(unk_func_002D0B60_0 **arg0, s8 arg1, u32 arg2) {
    unk_func_002D0B60_0 *p;
    s8 *data;
    u32 len;
    s8 *it;

    p = *arg0;
    len = p->unk_00;
    if (arg2 >= len) {
        return -1;
    }
    data = p->unk_0C;
    for (it = data + arg2; it < data + len; it++) {
        if (arg1 == *it) {
            return it - data;
        }
    }
    return -1;
}
