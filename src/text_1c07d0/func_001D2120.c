/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001D2120_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001D2120_1;

typedef struct unk_func_001D2120_2 {
    u8 pad_00[0x60];
} unk_func_001D2120_2;

typedef struct unk_func_001D2120_0 {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x60];
    u32 unk_70;
    u8 pad_74[0x4];
    unk_func_001D2120_1 **unk_78;
    s32 *unk_7C;
    unk_func_001D2120_2 *unk_80;
} unk_func_001D2120_0;

void func_00155EC0();
void func_001D0EC0();
void func_001D0F20();
void func_001D1180();
s32 fn_h_StandardGameGetSuperObject();

void func_001D2120(unk_func_001D2120_0 *arg0) {
    u32 i;
    s32 so;
    u8 sp30[0x10];

    func_00155EC0(arg0->unk_10, sp30);
    func_001D0EC0(arg0->unk_00, sp30);
    for (i = 0; i < arg0->unk_70; i++) {
        switch (arg0->unk_7C[i]) {
        case 1:
            func_00155EC0(&arg0->unk_80[i], sp30);
            func_001D0EC0(arg0->unk_78[i], sp30);
            break;
        case 2:
            so = fn_h_StandardGameGetSuperObject(arg0->unk_78[i]->unk_04);
            if (so != 0) {
                func_00155EC0(&arg0->unk_80[i], sp30);
                func_001D1180(so, sp30);
            }
            break;
        case 3:
            func_00155EC0(&arg0->unk_80[i], sp30);
            func_001D0F20(arg0->unk_78[i], sp30);
            break;
        default:
            return;
        }
    }
}
