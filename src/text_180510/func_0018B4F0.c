/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0018B4F0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0018B4F0_1;

typedef struct {
    unk_func_0018B4F0_0 unk_00;
    f32 unk_0C;
} unk_func_0018B4F0_5;

typedef struct {
    u8 pad_00[0x2C];
    unk_func_0018B4F0_0 unk_2C;
} unk_func_0018B4F0_2;

typedef struct {
    u8 pad_00[0x4];
    unk_func_0018B4F0_2 *unk_04;
    u8 pad_08[0x78];
    s32 unk_80;
} unk_func_0018B4F0_3;

typedef struct {
    u8 pad_00[0x70];
    unk_func_0018B4F0_0 unk_70;
    u8 pad_7C[0x14];
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    f32 unk_9C;
    f32 unk_A0;
    f32 unk_A4;
    f32 unk_A8;
} unk_func_0018B4F0_4;

void func_001018F8(unk_func_0018B4F0_1 *, s32, unk_func_0018B4F0_5 *);
f32 func_00101990(unk_func_0018B4F0_1 *, unk_func_0018B4F0_1 *);
void func_001019B8(unk_func_0018B4F0_1 *, unk_func_0018B4F0_1 *);
void func_00101B28(unk_func_0018B4F0_1 *, unk_func_0018B4F0_0 *, unk_func_0018B4F0_1 *);
void func_00101B58(unk_func_0018B4F0_1 *, unk_func_0018B4F0_1 *, f32);
void func_00101BA0(unk_func_0018B4F0_1 *, char *);
extern char D_00333430[];
extern unk_func_0018B4F0_3 *D_0035FB04;
extern unk_func_0018B4F0_1 D_00505050[];
extern unk_func_0018B4F0_1 D_00505090[];

s32 func_0018B4F0(unk_func_0018B4F0_4 *arg0, s32 arg1) {
    unk_func_0018B4F0_5 b;
    unk_func_0018B4F0_1 c;
    unk_func_0018B4F0_0 a;
    unk_func_0018B4F0_1 *e;
    f32 len;
    f32 s;

    ((s32 *)&a)[0] = ((s32 *)&arg0->unk_70)[0];
    ((s32 *)&a)[1] = ((s32 *)&arg0->unk_70)[1];
    ((s32 *)&a)[2] = ((s32 *)&arg0->unk_70)[2];
    ((s32 *)&b)[0] = ((s32 *)&D_0035FB04->unk_04->unk_2C)[0];
    ((s32 *)&b)[1] = ((s32 *)&D_0035FB04->unk_04->unk_2C)[1];
    ((s32 *)&b)[2] = ((s32 *)&D_0035FB04->unk_04->unk_2C)[2];
    b.unk_0C = 1.0f;
    func_001018F8(&c, D_0035FB04->unk_80 + 0x10, &b);
    e = &D_00505050[arg1];
    func_00101B28(e, &a, &c);
    D_00505050[arg1].unk_0C = 0.0f;
    len = func_00101990(e, e);
    if (!(len < arg0->unk_A4)) {
        func_00101BA0(e, D_00333430);
        return 0;
    }
    if (len <= arg0->unk_A0) {
        s = 0.5f;
    } else {
        s = arg0->unk_A8 * (arg0->unk_A4 - len);
    }
    func_001019B8(e, e);
    D_00505090[arg1].unk_00 = arg0->unk_90;
    D_00505090[arg1].unk_04 = arg0->unk_94;
    D_00505090[arg1].unk_08 = arg0->unk_98;
    D_00505090[arg1].unk_0C = arg0->unk_9C;
    func_00101B58(&D_00505090[arg1], &D_00505090[arg1], s);
    return 1;
}
