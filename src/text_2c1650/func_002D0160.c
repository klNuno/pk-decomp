#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D0160_0;

s32 func_002D3C60();
void func_002CDB60();
void func_002D0A20();
void c4sdk_malloc();
unk_func_002D0160_0 *func_002D0320();
void func_00308360();
s32 func_001925C0();
s32 *func_002D0310();
void func_002D0300();
s32 func_002D02F0();
void func_002D2D50();
void func_002CFEF0();
void func_002D0E40();
void func_002F6CB0();
void func_002F52F0();
void func_002F5340();
void func_00309FD0();
extern s32 D_00360538;
extern s32 D_0036053C;
extern u8 D_0035ADA0[];
extern char D_0035ADB0[];
extern char D_0035ADE0[];
extern void (*D_003600D4)(s32);
extern s32 D_007BE7E0[];

void func_002D0160(s32 arg0) {
    s32 it;
    unk_func_002D0160_0 *found;
    unk_func_002D0160_0 *f;
    s32 str;
    s32 tmp;
    s32 b;
    s32 e;
    s32 obj;
    s32 d;
    s32 val;

    d = 0;
    obj = func_002D3C60(D_00360538, arg0);
    func_002CDB60(&str, D_0035ADA0, &tmp);
    func_002D0A20(&found, D_00360538, &str);
    f = found;
    c4sdk_malloc(&str, 0);
    if (f != func_002D0320(D_00360538)) {
        val = f->unk_10;
    }
    if (val == 0) {
        func_00308360(D_0035ADB0, D_0035ADE0, 0x183);
    }
    if (D_003600D4 != NULL) {
        d = D_007BE7E0[0];
        d = (func_001925C0() - 0x419CE0) / d;
    }
    func_002D0300(&b, *func_002D0310(D_007BE7E0));
    it = b;
    while (func_002D0300(&e, func_002D02F0(D_007BE7E0)), it != e) {
        func_002D2D50(obj, it + 0xC, val);
        if (D_003600D4 != NULL) {
            D_003600D4(d);
        }
        func_002CFEF0(&it);
    }
    func_002D0E40(D_007BE7E0);
    func_002F6CB0();
    func_002F52F0(D_0036053C);
    func_002F5340(D_0036053C);
    func_00309FD0();
}
