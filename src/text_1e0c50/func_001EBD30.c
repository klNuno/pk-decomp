/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EBD30_0;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
} unk_func_001EBD30_1;

u8 *fn_p_stEvalTree(s32, u8 *, unk_func_001EBD30_0 *);
void func_001E7490(unk_func_001EBD30_1 *);
void func_001E7540(unk_func_001EBD30_1 *, u8);
u8 func_001EBC70(unk_func_001EBD30_0 *, u8 *, u8);
extern u8 D_00360128;
extern u8 D_0036013C;
extern unk_func_001EBD30_1 *D_00360140;

u8 *func_001EBD30(s32 arg0, u8 *arg1, unk_func_001EBD30_0 *arg2) {
    u8 r;
    u8 t;

    while (1) {
        t = arg1[6];
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        r = func_001EBC70(arg2, arg1, t);
        if ((r & 0x10) == 0x10 || (r & 8) == 8) {
            arg2->unk_00 = r;
            arg2->unk_0C = 0x14;
            return arg1;
        }
        if ((r & 4) == 4) {
            func_001E7490(D_00360140);
        }
        if ((r & 1) == 1) {
            func_001E7540(D_00360140, D_0036013C);
            break;
        }
        if (arg1[7] == 8) {
            r = 0x10;
            break;
        }
        if ((r & 2) == 2) {
            break;
        }
        if (D_00360128) {
            D_00360140->unk_04 = arg1;
        }
    }
    arg2->unk_00 = r;
    arg2->unk_0C = 0x14;
    return arg1;
}
