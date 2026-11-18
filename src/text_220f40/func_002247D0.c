/* profile: o0_301 */
#include "common.h"

typedef union unk_func_002247D0_0 {
    s32 unk_00;
    u16 unk_00_u16;
    s16 unk_00_s16;
    u8 pad_00[0x10];
} unk_func_002247D0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002247D0_0 *);
void func_00162290(u16 *);
void func_001ED230(s32, s32, s32, s16);
void func_001ED2F0(s32, s32, s32, s16, u16);
void func_001ED3C0(s32, s32, u16, u16);

s32 *func_002247D0(s32 arg0, s32 *arg1) {
    s32 type;
    s32 obj;
    s16 v;
    u16 a;
    u16 b;
    unk_func_002247D0_0 sp60;
    u16 sp7E;

    type = arg1[-2];
    obj = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    obj = sp60.unk_00;
    if (type == 0x1A) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        a = sp60.unk_00_u16;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        b = sp60.unk_00_u16;
        func_001ED3C0(obj, arg0, a, b);
    } else {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        v = sp60.unk_00_s16;
        if (type == 0x14) {
            func_001ED230(obj, arg0, 0, v);
        } else if (type == 0x15) {
            func_001ED230(obj, arg0, 1, v);
        } else {
            if (type == 0x16 || type == 0x17) {
                func_00162290(&sp7E);
            } else {
                arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
                sp7E = sp60.unk_00_u16;
            }
            if (type == 0x16 || type == 0x18) {
                func_001ED2F0(obj, arg0, 0, v, sp7E);
            } else if (type == 0x17 || type == 0x19) {
                func_001ED2F0(obj, arg0, 1, v, sp7E);
            }
        }
    }
    return arg1;
}
