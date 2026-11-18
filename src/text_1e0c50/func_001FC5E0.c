/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    u8 pad_64[0x11];
    u8 unk_75;
} unk_func_001FC5E0_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001FC5E0_0 *unk_10;
} unk_func_001FC5E0_1;

unk_func_001FC5E0_1 *HIE_fn_hGetSuperObjectObject(s32);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
void func_001B4E30(unk_func_001FC5E0_0 *);

s32 func_001FC5E0(s32 arg0, s32 arg1) {
    s32 op = ((s32 *)arg1)[-2];
    s32 perso;
    unk_func_001FC5E0_0 *obj;

    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_10;
    if (obj->unk_75 & 2) {
        func_001B4E30(obj);
    }
    obj->unk_75 &= ~8;
    obj->unk_60 = 0;
    return arg1;
}
