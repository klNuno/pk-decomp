/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D0FE0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001D0FE0_0;

void func_00155EC0(void *, unk_func_001D0FE0_0 *);
void func_001D17E0(void *, unk_func_001D0FE0_0 *);

void func_001D0FE0(u8 *arg0, s32 arg1, unk_func_001D0FE0_0 *arg2) {
    unk_func_001D0FE0_0 sp20;
    u8 *temp;

    temp = arg0 + 0xE0;
    func_00155EC0(temp, &sp20);
    sp20.unk_00 = arg2->unk_00 - sp20.unk_00;
    sp20.unk_04 = arg2->unk_04 - sp20.unk_04;
    sp20.unk_08 = arg2->unk_08 - sp20.unk_08;
    func_001D17E0(arg0, &sp20);
}
