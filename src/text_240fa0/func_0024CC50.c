/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x2E4];
    u8 unk_2E4;
    u8 pad_2E5[0x43];
} unk_func_0024CC50_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CC50_2;

typedef struct {
    u8 pad_00[0x4];
    unk_func_0024CC50_2 *unk_04;
} unk_func_0024CC50_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_0024CC50_1 *unk_10;
} unk_func_0024CC50_3;

unk_func_0024CC50_3 *HIE_fn_hGetSuperObjectObject();
void func_00250300();
extern unk_func_0024CC50_1 *D_003601D8;
extern unk_func_0024CC50_0 D_006173A0[];

s32 func_0024CC50(s32 arg0, s32 arg1) {
    unk_func_0024CC50_0 *p;

    D_003601D8 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    p = &D_006173A0[D_003601D8->unk_04->unk_74];
    func_00250300(p);
    p->unk_2E4 = 2;
    return arg1;
}
