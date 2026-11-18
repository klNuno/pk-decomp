/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00217C60_0 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x4C];
    s32 unk_54;
    u8 pad_58[0x24];
    s32 unk_7C;
    u8 pad_80[0x74];
    s32 unk_F4;
} unk_func_00217C60_0;

typedef struct unk_func_00217C60_1 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00217C60_1;

typedef struct unk_func_00217C60_2 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00217C60_2;

s32 func_00208CC0(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_00217C60_1 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00217C60_0 *func_001F19D0(s32);

s32 *func_00217C60(s32 arg0, s32 *arg1, unk_func_00217C60_2 *arg2) {
    unk_func_00217C60_0 *obj;
    s32 res;
    s32 brain;
    s32 type;
    s32 perso;

    res = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(0x3E), arg0, &perso);
    brain = HIE_fn_hGetSuperObjectObject(perso)->unk_08;
    if (brain == 0) {
        return arg1;
    }
    obj = func_001F19D0(perso);
    if (obj != NULL) {
        type = arg1[-2];
        switch (type) {
        case 0x3E:
            if ((obj->unk_04 & 1) == 1) {
                res = obj->unk_54;
            }
            break;
        case 0x3F:
            if ((obj->unk_04 & 4) == 4) {
                res = obj->unk_7C;
            }
            break;
        case 0x40:
            if ((obj->unk_04 & 0x10) == 0x10) {
                res = obj->unk_F4;
            }
            break;
        }
    }
    arg2->unk_00 = res;
    arg2->unk_0C = 0x1E;
    return arg1;
}
