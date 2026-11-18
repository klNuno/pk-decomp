/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019DE60_0 {
    u8 pad_00[0x30];
    u32 unk_30;
} unk_func_0019DE60_0;

typedef struct unk_func_0019DE60_1 {
    void *unk_00;
    void *unk_04;
    u8 pad_08[0xC];
    void *unk_14;
} unk_func_0019DE60_1;

typedef struct unk_func_0019DE60_2 {
    unk_func_0019DE60_0 *unk_00;
    unk_func_0019DE60_0 *unk_04;
    struct unk_func_0019DE60_2 *unk_08;
} unk_func_0019DE60_2;

unk_func_0019DE60_1 *HIE_fn_hGetSuperObjectObject(unk_func_0019DE60_0 *);
u8 fn_ucIsAnAlwaysObject(unk_func_0019DE60_1 *);
s32 func_001971C0(unk_func_0019DE60_0 *);
s32 func_001979C0(unk_func_0019DE60_0 *);
u8 func_0019ABE0(void *);
s32 func_0019DB20(s32);
void func_0019DD50(unk_func_0019DE60_0 *, s32, unk_func_0019DE60_0 *, s32, s32);
s32 func_0019DE40(unk_func_0019DE60_0 *);
unk_func_0019DE60_2 *func_0019E2C0(void *);
s32 func_0019E2E0(unk_func_0019DE60_0 *);
s32 func_0019E300(unk_func_0019DE60_0 *);
unk_func_0019DE60_0 *func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001B2F30(s32, unk_func_0019DE60_0 *);
u8 func_001B6CF0(void *);
s32 func_001B6D70(void *);
s32 func_001B6DA0(void *);
s32 func_001B6DD0(void *);
u32 func_001BFB20(unk_func_0019DE60_0 *);
void func_001DBD00(s32, s32, s32, s32, s32, void *, s32, s32, u8);
s32 func_001DC030(s32, s32, s32, s32, s32, u8, s32);

void func_0019DE60(unk_func_0019DE60_0 *arg0, s32 arg1, unk_func_0019DE60_0 *arg2, s32 arg3, s32 arg4) {
    unk_func_0019DE60_2 *p;
    unk_func_0019DE60_0 *q;
    void *unk_0;
    void *unk_1;
    s32 unk_2 = 0;
    s32 unk_3 = 0;
    unk_func_0019DE60_0 *unk_4;
    s32 unk_5;

    if (func_0019ABE0(HIE_fn_hGetSuperObjectObject(arg2)->unk_04) != 1) {
        return;
    }
    if (func_0019E300(arg2) != 0) {
        return;
    }
    unk_0 = HIE_fn_hGetSuperObjectObject(arg0)->unk_14;
    unk_1 = HIE_fn_hGetSuperObjectObject(arg2)->unk_14;
    if (func_001B6CF0(unk_0) < (unk_1 != NULL ? func_001B6CF0(unk_1) : 0)) {
        return;
    }
    unk_4 = func_001A7D60(func_001A7D80());
    if (unk_0 != NULL) {
        if (func_001B6D70(unk_0) && (func_001BFB20(arg2) & 8)) {
            return;
        }
        if (arg2 == unk_4) {
            if (func_001B6DD0(unk_0)) {
                return;
            }
        } else if (func_001B6DA0(unk_0) && !fn_ucIsAnAlwaysObject(HIE_fn_hGetSuperObjectObject(arg2))) {
            return;
        }
    }
    if (unk_1 != NULL) {
        if (func_001B6D70(unk_1) && (func_001BFB20(arg0) & 8)) {
            return;
        }
        if (unk_4 == arg0) {
            if (func_001B6DD0(unk_1)) {
                return;
            }
        } else if (func_001B6DA0(unk_1) && !fn_ucIsAnAlwaysObject(HIE_fn_hGetSuperObjectObject(arg0))) {
            return;
        }
    }
    unk_2 = func_0019E2E0(arg0);
    unk_3 = func_0019E2E0(arg2);
    if (unk_2 != 0 && unk_3 != 0) {
        if (!func_001DC030(unk_2, arg4, unk_3, func_001979C0(arg2), func_0019DE40(arg2), (u8)(arg0->unk_30 & 8), 0)) {
            return;
        }
    }
    if (unk_1 != NULL) {
        unk_5 = func_001B2F30(3, arg2);
        if (func_0019DB20(unk_5)) {
            func_001DBD00(arg1, arg3, arg4, unk_5, func_001979C0(arg2), (void *)arg2, 1, func_0019DE40(arg2), (u8)(arg0->unk_30 & 8));
        }
    }
    for (p = func_0019E2C0(HIE_fn_hGetSuperObjectObject(arg2)->unk_00); p != NULL; p = p->unk_08) {
        q = p->unk_04 != NULL ? p->unk_04 : p->unk_00;
        if (func_001971C0(q) == 8 && !(q->unk_30 & 2)) {
            func_0019DD50(arg0, arg1, q, arg3, arg4);
        }
    }
}
