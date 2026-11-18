#include "common.h"

typedef struct unk_func_00149230_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00149230_0;

unk_func_00149230_0 *func_00155EE0(void *);
void func_00155E80(void *, unk_func_00149230_0 *);
void func_00152DF0(void *, unk_func_00149230_0 *);

void func_00149230(u8 *arg0) {
    unk_func_00149230_0 sp40;
    void *temp_s0;
    void *temp_s1;
    unk_func_00149230_0 *temp_s2;
    unk_func_00149230_0 *temp_v0;

    temp_s1 = arg0 + 0xE0;
    temp_s0 = arg0 + 0x80;
    temp_s2 = func_00155EE0(temp_s0);
    temp_v0 = func_00155EE0(temp_s1);
    sp40.unk_00 = temp_v0->unk_00 - temp_s2->unk_00;
    sp40.unk_04 = temp_v0->unk_04 - temp_s2->unk_04;
    sp40.unk_08 = temp_v0->unk_08 - temp_s2->unk_08;
    func_00155E80(temp_s0, temp_v0);
    func_00152DF0(temp_s1, &sp40);
}
