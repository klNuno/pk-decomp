/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002092A0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002092A0_0;

typedef struct unk_func_002092A0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002092A0_1;

f32 func_00151360(f32);
void func_001559E0();
void func_00155EC0();
s32 func_001979C0();
f32 func_001E60E0(f32);

s32 func_002092A0(s32 arg0, unk_func_002092A0_1 *arg1) {
    unk_func_002092A0_0 v;
    unk_func_002092A0_0 p;
    f32 len;

    v.unk_00 = 0.0f;
    v.unk_04 = -1.0f;
    v.unk_08 = 0.0f;
    func_001559E0(&v, func_001979C0(arg0), &v);
    func_00155EC0(func_001979C0(arg0), &p);
    v.unk_00 -= p.unk_00;
    v.unk_04 -= p.unk_04;
    v.unk_08 -= p.unk_08;
    len = func_001E60E0(func_00151360(v.unk_00) + func_00151360(v.unk_04) + func_00151360(v.unk_08));
    if (len != 0.0f) {
        len = 1.0f / len;
        v.unk_00 = len * v.unk_00;
        v.unk_04 = len * v.unk_04;
        v.unk_08 = len * v.unk_08;
    } else {
        v = v;
    }
    arg1->unk_00 = ((s32 *)&v)[0];
    arg1->unk_04 = ((s32 *)&v)[1];
    arg1->unk_08 = ((s32 *)&v)[2];
    arg1->unk_0C = 0x15;
    return 1;
}
