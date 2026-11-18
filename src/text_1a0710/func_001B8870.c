/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001B8870_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B8870_1;

void func_00166AB0(s32, s32);
void func_00166AF0(s32, s32, unk_func_001B8870_0 *);
void func_00166B80(s32, unk_func_001B8870_0 *);
void func_00166C00(s32, unk_func_001B8870_0 *);
void func_00166C80(s32, unk_func_001B8870_0 *);
void func_00166D20(s32 *);
void func_00193660(s32, s16, s32, s32);
void func_001936A0(s32, s16, s32, f32);
void func_001936E0(s32, s16, s32, s32);
void func_00193720(s32, s16 *, s32);
void func_00193FE0(s32);
void func_001940E0(s32, unk_func_001B8870_1 *, s32);
void func_00194120(s32 *, s32, s32);

s32 func_001B8870(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    unk_func_001B8870_0 col;
    unk_func_001B8870_1 pos;
    s32 obj;
    s32 mat;
    s16 id;

    func_00194120(&obj, 1, 1);
    pos.unk_00 = arg0;
    pos.unk_04 = arg1;
    pos.unk_08 = arg2;
    func_001940E0(obj, &pos, 0);
    func_00193720(obj, &id, 1);
    func_001936E0(obj, id, 0, 0);
    func_001936A0(obj, id, 0, arg3);
    func_00166D20(&mat);
    col.unk_00 = 0.1f;
    col.unk_04 = 0.1f;
    col.unk_08 = 0.1f;
    col.unk_0C = 0.0f;
    func_00166C80(mat, &col);
    col.unk_00 = 0.7f;
    col.unk_04 = 0.7f;
    col.unk_08 = 0.7f;
    col.unk_0C = 0.0f;
    func_00166B80(mat, &col);
    col.unk_00 = 0.7f;
    col.unk_04 = 0.7f;
    col.unk_08 = 0.7f;
    col.unk_0C = 0.0f;
    func_00166AF0(mat, 0, &col);
    col.unk_00 = 0.8f;
    col.unk_04 = 0.8f;
    col.unk_08 = 0.8f;
    col.unk_0C = -4e8f;
    func_00166C00(mat, &col);
    func_00166AB0(mat, 0x7FA);
    func_00193660(obj, id, 0, mat);
    func_00193FE0(obj);
    return obj;
}
