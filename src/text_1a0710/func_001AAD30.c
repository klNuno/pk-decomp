/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AAD30_0 {
    u8 unk_00[0x60];
} unk_func_001AAD30_0;

typedef struct unk_func_001AAD30_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001AAD30_1;

void func_0016DFA0();
void func_00155C70();
void func_00155E80();
void func_001504E0(void *, f32);
void func_00150440(void *, f32);
void func_00153920();
void func_00150ED0();
void func_0016DF30();

void func_001AAD30(s32 arg0) {
    unk_func_001AAD30_0 m;
    unk_func_001AAD30_0 r;
    unk_func_001AAD30_1 v;

    func_0016DFA0(arg0, &m);
    v.unk_00 = 0.0f;
    v.unk_04 = 0.0f;
    v.unk_08 = 5.0f;
    func_00155C70(&m);
    func_00155E80(&m, &v);
    func_001504E0(&m, 1.5707964f);
    func_00155C70(&r);
    func_00150440(&r, 3.1415927f);
    func_00153920(&m, &r, &m);
    func_00150ED0(&m);
    func_0016DF30(arg0, &m);
}
