/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001CC7F0_0 {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
    u8 pad_5E;
    u8 unk_5F;
} unk_func_001CC7F0_0;

typedef struct unk_func_001CC7F0_1 {
    u8 pad_00[0x1C];
    u16 unk_1C;
    u8 pad_1E[0x16];
    u16 unk_34;
} unk_func_001CC7F0_1;

typedef struct unk_func_001CC7F0_2 {
    u16 unk_00;
    u16 unk_02;
    u8 pad_04[0xA];
} unk_func_001CC7F0_2;

typedef struct unk_func_001CC7F0_3 {
    u8 pad_00[0xC];
} unk_func_001CC7F0_3;

unk_func_001CC7F0_1 *func_001CAAA0(s32, s32);
unk_func_001CC7F0_3 *func_001CCA40(unk_func_001CC7F0_0 *, u16);
extern unk_func_001CC7F0_2 *D_00360050;
extern unk_func_001CC7F0_3 *D_00360060;

unk_func_001CC7F0_3 *func_001CC7F0(unk_func_001CC7F0_0 *arg0, u16 arg1) {
    unk_func_001CC7F0_1 *p;
    unk_func_001CC7F0_2 *e;
    s32 id;

    if (arg0->unk_5F) {
        return func_001CCA40(arg0, arg1);
    }
    if (arg1 >= arg0->unk_50) {
        return NULL;
    }
    id = arg0->unk_5C;
    p = func_001CAAA0(id, arg1);
    arg1 -= p->unk_1C;
    e = &D_00360050[p->unk_34 + arg1];
    if (e->unk_02 == 0xFFFF) {
        return NULL;
    }
    return &D_00360060[e->unk_02];
}
