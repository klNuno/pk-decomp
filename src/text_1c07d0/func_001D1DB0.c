/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D1DB0_0;

s32 func_001979C0(s32);
void func_00155EC0(s32, unk_func_001D1DB0_0 *);
void func_00155E80(s32, unk_func_001D1DB0_0 *);
void func_0019A230(s32);
void func_0012D940(s32);

void func_001D1DB0(s32 arg0, unk_func_001D1DB0_0 *arg1) {
    s32 temp;
    unk_func_001D1DB0_0 a;
    unk_func_001D1DB0_0 b;

    temp = func_001979C0(arg0);
    func_00155EC0(temp, &a);
    b.unk_00 = a.unk_00 + arg1->unk_00;
    b.unk_04 = a.unk_04 + arg1->unk_04;
    b.unk_08 = a.unk_08 + arg1->unk_08;
    func_00155E80(temp, &b);
    func_0019A230(arg0);
    func_0012D940(arg0);
}
