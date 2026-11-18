/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00212430_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00212430_0;

typedef struct unk_func_00212430_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00212430_1;

typedef struct unk_func_00212430_2 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00212430_2;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00212430_2 *);
void func_00155EC0(s32, unk_func_00212430_0 *);
void func_00155EF0(s32, unk_func_00212430_0 *);
void func_00155F10(s32, unk_func_00212430_0 *);
void func_00155F30(s32, unk_func_00212430_0 *);
s32 func_001979A0(s32);
void func_001EDBB0(s32, s32);

s32 *func_00212430(s32 arg0, s32 *arg1, unk_func_00212430_1 *arg2) {
    s32 type;
    s32 obj;
    unk_func_00212430_2 res;
    unk_func_00212430_0 v;

    type = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    obj = res.unk_00;
    v.unk_08 = v.unk_04 = v.unk_00 = 0.0f;
    if (obj != 0) {
        switch (type) {
        case 0xCD:
            func_00155EC0(func_001979A0(obj), &v);
            break;
        case 0xCE:
            func_00155F10(func_001979A0(obj), &v);
            v.unk_00 = -v.unk_00;
            v.unk_04 = -v.unk_04;
            v.unk_08 = -v.unk_08;
            break;
        case 0xCF:
            func_00155F30(func_001979A0(obj), &v);
            break;
        case 0xD0:
            func_00155EF0(func_001979A0(obj), &v);
            break;
        default:
            func_001EDBB0(0x27, 0);
            break;
        }
    }
    ((s32 *)&arg2->unk_00)[0] = ((s32 *)&v)[0];
    ((s32 *)&arg2->unk_00)[1] = ((s32 *)&v)[1];
    ((s32 *)&arg2->unk_00)[2] = ((s32 *)&v)[2];
    arg2->unk_0C = 0x15;
    return arg1;
}
