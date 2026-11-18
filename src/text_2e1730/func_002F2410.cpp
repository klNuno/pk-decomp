#include "common.h"

struct unk_func_002F2410_0 {
};

typedef struct {
    s32 unk_00;
} unk_func_002F2410_1;

extern "C" {
void func_002CDC10(...);
void func_002E9030(...);
void func_002F1670(...);
void func_002F1B10(...);

u8 *func_002F2410(u8 *volatile arg0, s32 arg1, s32 arg2) {
    unk_func_002F2410_0 a;
    unk_func_002F2410_1 b;
    unk_func_002F2410_0 c = a;

    func_002F1B10(arg0, &c, &b);
    func_002E9030(&b, -1);
    func_002F1670(arg0 + 0x10, arg2);
    func_002CDC10(arg0 + 0x44, arg1);
    return arg0;
}
}
