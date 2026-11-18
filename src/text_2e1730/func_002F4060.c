#include "common.h"

typedef struct unk_func_002F4060_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002F4060_0;

typedef struct unk_func_002F4060_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F4060_1;

void func_002F44A0();
void func_002F4220();
s32 func_002F4210();
void func_002F4200();
s32 func_002D2BC0(s32);
s32 func_002F4B70(s32, s32, s32, s32, s32, s32, s32);
void func_002CDC10(unk_func_002F4060_1 *, s32);
void func_002F4800(unk_func_002F4060_1 *, u8 *, unk_func_002F4060_1 *);
void c4sdk_malloc(unk_func_002F4060_1 *, s32);

s32 func_002F4060(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    unk_func_002F4060_1 res;
    unk_func_002F4060_1 pair;
    unk_func_002F4060_0 *end;
    unk_func_002F4060_0 *it;
    s32 tmp;
    s32 val;
    unk_func_002F4060_0 *found;
    s32 p;
    s32 t;

    func_002F44A0(&tmp, arg0 + 4, arg1);
    func_002F4220(&it, &tmp);
    found = it;
    func_002F4200(&end, func_002F4210(arg0 + 4));
    if (found == end) {
        val = 0;
    } else {
        val = found->unk_10;
    }
    if (val != 0) {
        return val;
    }
    t = func_002D2BC0(0x18);
    p = t;
    if (t != 0) {
        p = func_002F4B70(t, arg1, arg3, arg4, arg2, arg5, arg6);
    }
    func_002CDC10(&pair, arg1);
    pair.unk_04 = p;
    func_002F4800(&res, arg0 + 4, &pair);
    c4sdk_malloc(&pair, 0);
    return p;
}
