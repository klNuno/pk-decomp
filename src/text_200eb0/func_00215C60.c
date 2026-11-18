/* profile: o0_301 */
#include "common.h"

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 fn_p_stEvalTree(s32, s32, s32 *);
s32 func_001971C0(s32);
s32 func_001A4BD0(s32);
void func_001EDBB0(s32, s32);

s32 func_00215C60(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp[4];
    s32 obj;
    s32 so;
    s32 r;
    s32 r2;
    s32 type;

    type = ((s32 *)arg1)[-2];
    so = 0;
    obj = 0;
    if (type == 0x117) {
        arg1 = fn_p_stEvalTree(arg0, arg1, temp);
        so = fn_h_StandardGameGetSuperObject(((s32 *)temp[0])[1]);
        obj = func_001A4BD0(so);
        if (obj == 0) {
            r = 0;
        } else {
            if (func_001971C0(obj) != 2) {
                r2 = 0;
            } else {
                r2 = HIE_fn_hGetSuperObjectObject(obj);
            }
            r = r2;
        }
        arg2[0] = r;
        arg2[3] = 0xB;
        return arg1;
    }
    func_001EDBB0(0x27, 0);
    return arg1;
}
