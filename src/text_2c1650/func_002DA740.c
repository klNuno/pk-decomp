/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002DA740_0;

void func_002CFEF0();
unk_func_002DA740_0 *func_002D9BF0();
unk_func_002DA740_0 **func_002D9C00();
s32 func_002DA430();

u8 func_002DA740(s32 arg0) {
    unk_func_002DA740_0 *it;
    u8 ok;
    unk_func_002DA740_0 *e;

    ok = 1;
    it = *func_002D9C00(arg0);
    while (e = func_002D9BF0(arg0), it != e) {
        ok = func_002DA430(it->unk_10) && ok;
        func_002CFEF0(&it);
    }
    return ok;
}
