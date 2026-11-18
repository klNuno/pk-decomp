/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002194D0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
u16 func_001C03C0(s32);
void func_001EDBB0(s32, s32);
s32 func_00208CC0(s32);

s32 *func_002194D0(s32 arg0, s32 *arg1, unk_func_002194D0_0 *arg2) {
    s32 id;
    s32 obj;
    s32 res;
    s32 perso;

    id = arg1[-2];
    res = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(id), arg0, &perso);
    obj = *HIE_fn_hGetSuperObjectObject(perso);
    if (obj != 0) {
        switch (id) {
        case 0x15A:
            res = func_001C03C0(obj);
            break;
        default:
            func_001EDBB0(0x27, 0);
            break;
        }
    }
    arg2->unk_00 = res;
    arg2->unk_0C = 6;
    return arg1;
}
