/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D17E0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D17E0_0;

typedef struct unk_func_001D17E0_1 {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_func_001D17E0_1;

u8 *func_001387B0(unk_func_001D17E0_1 *);
void func_00155E80(void *, unk_func_001D17E0_0 *);
void func_00155EC0(void *, unk_func_001D17E0_0 *);

void func_001D17E0(unk_func_001D17E0_1 *arg0, unk_func_001D17E0_0 *arg1) {
    void *m0;
    void *m1;
    void *m2;
    void *m3;
    unk_func_001D17E0_0 v;

    if (!((arg0->unk_0C & 0x80) ? 1 : 0)) {
        m0 = (u8 *)arg0 + 0xE0;
        func_00155EC0(m0, &v);
        v.unk_00 += arg1->unk_00;
        v.unk_04 += arg1->unk_04;
        v.unk_08 += arg1->unk_08;
        func_00155E80(m0, &v);
        m1 = (u8 *)arg0 + 0x80;
        func_00155EC0(m1, &v);
        v.unk_00 += arg1->unk_00;
        v.unk_04 += arg1->unk_04;
        v.unk_08 += arg1->unk_08;
        func_00155E80(m1, &v);
        if ((arg0->unk_0C & 4) ? 1 : 0) {
            m2 = func_001387B0(arg0) + 0xB0;
            func_00155EC0(m2, &v);
            v.unk_00 += arg1->unk_00;
            v.unk_04 += arg1->unk_04;
            v.unk_08 += arg1->unk_08;
            func_00155E80(m2, &v);
            m3 = func_001387B0(arg0) + 0x110;
            func_00155EC0(m3, &v);
            v.unk_00 += arg1->unk_00;
            v.unk_04 += arg1->unk_04;
            v.unk_08 += arg1->unk_08;
            func_00155E80(m3, &v);
        }
    }
}
