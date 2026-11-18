/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C0A50_0 {
    u8 pad_00[0x53];
    u8 unk_53;
    u8 pad_54[0x4];
    s32 unk_58;
} unk_func_001C0A50_0;

typedef struct unk_func_001C0A50_1 {
    u8 pad_00[0x50];
    unk_func_001C0A50_0 *unk_50;
} unk_func_001C0A50_1;

typedef struct unk_func_001C0A50_2 {
    u8 pad_00[0x2];
    u8 unk_02;
    u8 pad_03[0x3];
} unk_func_001C0A50_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001C0A50_1 *func_00197860(s32);
unk_func_001C0A50_2 **func_00197880(s32);
void func_00136010();

void func_001C0A50(s32 arg0) {
    s32 obj;
    unk_func_001C0A50_0 *p;
    s32 i;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    p = func_00197860(obj)->unk_50;
    if (p != NULL && p->unk_58 != 0 && *func_00197880(obj) != NULL) {
        for (i = 0; i < p->unk_53; i++) {
            func_00136010(arg0, (*func_00197880(obj))[i].unk_02);
        }
    }
}
