#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002F4230_0;

void func_002F44A0();
void func_002F4220();
s32 func_002F4210();
void func_002F4200();
s32 func_002F4AC0();

s32 func_002F4230(u8 *arg0, s32 arg1) {
    unk_func_002F4230_0 *end;
    unk_func_002F4230_0 *it;
    s32 tmp;
    s32 val;
    unk_func_002F4230_0 *found;

    func_002F44A0(&tmp, arg0 + 4, arg1);
    func_002F4220(&it, &tmp);
    found = it;
    func_002F4200(&end, func_002F4210(arg0 + 4));
    if (found == end) {
        val = 0;
    } else {
        val = found->unk_10;
    }
    if (val == 0) {
        return 0;
    }
    return func_002F4AC0(val);
}
