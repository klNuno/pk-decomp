#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_002F1670_0;

typedef struct {
    s32 unk_00;
} unk_func_002F1670_1;

void func_002F1B10(u8 *, unk_func_002F1670_0 *, unk_func_002F1670_1 *);
void func_002E9030(unk_func_002F1670_1 *, s32);
void func_002F1B30(u8 *, unk_func_002F1670_0 *, unk_func_002F1670_1 *);
void func_002E9650(unk_func_002F1670_1 *, s32);
void func_002CDC10(u8 *, s32);

u8 *func_002F1670(u8 *volatile arg0, s32 arg1) {
    unk_func_002F1670_0 a;
    unk_func_002F1670_0 b;
    unk_func_002F1670_0 c;
    unk_func_002F1670_1 r1;
    unk_func_002F1670_0 temp;
    unk_func_002F1670_1 r2;
    unk_func_002F1670_0 temp2;
    unk_func_002F1670_1 r3;
    unk_func_002F1670_0 temp3;

    temp = a;
    func_002F1B10(arg0, &temp, &r1);
    func_002E9030(&r1, -1);
    temp2 = b;
    func_002F1B30(arg0 + 0x10, &temp2, &r2);
    func_002E9650(&r2, -1);
    temp3 = c;
    func_002F1B30(arg0 + 0x20, &temp3, &r3);
    func_002E9650(&r3, -1);
    func_002CDC10(arg0 + 0x30, arg1);
    return arg0;
}
