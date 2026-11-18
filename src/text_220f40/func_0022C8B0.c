/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0022C8B0_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0022C8B0_0;

s32 *fn_p_stEvalTree();
s32 fn_h_StandardGameGetSuperObject();
unk_func_0022C8B0_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001B84B0();
s32 func_001979C0();
void func_00139770();
void func_00155E80();
void func_0012D940();
void func_001EDBB0();

s32 *func_0022C8B0(s32 arg0, s32 *arg1) {
    s32 obj;
    s32 *p;
    s32 a;
    s32 b;
    s32 c;
    s32 temp;
    s32 sp70[4];

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    obj = fn_h_StandardGameGetSuperObject(((s32 *)sp70[0])[1]);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    p = sp70;
    switch (temp) {
    case 0xE1:
        a = HIE_fn_hGetSuperObjectObject(obj)->unk_08;
        if (a != 0) {
            b = func_001B84B0(a);
            func_00139770(b, obj, p);
        } else {
            c = func_001979C0(obj);
            func_00155E80(c, p);
            func_0012D940(obj);
        }
        return arg1;
    }
    func_001EDBB0(0x28, 0);
    return arg1;
}
