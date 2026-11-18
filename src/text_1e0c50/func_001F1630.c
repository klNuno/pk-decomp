/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F1630_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F1630_0;

typedef struct unk_func_001F1630_1 {
    f32 unk_00[24];
} unk_func_001F1630_1;

void func_00150C20();
void func_00155810();
void func_00155EC0();
s32 func_001979C0();
void func_001F1370();
void func_001F14B0(unk_func_001F1630_0 *, u8);

void func_001F1630(s32 arg0, s32 arg1, u8 arg2) {
    unk_func_001F1630_1 m;
    unk_func_001F1630_0 a;
    unk_func_001F1630_0 b;

    if (arg2 & 0x80) {
        func_001F1370(arg0, &a);
        func_001F1370(arg1, &b);
    } else {
        func_00155EC0(func_001979C0(arg0), &a);
        func_00155EC0(func_001979C0(arg1), &b);
    }
    a.unk_00 -= b.unk_00;
    a.unk_04 -= b.unk_04;
    a.unk_08 -= b.unk_08;
    arg2 &= 7;
    if (arg2 != 7) {
        func_00150C20(&m, func_001979C0(arg1));
        func_00155810(&a, &m, &a);
    }
    func_001F14B0(&a, arg2);
}
