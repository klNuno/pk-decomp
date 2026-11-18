/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D1540_0;

void func_00155EC0(void *, unk_func_001D1540_0 *);
void *func_001979C0(void *);
void func_001D0EC0(void *, unk_func_001D1540_0 *);

void func_001D1540(void *arg0, unk_func_001D1540_0 *arg1) {
    unk_func_001D1540_0 a;
    unk_func_001D1540_0 b;

    func_00155EC0(func_001979C0(arg0), &a);
    b.unk_00 = a.unk_00 + arg1->unk_00;
    b.unk_04 = a.unk_04 + arg1->unk_04;
    b.unk_08 = a.unk_08 + arg1->unk_08;
    func_001D0EC0(arg0, &b);
}
