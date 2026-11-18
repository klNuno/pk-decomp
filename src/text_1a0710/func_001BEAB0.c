/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} V;

typedef struct {
    u8 pad[8];
    V unk_08;
    s32 unk_14;
} D;

typedef struct {
    s32 unk_00;
    u8 pad[0x1C];
    D *unk_20;
} O;

O *HIE_fn_hGetSuperObjectObject(s32);
V *func_00155EE0(s32);
s32 func_001997F0(s32);
void func_001BE120(s32, V *);

void func_001BEAB0(s32 arg0, s32 arg1) {
    V *v;

    HIE_fn_hGetSuperObjectObject(arg0)->unk_20->unk_14 = arg1;
    if (arg1 == 0) {
        v = func_00155EE0(func_001997F0(HIE_fn_hGetSuperObjectObject(arg0)->unk_00));
        func_001BE120(arg0, v);
        ((s32 *)&HIE_fn_hGetSuperObjectObject(arg0)->unk_20->unk_08)[0] = ((s32 *)v)[0];
        ((s32 *)&HIE_fn_hGetSuperObjectObject(arg0)->unk_20->unk_08)[1] = ((s32 *)v)[1];
        ((s32 *)&HIE_fn_hGetSuperObjectObject(arg0)->unk_20->unk_08)[2] = ((s32 *)v)[2];
    }
}
