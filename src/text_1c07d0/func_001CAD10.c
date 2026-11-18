/* profile: o0 */
#include "common.h"

typedef struct unk_func_001CAD10_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001CAD10_0;

typedef struct unk_func_001CAD10_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
} unk_func_001CAD10_1;

extern f32 D_00360008;
extern f32 D_0036000C;
extern f32 D_00360010;
extern f32 D_00360014;
extern f32 D_00360018;
extern f32 D_0036001C;
extern f32 D_00360020;
extern f32 D_00360024;
extern f32 D_00360028;

void func_001CAD10(unk_func_001CAD10_1 *arg0, unk_func_001CAD10_0 *arg1) {
    f32 one;
    f32 x2;
    f32 y2;
    f32 z2;

    x2 = arg1->unk_00;
    x2 = x2 + x2;
    y2 = arg1->unk_04;
    y2 = y2 + y2;
    z2 = arg1->unk_08;
    z2 = z2 + z2;
    D_00360028 = arg1->unk_0C * x2;
    D_00360024 = arg1->unk_0C * y2;
    D_00360020 = arg1->unk_0C * z2;
    D_0036001C = arg1->unk_00 * x2;
    D_00360018 = arg1->unk_00 * y2;
    D_00360014 = arg1->unk_00 * z2;
    D_00360010 = arg1->unk_04 * y2;
    D_0036000C = arg1->unk_04 * z2;
    D_00360008 = arg1->unk_08 * z2;
    one = 1.0f;
    arg0->unk_00 = one - (D_00360010 + D_00360008);
    arg0->unk_0C = D_00360018 + D_00360020;
    arg0->unk_18 = D_00360014 - D_00360024;
    arg0->unk_04 = D_00360018 - D_00360020;
    arg0->unk_10 = one - (D_0036001C + D_00360008);
    arg0->unk_1C = D_0036000C + D_00360028;
    arg0->unk_08 = D_00360014 + D_00360024;
    arg0->unk_14 = D_0036000C - D_00360028;
    arg0->unk_20 = one - (D_0036001C + D_00360010);
}
