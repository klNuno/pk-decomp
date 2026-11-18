/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D1650_0;

void func_001D0F20();
void func_001F0DC0();

void func_001D1650(s32 arg0, unk_func_001D1650_0 *arg1) {
    unk_func_001D1650_0 a;
    unk_func_001D1650_0 b;

    func_001F0DC0(arg0, &a);
    b.unk_00 = a.unk_00 + arg1->unk_00;
    b.unk_04 = a.unk_04 + arg1->unk_04;
    b.unk_08 = a.unk_08 + arg1->unk_08;
    func_001D0F20(arg0, &b);
}
