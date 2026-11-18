/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001302C0_0 {
    u8 pad_00[0xC];
    s32 *unk_0C;
    s32 unk_10;
} unk_func_001302C0_0;

typedef struct unk_func_001302C0_1 {
    u8 pad_00[4];
    unk_func_001302C0_0 *unk_04;
} unk_func_001302C0_1;

typedef struct unk_func_001302C0_2 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001302C0_2;

void func_00164C00();
void func_00164C20();
void func_00164C30(unk_func_001302C0_2 *, f32, f32, f32, f32, f32);
f32 func_001655B0();
f32 func_001655C0();
f32 func_001655D0();
f32 func_001655E0();
f32 func_001655F0();
u16 func_00165650();
void func_00165750();
extern s8 D_0035FA88;

void func_001302C0(s32 arg0, unk_func_001302C0_1 *arg1) {
    f32 d;
    f32 c;
    s16 i;
    f32 b;
    unk_func_001302C0_0 *list;
    s32 *p;
    s32 light;
    f32 a;
    unk_func_001302C0_2 pos;

    if (D_0035FA88 != 0) {
        func_00164C20();
        return;
    }
    list = arg1->unk_04;
    p = list->unk_0C;
    for (i = 0; i < list->unk_10; i++) {
        light = *p;
        if (func_00165650(light) == 6) {
            func_00165750(light, &pos);
            a = func_001655C0(light);
            b = func_001655F0(light);
            c = func_001655B0(light);
            d = func_001655E0(light);
            func_00164C30(&pos, a, b, c, d, func_001655D0(light));
            func_00164C20();
            return;
        }
        p++;
    }
    func_00164C00();
}
