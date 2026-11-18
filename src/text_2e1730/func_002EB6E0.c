#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    s32 unk_28;
    u8 unk_2C[4];
} unk_func_002EB6E0_0;

unk_func_002EB6E0_0 *func_002D2BC0(s32);
void func_002F21B0();
void func_002EB770();
extern u8 D_0035E670[];

unk_func_002EB6E0_0 *func_002EB6E0(void) {
    unk_func_002EB6E0_0 *p;

    p = func_002D2BC0(0x30);
    if (p != NULL) {
        unk_func_002EB6E0_0 *volatile t = p;
        func_002F21B0(p);
        t->unk_00 = D_0035E670;
        t->unk_18 = 1.0f;
        t->unk_1C = 1.0f;
        t->unk_20 = 1.0f;
        t->unk_24 = 1.0f;
        t->unk_28 = 0;
        func_002EB770(t->unk_2C, 0);
        p = t;
    }
    return p;
}
