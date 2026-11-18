/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_0012FD70_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x28];
    u32 unk_30;
    s32 unk_34;
} unk_0012FD70_1;

void func_0012C0B0(s32, unk_0012FD70_1 *, s32, s32);
s32 func_0012C370(void);
void func_001302C0(s32, unk_0012FD70_1 *);
unk_0012FD70_0 *func_00131AA0(s32);
unk_0012FD70_0 *func_00131AB0(s32);
s32 func_00192910(s32, unk_0012FD70_0 *, unk_0012FD70_0 *, s32);
unk_0012FD70_0 *func_001DCF70(s32);
unk_0012FD70_0 *func_001DCF80(s32);
extern u8 D_0035F8F4;

#define ABS(x) ((x) > 0.0f ? (x) : -(x))
#define SUM(x, y, z) (ABS(z) + (ABS(x) + ABS(y)))

s32 func_0012FD70(s32 arg0, s32 arg1, unk_0012FD70_1 *arg2, s32 arg3)
{
    s32 temp = 0;
    s32 temp2 = arg2->unk_04;
    s32 temp3;
    unk_0012FD70_0 *p2, *p3, *p0, *p1;
    f32 f0, f1, f2, f3, f4, f5;
    s32 temp4, temp5;
    s32 temp6, temp7, temp8;

    func_001302C0(arg1, arg2);
    if (D_0035F8F4 == 0 || D_0035F8F4 == 1) {
        temp3 = arg2->unk_34;
        p0 = func_00131AB0(temp2);
        p1 = func_00131AA0(temp2);
        if (temp3 != 0) {
            p2 = func_001DCF80(temp3);
            p3 = func_001DCF70(temp3);
            temp3 = func_00192910(arg1, p2, p3, 0);
            temp = temp3;
            if (temp || (u8)((arg2->unk_30 & 0x800) >> 10) || func_0012C370()) {
                func_0012C0B0(arg1, arg2, arg3, temp);
            }
            f0 = p0->unk_00 - p2->unk_00;
            f1 = p0->unk_04 - p2->unk_04;
            f2 = p0->unk_08 - p2->unk_08;
            f3 = p1->unk_00 - p3->unk_00;
            f4 = p1->unk_04 - p3->unk_04;
            f5 = p1->unk_08 - p3->unk_08;
            if (ABS(SUM(f0, f1, f2)) >= 0.01f || ABS(SUM(f3, f4, f5)) >= 0.01f) {
                temp6 = f1 < 0.0f ? 1 : -1;
                temp7 = f0 < 0.0f ? 1 : -1;
                temp8 = f2 < 0.0f ? 1 : -1;
                temp4 = temp8 + (temp7 + temp6);
                if (temp4 == -3 || temp4 == 3) {
                    temp5 = (f5 < 0.0f ? -1 : 1) + ((f3 < 0.0f ? -1 : 1) + (f4 < 0.0f ? -1 : 1));
                } else {
                    temp5 = 0;
                }
                if (temp4 != temp5) {
                    temp = func_00192910(arg1, p0, p1, 0);
                } else if (temp4 > 0) {
                    temp = func_00192910(arg1, p0, p1, 0);
                } else if (temp == 0x7F && temp) {
                    temp = func_00192910(arg1, p0, p1, 0);
                }
            }
        } else {
            temp = func_00192910(arg1, p0, p1, 0);
        }
    }
    return temp;
}
