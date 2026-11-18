/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00212890_0;

typedef struct {
    unk_func_00212890_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00212890_1;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00212890_1 *);
void func_0020D820(s32, u16, u8, s32, f32 *);

s32 *func_00212890(s32 arg0, s32 *arg1, unk_func_00212890_1 *arg2) {
    s32 op;
    f32 *v;
    s32 obj;
    u16 id;
    u8 type;

    op = arg1[-2];
    v = (f32 *)arg2;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    obj = fn_h_StandardGameGetSuperObject(arg2->unk_00->unk_04);
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    id = *(u16 *)arg2;
    v[2] = v[1] = v[0] = 0.0f;
    switch (op) {
    case 0xD2:
        type = 2;
        break;
    case 0xD3:
        type = 1;
        break;
    case 0xD4:
        type = 3;
        break;
    case 0xD5:
        type = 0;
        break;
    default:
        type = 0xFF;
        break;
    }
    arg2->unk_0C = 0x15;
    func_0020D820(obj, id, type, 0, v);
    return arg1;
}
