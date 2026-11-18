/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 unk_00;
        f32 unk_00_f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021DB70_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021DB70_0 *);
s32 func_001273A8(f32);
f32 func_0015A730(s32);
void func_0015BEC0(s32, s32 *, s32 *);
void func_0015C880(s32, s32 *, s32 *);
u8 func_0015C9A0(void);
s32 func_0019D550(f32);

#define UNK_FLOAT(p) ((p)->unk_0C == 8 ? (p)->unk_00.unk_00_f : (f32)(p)->unk_00.unk_00)

s32 *func_0021DB70(s32 arg0, s32 *arg1, unk_func_0021DB70_0 *arg2)
{
    s32 unk_00, unk_04;
    s32 temp;
    s32 op;

    op = arg1[-2];
    switch (op) {
    case 0x70:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = func_001273A8(UNK_FLOAT(arg2)) & 0xFF;
        func_0015BEC0(temp, &unk_00, &unk_04);
        arg2->unk_00.unk_00 = func_0019D550(func_0015A730(unk_00));
        arg2->unk_0C = 6;
        break;
    case 0x71:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = func_001273A8(UNK_FLOAT(arg2)) & 0xFF;
        func_0015BEC0(temp, &unk_00, &unk_04);
        arg2->unk_00.unk_00 = func_0019D550(func_0015A730(unk_04));
        arg2->unk_0C = 6;
        break;
    case 0x6F:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = func_001273A8(UNK_FLOAT(arg2)) & 0xFF;
        func_0015BEC0(temp, &unk_00, &unk_04);
        break;
    case 0x46:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = func_001273A8(UNK_FLOAT(arg2)) & 0xFF;
        func_0015C880(temp, &unk_00, &unk_04);
        arg2->unk_00.unk_00 = func_0019D550(func_0015A730(unk_00));
        arg2->unk_0C = 6;
        break;
    case 0x47:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp = func_001273A8(UNK_FLOAT(arg2)) & 0xFF;
        func_0015C880(temp, &unk_00, &unk_04);
        arg2->unk_00.unk_00 = func_0019D550(func_0015A730(unk_04));
        arg2->unk_0C = 6;
        break;
    case 0x48:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        arg2->unk_00.unk_00 = func_0019D550(func_0015A730(arg2->unk_00.unk_00));
        arg2->unk_0C = 6;
        break;
    case 0x45:
        arg2->unk_00.unk_00 = func_0015C9A0();
        arg2->unk_0C = 6;
        break;
    }
    return arg1;
}
