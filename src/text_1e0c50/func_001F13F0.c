/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F13F0_0;

f32 func_00151360(f32);
void func_00155EC0(s32, unk_func_001F13F0_0 *);
s32 func_001979C0(s32);
void func_001E60E0(f32);
void func_001F0DC0(s32, unk_func_001F13F0_0 *);

void func_001F13F0(s32 arg0, s32 arg1) {
    unk_func_001F13F0_0 a;
    unk_func_001F13F0_0 b;

    func_00155EC0(func_001979C0(arg0), &a);
    func_001F0DC0(arg1, &b);
    a.unk_00 -= b.unk_00;
    a.unk_04 -= b.unk_04;
    a.unk_08 -= b.unk_08;
    func_001E60E0(func_00151360(a.unk_00) + func_00151360(a.unk_04) + func_00151360(a.unk_08));
}
