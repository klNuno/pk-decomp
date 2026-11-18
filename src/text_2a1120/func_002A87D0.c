/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A87D0_0 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
} unk_func_002A87D0_0;

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A87D0(unk_func_002A87D0_0 *arg0) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    d = (f32)arg0->unk_06 / 65535.0f;
    c = (f32)arg0->unk_04 / 65535.0f;
    a = (f32)arg0->unk_00 / 65535.0f;
    b = (f32)arg0->unk_02 / 65535.0f;
    D_007B8490[0] = a;
    D_007B8490[1] = b;
    D_007B8490[2] = c;
    D_007B8490[3] = d;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
