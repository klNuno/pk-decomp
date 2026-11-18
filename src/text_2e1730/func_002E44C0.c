#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E44C0_0;

typedef struct {
    s32 unk_00[6];
} unk_func_002E44C0_1;

void func_002EA580();
void func_002D0DA0();
u8 func_002EA240();
void func_002DC050();
void func_002E9CC0();
void c4sdk_malloc();

void func_002E44C0(unk_func_002E44C0_0 *arg0) {
    unk_func_002E44C0_1 obj;
    s32 val;
    s32 tmp;
    u8 flag;

    func_002EA580(&obj, arg0);
    func_002D0DA0(&val, &tmp);
    arg0->unk_10 += 4;
    flag = func_002EA240(&obj);
    func_002DC050(arg0, &val);
    if (flag) {
        func_002E9CC0(&obj, &val);
    }
    c4sdk_malloc(&val, 0);
}
