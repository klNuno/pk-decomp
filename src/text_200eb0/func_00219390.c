/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00219390_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00219390_0;

typedef struct unk_func_00219390_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00219390_1;

unk_func_00219390_0 *HIE_fn_hGetSuperObjectObject();
void fn_vGetUltraOperatorPerso();
u8 func_001A1A80();
u8 func_001BFCB0();
u8 func_001BFD40();
void func_001EDBB0();
s32 func_00208CC0();

s32 *func_00219390(s32 arg0, s32 *arg1, unk_func_00219390_1 *arg2) {
    s32 op;
    s32 obj;
    s32 ret;
    s32 perso;

    op = arg1[-2];
    ret = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_04;
    if (obj != 0) {
        switch (op) {
        case 0x157:
            ret = func_001A1A80(obj);
            break;
        case 0x158:
            ret = func_001BFCB0(obj);
            break;
        case 0x159:
            ret = func_001BFD40(obj);
            break;
        default:
            func_001EDBB0(0x27, 0);
            break;
        }
    }
    arg2->unk_00 = ret;
    arg2->unk_0C = 6;
    return arg1;
}
