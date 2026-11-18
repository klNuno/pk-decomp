/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_Q_0;

typedef struct {
    u8 pad_00[0x60];
} unk_Q_1;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_Q_2;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    unk_Q_1 unk_10;
    u32 unk_70;
    u8 pad_74[0x4];
    unk_Q_2 **unk_78;
    s32 *unk_7C;
    unk_Q_1 *unk_80;
} unk_Q_3;

s32 fn_h_StandardGameGetSuperObject();
void func_00150060();
void func_001D11F0();
void func_001D14C0();

void func_001D2300(unk_Q_3 *arg0) {
    unk_Q_0 a;
    unk_Q_0 b;
    unk_Q_0 c;
    u32 i;
    s32 obj;

    func_00150060(&arg0->unk_10, &a, &b, &c);
    func_001D11F0(arg0->unk_00, &a, &b, &c);
    for (i = 0; i < arg0->unk_70; i++) {
        switch (arg0->unk_7C[i]) {
        case 1:
            func_00150060(&arg0->unk_80[i], &a, &b, &c);
            func_001D11F0(arg0->unk_78[i], &a, &b, &c);
            break;
        case 2:
            obj = fn_h_StandardGameGetSuperObject(arg0->unk_78[i]->unk_04);
            if (obj != 0) {
                func_00150060(&arg0->unk_80[i], &a, &b, &c);
                func_001D14C0(obj, &a, &b, &c);
            }
            break;
        }
    }
}
