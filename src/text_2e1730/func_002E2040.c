#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2040_0;

typedef struct {
    s32 unk_00[7];
} unk_func_002E2040_1;

void func_002DD690();
u8 func_002DD340();
void func_002DB030();
void func_002DD2F0();

void func_002E2040(unk_func_002E2040_0 *arg0) {
    unk_func_002E2040_1 obj;
    u16 a;
    u16 b;
    u8 flag;

    func_002DD690(&obj, arg0);
    arg0->unk_10 += 4;
    flag = func_002DD340(&obj);
    func_002DB030(arg0, &a);
    func_002DB030(arg0, &b);
    if (flag) {
        func_002DD2F0(&obj, a != b);
    }
}
