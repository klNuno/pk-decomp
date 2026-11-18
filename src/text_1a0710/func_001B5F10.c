/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001B5F10_1 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x8];
} unk_func_001B5F10_1;

typedef struct unk_func_001B5F10_0 {
    u8 pad_00[0x180];
    unk_func_001B5F10_1 unk_180[1];
    u8 pad_194[0xB4];
    s16 unk_248;
} unk_func_001B5F10_0;

void func_0019A290(s32, s32);
void func_001AE100(s32, f32);

void func_001B5F10(unk_func_001B5F10_0 *arg0) {
    unk_func_001B5F10_1 *p;
    unk_func_001B5F10_1 *end;

    p = arg0->unk_180;
    end = p + arg0->unk_248;
    for (; p < end; p++) {
        if (p->unk_00 != 0) {
            func_0019A290(p->unk_00, p->unk_04);
            func_001AE100(p->unk_00, p->unk_08);
        }
    }
}
