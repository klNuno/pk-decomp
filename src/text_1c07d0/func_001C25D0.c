/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x127];
    u8 unk_127;
} unk_001C25D0_0;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
} unk_001C25D0_1;

unk_001C25D0_0 **HIE_fn_hGetSuperObjectObject(void *);
unk_001C25D0_1 *func_00197860(unk_001C25D0_0 *);
void func_001978A0(unk_001C25D0_0 *, s32);
void func_001978D0(unk_001C25D0_0 *, s32);
void func_001A4DB0(void *, s32);
s32 func_001A70C0(unk_001C25D0_0 *);
s32 func_001C03C0(unk_001C25D0_0 *);
void func_001C2810(unk_001C25D0_0 *, void *);
s32 func_001C2840(unk_001C25D0_0 *);
s32 func_001C2860(unk_001C25D0_0 *);
void func_001C2880(unk_001C25D0_0 *, u16);
u16 func_001C28B0(unk_001C25D0_0 *);
void func_001C28D0(unk_001C25D0_0 *, s32);
s32 func_001C2900(void);
s32 func_001C2910(unk_001C25D0_0 *);
s32 func_001C2930(unk_001C25D0_0 *);
void func_001C2950(unk_001C25D0_0 *, void *);
s32 func_001CC7F0(void *, s32);
extern s32 D_005AB800[];
extern s32 D_005AB84C[];

s32 func_001C25D0(void *arg0) {
    unk_001C25D0_0 *temp0;
    u16 temp1;
    unk_001C25D0_1 *temp2;
    void *temp3;

    temp0 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp2 = func_00197860(temp0);
    if (!temp2) {
        return 1;
    }
    temp3 = temp2->unk_50;
    if (!temp3) {
        return 0;
    }
    if (!func_001A70C0(temp0)) {
        return 1;
    }
    func_001C2950(temp0, 0);
    if (!func_001C2930(temp0)) {
        func_001978D0(temp0, (D_005AB800[0] - D_005AB84C[0]) + func_001C2910(temp0));
        func_001978A0(temp0, D_005AB800[0]);
    }
    func_001C28D0(temp0, func_001C2900());
    temp1 = func_001C28B0(temp0);
    if (temp1 != 0xFFFF) {
        temp1++;
        func_001C2880(temp0, temp1);
    }
    if (func_001C2860(temp0)) {
        if (!temp0->unk_127 && func_001CC7F0(temp3, func_001C03C0(temp0))) {
            func_001A4DB0(arg0, func_001C2840(temp0));
        }
        func_001C2810(temp0, 0);
        return 1;
    }
    return 0;
}
