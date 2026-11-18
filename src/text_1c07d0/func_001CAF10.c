/* profile: o0 */
#include "common.h"

extern s16 D_005E0370[];
extern f32 D_005E0360[];
s32 func_0019D550(f32);
void *memcpy(void *, const void *, u32);

void func_001CAF10(f32 *arg0, const f32 *arg1, const f32 *arg2, f32 arg3, s16 arg4)
{
    f32 temp0;
    f32 temp1;
    f32 temp2;
    s16 temp3;
    s16 temp4;

    memcpy(D_005E0360, arg2, 0x10);
    temp3 = D_005E0370[(s32)(((s64)(s32)arg4 + 0x800) & 0x1FFF)];
    if (temp3 < 0) {
        temp3 = -temp3;
        arg4 = 0x1000 - arg4;
        D_005E0360[0] = -D_005E0360[0];
        D_005E0360[1] = -D_005E0360[1];
        D_005E0360[2] = -D_005E0360[2];
        D_005E0360[3] = -D_005E0360[3];
    }
    if (temp3 < 0x7FBC) {
        temp3 = D_005E0370[(s32)((s64)(s32)arg4 & 0x1FFF)];
        if (temp3 != 0) {
            temp0 = 1.0f / (f32)temp3;
            temp4 = (s16)func_0019D550(arg3 * (f32)arg4);
            temp1 = temp0 * (f32)D_005E0370[(s32)((s64)(arg4 - temp4) & 0x1FFF)];
            temp2 = temp0 * (f32)D_005E0370[(s32)((s64)(s32)temp4 & 0x1FFF)];
        } else {
            temp1 = 1.0f - arg3;
            temp2 = arg3;
        }
    } else {
        temp1 = 1.0f - arg3;
        temp2 = arg3;
    }

    arg0[0] = temp1 * arg1[0] + temp2 * D_005E0360[0];
    arg0[1] = temp1 * arg1[1] + temp2 * D_005E0360[1];
    arg0[2] = temp1 * arg1[2] + temp2 * D_005E0360[2];
    arg0[3] = temp1 * arg1[3] + temp2 * D_005E0360[3];
}
