/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00257A60_0;

extern unk_00257A60_0 D_003370E8;
f32 func_001156B8(f32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);

f32 func_00257A60(const unk_00257A60_0 *arg0, const unk_00257A60_0 *arg1)
{
    unk_00257A60_0 unk_08;
    unk_00257A60_0 unk_18;
    unk_00257A60_0 unk_28;
    unk_00257A60_0 unk_38;
    unk_00257A60_0 unk_48;
    unk_00257A60_0 unk_58;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    f32 unk_70;
    f32 unk_74;
    f32 unk_78;
    f32 unk_7C;

    if (0.0f == arg0->unk_00 && arg0->unk_04 == 0.0f) {
        if (0.0f == arg1->unk_00 && arg1->unk_04 == 0.0f) {
            return 0.0f;
        }
        ((s32 *)&unk_08)[0] = ((const s32 *)arg1)[0];
        ((s32 *)&unk_08)[1] = ((const s32 *)arg1)[1];
        ((s32 *)&unk_08)[2] = ((const s32 *)arg1)[2];
        ((s32 *)&unk_18)[0] = ((const s32 *)arg0)[0];
        ((s32 *)&unk_18)[1] = ((const s32 *)arg0)[1];
        ((s32 *)&unk_18)[2] = ((const s32 *)arg0)[2];
    } else {
        ((s32 *)&unk_08)[0] = ((const s32 *)arg0)[0];
        ((s32 *)&unk_08)[1] = ((const s32 *)arg0)[1];
        ((s32 *)&unk_08)[2] = ((const s32 *)arg0)[2];
        ((s32 *)&unk_18)[0] = ((const s32 *)arg1)[0];
        ((s32 *)&unk_18)[1] = ((const s32 *)arg1)[1];
        ((s32 *)&unk_18)[2] = ((const s32 *)arg1)[2];
    }

    unk_74 = func_001E60E0(func_00151360(unk_08.unk_00) +
                                 func_00151360(unk_08.unk_04) +
                                 func_00151360(unk_08.unk_08));
    if (unk_74 != 0.0f) {
        unk_74 = 1.0f / unk_74;
        unk_08.unk_00 = unk_74 * unk_08.unk_00;
        unk_08.unk_04 = unk_74 * unk_08.unk_04;
        unk_08.unk_08 = unk_74 * unk_08.unk_08;
    } else {
        unk_08 = unk_08;
    }

    unk_78 = func_001E60E0(func_00151360(unk_18.unk_00) +
                                 func_00151360(unk_18.unk_04) +
                                 func_00151360(unk_18.unk_08));
    if (unk_78 != 0.0f) {
        unk_78 = 1.0f / unk_78;
        unk_18.unk_00 = unk_78 * unk_18.unk_00;
        unk_18.unk_04 = unk_78 * unk_18.unk_04;
        unk_18.unk_08 = unk_78 * unk_18.unk_08;
    } else {
        unk_18 = unk_18;
    }

    if (&unk_28 == &unk_08 || &unk_28 == &D_003370E8) {
        unk_58.unk_00 = unk_08.unk_04 * D_003370E8.unk_08 -
                              unk_08.unk_08 * D_003370E8.unk_04;
        unk_58.unk_04 = unk_08.unk_08 * D_003370E8.unk_00 -
                              unk_08.unk_00 * D_003370E8.unk_08;
        unk_58.unk_08 = unk_08.unk_00 * D_003370E8.unk_04 -
                              unk_08.unk_04 * D_003370E8.unk_00;
        ((s32 *)&unk_28)[0] = ((s32 *)&unk_58)[0];
        ((s32 *)&unk_28)[1] = ((s32 *)&unk_58)[1];
        ((s32 *)&unk_28)[2] = ((s32 *)&unk_58)[2];
    } else {
        unk_28.unk_00 = unk_08.unk_04 * D_003370E8.unk_08 -
                              unk_08.unk_08 * D_003370E8.unk_04;
        unk_28.unk_04 = unk_08.unk_08 * D_003370E8.unk_00 -
                              unk_08.unk_00 * D_003370E8.unk_08;
        unk_28.unk_08 = unk_08.unk_00 * D_003370E8.unk_04 -
                              unk_08.unk_04 * D_003370E8.unk_00;
    }

    unk_6C = unk_18.unk_00 * unk_28.unk_00 +
                    unk_18.unk_04 * unk_28.unk_04 +
                    unk_18.unk_08 * unk_28.unk_08;
    unk_38.unk_00 = unk_6C * unk_28.unk_00;
    unk_38.unk_04 = unk_6C * unk_28.unk_04;
    unk_38.unk_08 = unk_6C * unk_28.unk_08;
    unk_48.unk_00 = unk_18.unk_00 - unk_38.unk_00;
    unk_48.unk_04 = unk_18.unk_04 - unk_38.unk_04;
    unk_48.unk_08 = unk_18.unk_08 - unk_38.unk_08;

    unk_7C = func_001E60E0(func_00151360(unk_48.unk_00) +
                                 func_00151360(unk_48.unk_04) +
                                 func_00151360(unk_48.unk_08));
    if (unk_7C != 0.0f) {
        unk_7C = 1.0f / unk_7C;
        unk_48.unk_00 = unk_7C * unk_48.unk_00;
        unk_48.unk_04 = unk_7C * unk_48.unk_04;
        unk_48.unk_08 = unk_7C * unk_48.unk_08;
    } else {
        unk_48 = unk_48;
    }

    unk_64 = unk_08.unk_00 * unk_48.unk_00 +
                    unk_08.unk_04 * unk_48.unk_04 +
                    unk_08.unk_08 * unk_48.unk_08;
    if (!(unk_64 <= 1.0f)) {
        unk_64 = 1.0f;
    } else if (unk_64 < -1.0f) {
        unk_64 = -1.0f;
    }
    unk_68 = func_001156B8(unk_64);
    unk_70 = unk_08.unk_04 * unk_18.unk_08 -
                    unk_08.unk_08 * unk_18.unk_04;
    if (unk_70 < 0.0f) {
        unk_68 = -unk_68;
    }
    return unk_68;
}
