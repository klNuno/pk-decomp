/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023D320_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0023D320_0;

typedef struct unk_func_0023D320_1 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0023D320_1;

unk_func_0023D320_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_00137B60(unk_func_0023D320_1 *, s32);
s32 func_001ABB90(s32);
unk_func_0023D320_1 *func_001B84B0(s32);
s32 func_001C6C50(s32, s32);
void func_001EB640(s32);

s32 func_0023D320(s32 arg0, s32 arg1) {
    unk_func_0023D320_1 *p;
    s32 val;
    s32 obj;
    s32 cur;
    s32 sp50[3];

    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    val = sp50[0];
    if (func_001C6C50(arg0, val)) {
        obj = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
        if (obj) {
            p = func_001B84B0(obj);
            if (p) {
                cur = func_001ABB90(val);
                if (p->unk_04 != cur) {
                    func_00137B60(p, cur);
                }
            }
        }
    } else {
        func_001EB640(2);
    }
    return arg1;
}
