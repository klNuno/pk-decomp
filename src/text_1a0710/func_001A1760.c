/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A1760_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A1760_0;

typedef struct unk_func_001A1760_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001A1760_1;

unk_func_001A1760_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001A1760_1 *func_00155EE0(s32);
s32 func_001979C0(s32);
s32 func_00197E90(s32);
u32 func_001A1A80(s32);
void func_001A1AA0(s32, s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001A7D90(s32);

void func_001A1760(s32 arg0)
{
    s32 i;
    unk_func_001A1760_1 *temp;
    s32 a;
    s32 b;
    volatile f32 x;
    volatile f32 y;
    volatile f32 z;
    volatile f32 absY;
    volatile f32 absX;
    volatile f32 absZ;

    b = HIE_fn_hGetSuperObjectObject(arg0)->unk_04;
    if (b != 0) {
        func_001A1AA0(b, 1);
        i = func_001A7D80();
        while (i != 0) {
            a = func_001A7D60(i);
            if (func_00197E90(HIE_fn_hGetSuperObjectObject(a)->unk_04) != 0) {
                i = func_001A7D90(i);
                continue;
            }
            if (arg0 == a) {
                func_001A1AA0(b, 0);
                return;
            }
            temp = func_00155EE0(func_001979C0(a));
            x = func_00155EE0(func_001979C0(arg0))->unk_00 - temp->unk_00;
            y = func_00155EE0(func_001979C0(arg0))->unk_04 - temp->unk_04;
            z = func_00155EE0(func_001979C0(arg0))->unk_08 - temp->unk_08;
            if (y > 0.0f) {
                absY = y;
            } else {
                absY = -y;
            }
            if (x > 0.0f) {
                absX = x;
            } else {
                absX = -x;
            }
            if (z > 0.0f) {
                absZ = z;
            } else {
                absZ = -z;
            }
            if (absZ + (absX + absY) < (f32)func_001A1A80(b)) {
                func_001A1AA0(b, 0);
                return;
            }
            i = func_001A7D90(i);
        }
    }
}
