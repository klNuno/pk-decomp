/* profile: opt_300 */
#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
} unk_002E00F0_0;

extern f32 D_00341B40[];
void func_002DE7C0(unk_002E00F0_0 *, void *);
s32 func_002DE470(unk_002E00F0_0 *);
void func_002DE050(unk_002E00F0_0 *, f32);
f32 func_00115A58(f32, f32);
f32 func_00114EA0(f32);
u32 func_001273A8(f32);

void func_002E00F0(void *arg0, f32 *arg1)
{
    unk_002E00F0_0 unk_30;
    f32 unk_04;
    f32 unk_00;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    u32 unk_14;
    u32 unk_18;

    func_002DE7C0(&unk_30, arg0);
    if (func_002DE470(&unk_30)) {
        unk_00 = *arg1;
        if (!(unk_00 < 0.0f)) {
            unk_04 = func_00115A58(unk_00, 12.0f);
            unk_14 = func_001273A8(func_00114EA0(unk_00 / 12.0f));
            unk_08 = func_00114EA0(unk_04);
            unk_04 -= unk_08;
            unk_04 *= 0.057762265f;
            unk_10 = D_00341B40[func_001273A8(unk_08)];
            unk_04 *= unk_10;
            unk_10 += unk_04 * (1.0f + 0.5f * unk_04);
            for (unk_18 = 0; unk_18 < unk_14; unk_18++) {
                unk_10 *= 2.0f;
            }
        } else {
            f32 unk_1C = -unk_00;
            unk_00 = func_00115A58(unk_1C, 12.0f);
            unk_14 = func_001273A8(func_00114EA0(unk_1C / 12.0f));
            unk_08 = func_00114EA0(unk_00);
            unk_00 -= unk_08;
            unk_00 *= 0.057762265f;
            unk_0C = D_00341B40[func_001273A8(unk_08)];
            unk_00 *= unk_0C;
            unk_0C += unk_00 * (1.0f + 0.5f * unk_00);
            unk_10 = 1.0f / unk_0C;
            for (unk_18 = 0; unk_18 < unk_14; unk_18++) {
                unk_10 *= 0.5f;
            }
        }
        func_002DE050(&unk_30, unk_10);
    }
}
