/* profile: opt */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00158BD0_1;

typedef struct {
    u8 pad_00[8];
    unk_func_00158BD0_1 *unk_08;
} unk_func_00158BD0_0;

inline bool test(s32 a, s32 m) {
    return (a & m) == a;
}

extern "C" {
extern unk_func_00158BD0_0 *D_00367AC0[];
s32 func_0015ED70(unk_func_00158BD0_0 *);

bool func_00158BD0(s32 arg0) {
    s32 ret = test(arg0, D_00367AC0[0]->unk_08->unk_04);
    return ret && !((arg0 & func_0015ED70(D_00367AC0[0])) == arg0);
}
}
