/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D1BE0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D1BE0_0;

typedef struct unk_func_001D1BE0_1 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001D1BE0_1;

unk_func_001D1BE0_1 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012D940(s32);
void func_00155E80(s32, unk_func_001D1BE0_0 *);
void func_00155EC0(s32, unk_func_001D1BE0_0 *);
s32 func_001979C0(s32);
void func_0019A230(s32);
s32 func_001B84B0(s32);
void func_001D17E0(s32, unk_func_001D1BE0_0 *);

void func_001D1BE0(s32 arg0, unk_func_001D1BE0_0 *arg1) {
    s32 obj;
    s32 temp;
    s32 res;
    unk_func_001D1BE0_0 sp40;
    unk_func_001D1BE0_0 sp50;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    res = func_001B84B0(temp);
    obj = func_001979C0(arg0);
    func_00155EC0(obj, &sp40);
    sp50.unk_00 = sp40.unk_00 + arg1->unk_00;
    sp50.unk_04 = sp40.unk_04 + arg1->unk_04;
    sp50.unk_08 = sp40.unk_08 + arg1->unk_08;
    func_00155E80(obj, &sp50);
    func_0019A230(arg0);
    func_0012D940(arg0);
    func_001D17E0(res, arg1);
}
