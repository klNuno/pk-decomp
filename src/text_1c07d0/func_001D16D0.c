/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D16D0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D16D0_0;

typedef struct unk_func_001D16D0_1 {
    u8 pad_00[0x60];
} unk_func_001D16D0_1;

typedef struct unk_func_001D16D0_2 {
    unk_func_001D16D0_0 unk_00;
    u8 pad_0C[0x4];
    s32 unk_10;
} unk_func_001D16D0_2;

void func_001F0DC0(unk_func_001D16D0_2 *, unk_func_001D16D0_0 *);
void func_00155C70(unk_func_001D16D0_1 *);
void func_00155E80(unk_func_001D16D0_1 *, unk_func_001D16D0_0 *);
void func_00153920(unk_func_001D16D0_1 *, s32, unk_func_001D16D0_1 *);
void func_00155EC0(unk_func_001D16D0_1 *, unk_func_001D16D0_0 *);
s32 func_001979C0(s32);
void func_00154B00(unk_func_001D16D0_1 *, s32);
void func_001559E0(unk_func_001D16D0_0 *, unk_func_001D16D0_1 *, unk_func_001D16D0_0 *);

void func_001D16D0(unk_func_001D16D0_2 *arg0, s32 arg1) {
    unk_func_001D16D0_1 sp20;
    unk_func_001D16D0_1 sp80;
    unk_func_001D16D0_0 spE0;
    s32 temp;

    func_001F0DC0(arg0, &spE0);
    func_00155C70(&sp20);
    func_00155E80(&sp20, &spE0);
    func_00153920(&sp20, arg1, &sp20);
    func_00155EC0(&sp20, &spE0);
    if (arg0->unk_10 != 0) {
        temp = func_001979C0(arg0->unk_10);
        func_00154B00(&sp80, temp);
        func_001559E0(&spE0, &sp80, &spE0);
        arg0->unk_00 = spE0;
    } else {
        arg0->unk_00 = spE0;
    }
}
