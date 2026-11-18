/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B8AF0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001B8AF0_1;

void func_00194120(s32 *, s16, s16);
void func_001940E0(s32, unk_func_001B8AF0_0 *, s16);
void func_00193570(s32, s16 *, s16);
void func_00193510(s32, s16, s16, s16, s16);
void func_001934D0(s32, s16, s16, f32);
void func_00166D20(s32 *);
void func_00166C80(s32, unk_func_001B8AF0_1 *);
void func_00166B80(s32, unk_func_001B8AF0_1 *);
void func_00166AF0(s32, s32, unk_func_001B8AF0_1 *);
void func_00166C00(s32, unk_func_001B8AF0_1 *);
void func_00166AB0(s32, s32);
void func_00193490(s32, s16, s16, s32);
void func_00193FE0(s32);

s32 func_001B8AF0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    unk_func_001B8AF0_1 c;
    unk_func_001B8AF0_0 v;
    s32 h;
    s32 m;
    s16 e;

    func_00194120(&h, 2, 1);
    v.unk_00 = arg0;
    v.unk_04 = arg1;
    v.unk_08 = arg2;
    func_001940E0(h, &v, 0);
    v.unk_00 = arg0 - 0.1f;
    v.unk_04 = arg1;
    v.unk_08 = arg2;
    func_001940E0(h, &v, 1);
    func_00193570(h, &e, 1);
    func_00193510(h, e, 0, 1, 0);
    func_001934D0(h, e, 0, arg3);
    func_00166D20(&m);
    c.unk_00 = 0.0f;
    c.unk_04 = 0.0f;
    c.unk_08 = 0.0f;
    c.unk_0C = 0.0f;
    func_00166C80(m, &c);
    c.unk_00 = 0.0f;
    c.unk_04 = 0.0f;
    c.unk_08 = 0.0f;
    c.unk_0C = 0.0f;
    func_00166B80(m, &c);
    c.unk_00 = 0.0f;
    c.unk_04 = 0.0f;
    c.unk_08 = 0.0f;
    c.unk_0C = 0.0f;
    func_00166AF0(m, 0, &c);
    c.unk_00 = 0.0f;
    c.unk_04 = 0.0f;
    c.unk_08 = 0.0f;
    c.unk_0C = 0.0f;
    func_00166C00(m, &c);
    func_00166AB0(m, 0x7FA);
    func_00193490(h, e, 0, m);
    func_00193FE0(h);
    return h;
}
